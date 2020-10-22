#include "FlightStatusForm.h"
#include "Interop.h"
#include <fstream>

using namespace std;
using namespace UserInterface;

FlightStatusForm::FlightStatusForm()
{
	InitializeComponent();
	fstream file("TotalMoney.txt", ios::in);
	string TotMoney;
	file >> TotMoney;

	fstream file2("TotalTickets.txt", ios::in);
	string TotTickets;
	file2 >> TotTickets;

	m_MoneyEarned->Items->Add(Interop::ConvertString(TotMoney));
	m_TicketsSold->Items->Add(Interop::ConvertString(TotTickets));
}

FlightStatusForm::~FlightStatusForm()
{
	if (components)
		delete components;
}
