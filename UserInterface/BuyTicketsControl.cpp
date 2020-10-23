#include "BuyTicketsControl.h"
#include "DataManager.h"
#include "FlightClass.h"
#include "Destination.h"
#include "FileHandler.h"
#include "PaymentHistoryForm.h"
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
	m_Data->FlightDetails->IsOneWay = flightDetails->IsOneWay;
	m_Data->FlightDetails->IsFlyingToPlace = flightDetails->IsFlyingToPlace;
	m_Data->FlightDetails->Place = flightDetails->Place;
	m_Data->FlightDetails->AdultCount = flightDetails->AdultCount;
	m_Data->FlightDetails->ChildCount = flightDetails->ChildCount;
	m_Data->FlightDetails->InfantCount = flightDetails->InfantCount;
	m_Data->FlightDetails->FlightClass = flightDetails->FlightClass;

	auto& fclass = flightDetails->FlightClass;
	auto& destination = flightDetails->Place;

	double TotalBill = destination.BasePrice * fclass.Multiplier * (
		(flightDetails->AdultCount) +
		(flightDetails->ChildCount * 0.5) +
		(flightDetails->InfantCount * 0.1)
	);

	int TotalPassengers = flightDetails->AdultCount + flightDetails->ChildCount + flightDetails->InfantCount;

	if (!flightDetails->IsOneWay)
		TotalBill = TotalBill * 2;

	ofstream file("Total.txt", ios::out);
	FileHandler::WriteRow(file, TotalBill, TotalPassengers);

	MountForm(m_PassengerDetailForm);
}

void BuyTicketsControl::PassengerDetails_Entered(PassengerDetailForm::Data^ passengerDetails)
{
	m_Data->PassengerDetails->Name = passengerDetails->Name;
	m_Data->PassengerDetails->Sex = passengerDetails->Sex;
	m_Data->PassengerDetails->BirthDate = passengerDetails->BirthDate;
	m_Data->PassengerDetails->ContactNum = passengerDetails->ContactNum;
	m_Data->PassengerDetails->Address = passengerDetails->Address;

	ofstream file("History.txt", ios::app);
	FileHandler::WriteRow(file,
		passengerDetails->Name,
		passengerDetails->Sex,
		passengerDetails->BirthDate,
		passengerDetails->ContactNum,
		passengerDetails->Address,
		m_Data->FlightDetails->Place.Name
	);

	MountForm(m_AdditionalServicesForm);
}

void BuyTicketsControl::AdditionalServices_Selected(AdditionalServicesForm::Data^ additionalServices)
{
	double TotalBill;
	int TotalPassengers;

	ifstream fin("Total.txt", ios::in);
	FileHandler::ReadRow(fin, TotalBill, TotalPassengers);

	//TODO:
	if (additionalServices->Insurance)
	{
		TotalBill = TotalBill;
	}
	if (additionalServices->Food)
	{

	}
	if (additionalServices->Seats)
	{
		ofstream fout("Total.txt", ios::out);
		FileHandler::WriteRow(fout, TotalBill, TotalPassengers);

		m_SeatSelectionForm->Show();
		ParentForm->Hide();
	}
	else
	{
		ofstream fout("Total.txt", ios::out);
		FileHandler::WriteRow(fout, TotalBill, TotalPassengers);
		double TotalBill;
		int TotalPassengers;

		ifstream fin("Total.txt", ios::in);
		FileHandler::ReadRow(fin, TotalBill, TotalPassengers);

		double TotalMoney;
		int TotalTickets;

		MessageBox::Show("Tickets Successfully Created" + "\n\r" + "Total bill: " + TotalBill.ToString() + "\n\r" + "Total number of passengers: " + TotalPassengers.ToString(), "Ok", MessageBoxButtons::OK);
		fstream get("TotalMoney.txt", ios::in);
		get >> TotalMoney;

		fstream get2("TotalTickets.txt", ios::in);
		get2 >> TotalTickets;

		fstream file2("TotalMoney.txt", ios::out);
		file2 << TotalMoney + TotalBill;

		fstream file3("TotalTickets.txt", ios::out);
		file3 << TotalTickets + TotalPassengers;

		

		ParentForm->Show();
		MountForm(m_FlightDetailForm);
	}

	
}

void BuyTicketsControl::Seats_Selected(SeatSelectionForm::Data^ selectedSeats)
{
	double TotalBill;
	int TotalPassengers;

	ifstream fin("Total.txt", ios::in);
	FileHandler::ReadRow(fin, TotalBill, TotalPassengers);

	double TotalMoney;
	int TotalTickets;

	MessageBox::Show("Tickets Successfully Created" + "\n\r" + "Total bill: " + TotalBill.ToString() + "\n\r" + "Total number of passengers: " + TotalPassengers.ToString(), "Ok", MessageBoxButtons::OK);
	fstream get("TotalMoney.txt", ios::in);
	get >> TotalMoney;

	fstream get2("TotalTickets.txt", ios::in);
	get2 >> TotalTickets;

	fstream file2("TotalMoney.txt", ios::out);
	file2 << TotalMoney + TotalBill;

	fstream file3("TotalTickets.txt", ios::out);
	file3 << TotalTickets + TotalPassengers;
	
	m_SeatSelectionForm->Hide();

	ParentForm->Show();
	MountForm(m_FlightDetailForm);

	if (OnBuy) OnBuy(m_Data);
}

void BuyTicketsControl::BuyTickets(Data^ data)
{

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
	m_PassengerDetailForm->OnContinue = gcnew System::Action<PassengerDetailForm::Data^>(this, &BuyTicketsControl::PassengerDetails_Entered);
	m_AdditionalServicesForm->OnContinue = gcnew System::Action<AdditionalServicesForm::Data^>(this, &BuyTicketsControl::AdditionalServices_Selected);
	m_SeatSelectionForm->OnContinue = gcnew System::Action<SeatSelectionForm::Data^>(this, &BuyTicketsControl::Seats_Selected);

	OnBuy = gcnew System::Action<Data^>(this, &BuyTicketsControl::BuyTickets);

	// mount initial form
	MountForm(m_FlightDetailForm);
}
