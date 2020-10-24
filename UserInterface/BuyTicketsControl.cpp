#include "BuyTicketsControl.h"
#include "DataManager.h"
#include "FlightClass.h"
#include "Destination.h"
#include "Passenger.h"
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
	m_Data = gcnew Data;

	m_Data->FlightDetails->IsOneWay = flightDetails->IsOneWay;
	m_Data->FlightDetails->IsFlyingToPlace = flightDetails->IsFlyingToPlace;
	m_Data->FlightDetails->Place = flightDetails->Place;
	m_Data->FlightDetails->AdultCount = flightDetails->AdultCount;
	m_Data->FlightDetails->ChildCount = flightDetails->ChildCount;
	m_Data->FlightDetails->InfantCount = flightDetails->InfantCount;
	m_Data->FlightDetails->FlightClass = flightDetails->FlightClass;
	m_Data->FlightDetails->DepartDate = flightDetails->DepartDate;
	m_Data->FlightDetails->ReturnDate = flightDetails->ReturnDate;

	MountForm(m_PassengerDetailForm);
}

void BuyTicketsControl::PassengerDetails_Entered(PassengerDetailForm::Data^ passengerDetails)
{
	m_Data->PassengerDetails->passenger.SurName = passengerDetails->passenger.SurName;
	m_Data->PassengerDetails->passenger.GivenName = passengerDetails->passenger.GivenName;
	m_Data->PassengerDetails->passenger.MiddleName = passengerDetails->passenger.MiddleName;
	m_Data->PassengerDetails->passenger.Sex = passengerDetails->passenger.Sex;
	m_Data->PassengerDetails->passenger.BirthDate = passengerDetails->passenger.BirthDate;
	m_Data->PassengerDetails->passenger.ContactNumber = passengerDetails->passenger.ContactNumber;
	m_Data->PassengerDetails->passenger.Address = passengerDetails->passenger.Address;

	MountForm(m_AdditionalServicesForm);
}

void BuyTicketsControl::AdditionalServices_Selected(AdditionalServicesForm::Data^ additionalServices)
{
	m_Data->AdditionalServices->Insurance = additionalServices->Insurance;
	m_Data->AdditionalServices->Food = additionalServices->Food;
	m_Data->AdditionalServices->Seats = additionalServices->Seats;

	auto& fclass = m_Data->FlightDetails->FlightClass;

	if (additionalServices->Seats)
	{
		m_SeatSelectionForm->Show();
		m_SeatSelectionForm->SetWindow(fclass.From, fclass.To);
		m_SeatSelectionForm->Use(m_Data->FlightDetails->DepartDate, m_Data->FlightDetails->IsFlyingToPlace, m_Data->FlightDetails->Place.Name);
		ParentForm->Hide();
	}
	else
	{
		BuyTickets();
		MountForm(m_FlightDetailForm);
	}
}

void BuyTicketsControl::Seats_Selected(SeatSelectionForm::Data^ selectedSeats)
{
	BuyTickets();
	
	m_SeatSelectionForm->Hide();
	ParentForm->Show();

	MountForm(m_FlightDetailForm);
}

void BuyTicketsControl::BuyTickets()
{
	FlightDetailForm::Data^ flightDetails = (% m_Data->FlightDetails);
	PassengerDetailForm::Data^ passengerDetails = (% m_Data->PassengerDetails);
	AdditionalServicesForm::Data^ additionalServices = (% m_Data->AdditionalServices);
	SeatSelectionForm::Data^ selectedSeats = (% m_Data->SelectedSeats);

	// ----------------------------------------------------

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

	// ----------------------------------------------------

	Passenger::create(
		passengerDetails->passenger.SurName,
		passengerDetails->passenger.GivenName,
		passengerDetails->passenger.MiddleName,
		passengerDetails->passenger.Sex,
		passengerDetails->passenger.BirthDate,
		passengerDetails->passenger.ContactNumber,
		passengerDetails->passenger.Address);

	// ----------------------------------------------------

	//TODO:
	if (additionalServices->Insurance)
	{
		TotalBill += 1500;
	}
	if (additionalServices->Food)
	{
		TotalBill += 250;
	}

	if (additionalServices->Seats)
	{
		TotalBill += 300;
	}
	
	// ----------------------------------------------------

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

	if (OnBuy) OnBuy(m_Data);
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

	// mount initial form
	MountForm(m_FlightDetailForm);
}
