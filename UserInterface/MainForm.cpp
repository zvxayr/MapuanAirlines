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

	// attach title bar callbacks
	m_TitleBar->OnExit = gcnew System::Func<bool>(this, &MainForm::Exit);
}

void MainForm::LoadControl(System::Windows::Forms::UserControl^ control)
{
	m_ControlContainer->Controls->Clear();
	m_ControlContainer->Controls->Add(control);
}

void MainForm::SetActiveButton(System::Windows::Forms::Button^ button) {
	if (m_ActiveButton)
		m_ActiveButton->BackColor = System::Drawing::Color::White;

	button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
		static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));

	m_ActiveButton = button;
}

void MainForm::ClearActiveButton() {
	if (m_ActiveButton)
		m_ActiveButton->BackColor = System::Drawing::Color::White;

	m_ActiveButton = nullptr;
}

System::Void MainForm::m_BuyTicketsButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (m_BuyTicketsButton == m_ActiveButton) return;
	SetActiveButton(m_BuyTicketsButton);
	LoadControl(m_BuyTickets);
}

System::Void MainForm::m_CancelFlightButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (m_CancelFlightButton == m_ActiveButton) return;
	SetActiveButton(m_CancelFlightButton);
	LoadControl(m_CancelFlight);
}

System::Void MainForm::m_PaymentHistoryButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (m_PaymentHistoryButton == m_ActiveButton) return;
	SetActiveButton(m_PaymentHistoryButton);
	LoadControl(m_PaymentHistory);
}

System::Void MainForm::m_FlightStatusButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (m_FlightStatusButton == m_ActiveButton) return;
	SetActiveButton(m_FlightStatusButton);
	LoadControl(m_FlightStatus);
}

bool MainForm::Exit()
{
	System::Windows::Forms::DialogResult response = MessageBox::Show(
		"Are you sure you want to exit?", "Exit?",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question
	);

	if (response == System::Windows::Forms::DialogResult::Yes)
		return true;

	ClearActiveButton();
	return false;
}
