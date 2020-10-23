#include "PaymentHistoryForm.h"
#include "Interop.h"
#include "FileHandler.h"
#include <fstream>
#include <iostream>

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
	fstream file("History.txt", ios::in);
	string Name;
	string Sex;
	string BirthDate;
	string ContactNum;
	string Address;

	while (file.peek() != EOF)
	{
		std::string Name, Sex, BirthDate, ContactNum, Address;
		FileHandler::ReadRow(file, Name, Sex, BirthDate, ContactNum, Address);

		m_PassengerList->Items->Add(Interop::ConvertString(Name));
		m_PassengerList->Items->Add(Interop::ConvertString(Sex));
		m_PassengerList->Items->Add(Interop::ConvertString(BirthDate));
		m_PassengerList->Items->Add(Interop::ConvertString(ContactNum));
		m_PassengerList->Items->Add(Interop::ConvertString(Address));
		m_PassengerList->Items->Add("\n\r");
	}
}