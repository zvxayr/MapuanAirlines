#include "FlightStatusForm.h"
#include "FileHandler.h"
#include "Interop.h"

using namespace DataManager;
using namespace UserInterface;

FlightStatusForm::FlightStatusForm()
{
	InitializeComponent();
	std::ifstream money("TotalMoney.txt");
	std::string totalMoney;
	FileHandler::Read(money, totalMoney);

	std::ifstream tickets("TotalTickets.txt");
	std::string totalTickets;
	FileHandler::Read(tickets, totalTickets);

	m_MoneyEarned->Items->Add(Interop::ConvertString(totalMoney));
	m_TicketsSold->Items->Add(Interop::ConvertString(totalTickets));
}

FlightStatusForm::~FlightStatusForm()
{
	if (components)
		delete components;
}
