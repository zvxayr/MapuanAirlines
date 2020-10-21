#include "BuyTicketsControl.h"
#include "DataManager.h"
#include "FlightClass.h"
#include "Destination.h"
#include "AdditionalServicesForm.h"
#include <fstream>
#include <iostream>

using namespace std;
using namespace UserInterface;
using namespace DataManager;

BuyTicketsControl::BuyTicketsControl()
{
	InitializeComponent();
}

BuyTicketsControl::~BuyTicketsControl()
{
	if (components)
		delete components;
}

void BuyTicketsControl::MountForm(System::Windows::Forms::UserControl^ form)
{
	m_FormContainer->Controls->Clear();
	m_FormContainer->Controls->Add(form);
}

void BuyTicketsControl::FlightDetails_Entered(FlightDetailForm::Data^ flightDetails)
{
	double TotalBill = 0;
	int TotalPassengers = 0;
	auto& fclass = FlightClass::List()[flightDetails->FlightClass];
	double Class = fclass.Multiplier;

	auto& destination = Destination::List()[flightDetails->Destination];
	double Place = destination.BasePrice;

	TotalBill = Place * Class * ((flightDetails->AdultCount) + (flightDetails->ChildCount * 0.5) + (flightDetails->InfantCount * 0.1));

	TotalPassengers = flightDetails->AdultCount + flightDetails->ChildCount + flightDetails->InfantCount;

	if (flightDetails->IsOneWay == false)
	{
		TotalBill = TotalBill * 2;
	}

	fstream get("Total.txt", ios::out);
	get << TotalBill << ", " << TotalPassengers;
	
	MountForm(m_PassengerDetailForm);
}

void BuyTicketsControl::PassengerDetails_Entered()
{
	MountForm(m_AdditionalServicesForm);
}

void BuyTicketsControl::AdditionalServices_Selected(AdditionalServicesForm::Data^ AdditionalServices)
{
	double TotalBill;
	int TotalPassengers;
	fstream file("Total.txt", ios::in);
	file >> TotalBill >> TotalPassengers;

	if (AdditionalServices->Insurance == true)
	{
		TotalBill = TotalBill + 5000;
	}
	m_SeatSelectionForm->Show();


	ParentForm->Hide();
}

void BuyTicketsControl::Seats_Selected()
{
	MessageBox::Show("Tickets Successfully Created", "Ok", MessageBoxButtons::OK);
	m_SeatSelectionForm->Hide();

	ParentForm->Show();
	MountForm(m_FlightDetailForm);
}

System::Void BuyTicketsControl::BuyTicketsControl_Load(System::Object^ sender, System::EventArgs^ e)
{
	// create the forms
	m_FlightDetailForm = gcnew FlightDetailForm();
	m_PassengerDetailForm = gcnew PassengerDetailForm();
	m_AdditionalServicesForm = gcnew AdditionalServicesForm();
	m_SeatSelectionForm = gcnew SeatSelectionForm();

	// attach handlers
	m_FlightDetailForm->OnContinue = gcnew System::Action<FlightDetailForm::Data^>(this, &BuyTicketsControl::FlightDetails_Entered);
	m_PassengerDetailForm->OnContinue = gcnew System::Action(this, &BuyTicketsControl::PassengerDetails_Entered);
	m_AdditionalServicesForm->OnContinue = gcnew System::Action<AdditionalServicesForm::Data^>(this, &BuyTicketsControl::AdditionalServices_Selected);
	m_SeatSelectionForm->OnContinue = gcnew System::Action(this, &BuyTicketsControl::Seats_Selected);

	// mount initial form
	MountForm(m_FlightDetailForm);
}
