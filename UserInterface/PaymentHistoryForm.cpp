#include "PaymentHistoryForm.h"
#include "Interop.h"
#include <fstream>
#include <iostream>

using namespace std;
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
		getline(file, Name);
		getline(file, Sex);
		getline(file, BirthDate);
		getline(file, ContactNum);
		getline(file, Address);
		m_PassengerList->Items->Add(Interop::ConvertString(Name));
		m_PassengerList->Items->Add(Interop::ConvertString(Sex));
		m_PassengerList->Items->Add(Interop::ConvertString(BirthDate));
		m_PassengerList->Items->Add(Interop::ConvertString(ContactNum));
		m_PassengerList->Items->Add(Interop::ConvertString(Address));
		m_PassengerList->Items->Add("\n\r");
	}
}