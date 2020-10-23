#include "PaymentHistoryForm.h"
#include "Interop.h"
#include "FileHandler.h"
#include <fstream>
#include <iostream>
#include <ctime>

using namespace std;
using namespace DataManager;
using namespace UserInterface;

PaymentHistoryForm::PaymentHistoryForm()
{
	InitializeComponent();
	RefreshForm();
}

PaymentHistoryForm::~PaymentHistoryForm()
{
	if (components)
		delete components;
}

System::Void PaymentHistoryForm::RefreshForm()
{
	int y = 2020;

	time_t now = time(0);
	tm* ltm = localtime(&now);

	// print various components of tm structure.
	int year = 1900 + ltm->tm_year;
	int month = 1 + ltm->tm_mon;
	int day = ltm->tm_mday;

	while (y <= year)
	{
		int m = 10;
		while (m <= month)
		{
			int d = 23;
			while (d <= day)
			{
				ifstream file(to_string(y) + "-" + to_string(m) + "-" + to_string(d) + ".txt");
				m_PassengerList->Items->Add(Interop::ConvertString(to_string(y) + "-" + to_string(m) + "-" + to_string(d)));

				while (file.peek() != EOF)
				{
					std::string Name, Sex, BirthDate, ContactNum, Address, Place;
					FileHandler::ReadRow(file, Name, Sex, BirthDate, ContactNum, Address, Place);

					m_PassengerList->Items->Add(Interop::ConvertString(Name));
					m_PassengerList->Items->Add(Interop::ConvertString(Sex));
					m_PassengerList->Items->Add(Interop::ConvertString(BirthDate));
					m_PassengerList->Items->Add(Interop::ConvertString(ContactNum));
					m_PassengerList->Items->Add(Interop::ConvertString(Address));
					m_PassengerList->Items->Add(Interop::ConvertString(Place));
					m_PassengerList->Items->Add("\n\r");
				}
				d++;
			}
			m++;
		}
		y++;
	}
	
}