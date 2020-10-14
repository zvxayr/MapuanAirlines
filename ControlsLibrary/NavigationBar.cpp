#include "pch.h"
#include "NavigationBar.h"

using namespace ControlsLibrary;

NavigationBar::NavigationBar()
{
	InitializeComponent();
}

NavigationBar::~NavigationBar()
{
	if (components)
		delete components;
}

void NavigationBar::SetActiveButton(System::Windows::Forms::Button^ button) {
	if (m_ActiveButton)
		m_ActiveButton->BackColor = System::Drawing::Color::White;

	button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
		static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));

	m_ActiveButton = button;
}

void NavigationBar::ClearActiveButton() {
	if (m_ActiveButton)
		m_ActiveButton->BackColor = System::Drawing::Color::White;

	m_ActiveButton = nullptr;
}

System::Void NavigationBar::m_BuyTicketsButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (m_BuyTicketsButton == m_ActiveButton) return;
	SetActiveButton(m_BuyTicketsButton);
	if (OnBuyTickets) OnBuyTickets();
}

System::Void NavigationBar::m_PaymentHistoryButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (m_PaymentHistoryButton == m_ActiveButton) return;
	SetActiveButton(m_PaymentHistoryButton);
	if (OnPaymentHistory) OnPaymentHistory();
}

System::Void NavigationBar::m_FlightStatusButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (m_FlightStatusButton == m_ActiveButton) return;
	SetActiveButton(m_FlightStatusButton);
	if (OnFlightStatus) OnFlightStatus();
}

System::Void NavigationBar::m_CancelFlightButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (m_CancelFlightButton == m_ActiveButton) return;
	SetActiveButton(m_CancelFlightButton);
	if (OnCancelFlight) OnCancelFlight();
}
