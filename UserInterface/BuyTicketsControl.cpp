#include "BuyTicketsControl.h"

using namespace UserInterface;

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

void BuyTicketsControl::FlightDetails_Entered()
{
	MountForm(m_PassengerDetailForm);
}

void BuyTicketsControl::PassengerDetails_Entered()
{
	MountForm(m_AdditionalServicesForm);
}

void BuyTicketsControl::AdditionalServices_Selected()
{
	MountForm(m_FlightDetailForm);
}

System::Void BuyTicketsControl::BuyTicketsControl_Load(System::Object^ sender, System::EventArgs^ e)
{
	// create the forms
	m_FlightDetailForm = gcnew FlightDetailForm();
	m_PassengerDetailForm = gcnew PassengerDetailForm();
	m_AdditionalServicesForm = gcnew AdditionalServicesForm();

	// attach handlers
	m_FlightDetailForm->OnContinue = gcnew System::Action(this, &BuyTicketsControl::FlightDetails_Entered);
	m_PassengerDetailForm->OnContinue = gcnew System::Action(this, &BuyTicketsControl::PassengerDetails_Entered);
	m_AdditionalServicesForm->OnContinue = gcnew System::Action(this, &BuyTicketsControl::AdditionalServices_Selected);

	// mount initial form
	MountForm(m_FlightDetailForm);
}
