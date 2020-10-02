#include "MainForm.h"

using namespace UserInterface;

MainForm::MainForm()
{
	InitializeComponent();
}

MainForm::~MainForm()
{
	if (components)
	{
		delete components;
	}
}

System::Void MainForm::MainForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	// Attach navigation bar callbacks
	m_NavigationBar->OnBuyTickets = gcnew System::Action(this, &MainForm::BuyTickets);
	m_NavigationBar->OnPaymentHistory = gcnew System::Action(this, &MainForm::PaymentHistory);
	m_NavigationBar->OnFlightStatus = gcnew System::Action(this, &MainForm::FlightStatus);
	m_NavigationBar->OnExit = gcnew System::Action(this, &MainForm::Exit);
}

void MainForm::LoadControl(System::Windows::Forms::UserControl^ control)
{
	// replace control in container
	m_ControlContainer->Controls->Clear();
	m_ControlContainer->Controls->Add(control);
}


void MainForm::BuyTickets()
{
}

void MainForm::PaymentHistory()
{
}

void MainForm::FlightStatus()
{
}

void MainForm::Exit()
{
	System::Windows::Forms::DialogResult response = MessageBox::Show(
		"Are you sure you want to exit?", "Exit?",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (response == System::Windows::Forms::DialogResult::Yes)
		Application::Exit();

	m_NavigationBar->ClearActiveButton();
}
