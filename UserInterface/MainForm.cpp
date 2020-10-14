#include "MainForm.h"
#include "BuyTicketsControl.h"
#include "CancelFlightForm.h"
#include "PaymentHistoryForm.h"
#include "FlightStatusForm.h"

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
	// replace control in container
	m_ControlContainer->Controls->Clear();
	m_ControlContainer->Controls->Add(control);
}

void MainForm::BuyTickets()
{
	LoadControl(gcnew BuyTicketsControl());
}

void MainForm::CancelFlight()
{
	LoadControl(gcnew CancelFlightForm());
}

void MainForm::PaymentHistory()
{
	LoadControl(gcnew PaymentHistoryForm());
}

void MainForm::FlightStatus()
{
	LoadControl(gcnew FlightStatusForm());
}

bool MainForm::Exit()
{
	System::Windows::Forms::DialogResult response = MessageBox::Show(
		"Are you sure you want to exit?", "Exit?",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question
	);

	if (response == System::Windows::Forms::DialogResult::Yes)
	{
		// clean up resources here
		return true;
	}

	m_NavigationBar->ClearActiveButton();
	return false;
}
