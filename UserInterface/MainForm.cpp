#include "MainForm.h"

using namespace UserInterface;

MainForm::MainForm()
{
	InitializeComponent();
}

MainForm::~MainForm()
{
	if (components)
		delete components;
}

System::Void MainForm::MainForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	// Construct Forms
	m_BuyTickets = gcnew BuyTicketsControl();
	m_CancelFlight = gcnew CancelFlightForm();
	m_PaymentHistory = gcnew PaymentHistoryForm();
	m_FlightStatus = gcnew FlightStatusForm();

	// Attach navigation bar callbacks
	m_NavigationBar->OnBuyTickets = gcnew System::Action(this, &MainForm::BuyTickets);
	m_NavigationBar->OnCancelFlight = gcnew System::Action(this, &MainForm::CancelFlight);
	m_NavigationBar->OnPaymentHistory = gcnew System::Action(this, &MainForm::PaymentHistory);
	m_NavigationBar->OnFlightStatus = gcnew System::Action(this, &MainForm::FlightStatus);

	// attach title bar callbacks
	m_TitleBar->OnExit = gcnew System::Func<bool>(this, &MainForm::Exit);
}

void MainForm::LoadControl(System::Windows::Forms::UserControl^ control)
{
	m_ControlContainer->Controls->Clear();
	m_ControlContainer->Controls->Add(control);
}

void MainForm::BuyTickets()
{
	LoadControl(m_BuyTickets);
}

void MainForm::CancelFlight()
{
	LoadControl(m_CancelFlight);
}

void MainForm::PaymentHistory()
{
	LoadControl(m_PaymentHistory);
}

void MainForm::FlightStatus()
{
	LoadControl(m_FlightStatus);
}

bool MainForm::Exit()
{
	System::Windows::Forms::DialogResult response = MessageBox::Show(
		"Are you sure you want to exit?", "Exit?",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question
	);

	if (response == System::Windows::Forms::DialogResult::Yes)
	{
		// TODO: clean up resources here
		return true;
	}

	m_NavigationBar->ClearActiveButton();
	return false;
}
