#include "PaymentHistoryForm.h"
#include "Passenger.h"
#include "Interop.h"

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
	m_PassengerList->Items->Clear();
	for (const auto& [Id, SurName, GivenName, MiddleName, Sex, BirthDate, ContactNumber, Address] : Passenger::List())
	{
		m_PassengerList->Items->Add(Id);
		m_PassengerList->Items->Add(Interop::ConvertString(SurName + ", " + GivenName + " " + MiddleName));
		m_PassengerList->Items->Add(Interop::ConvertString(Sex));
		m_PassengerList->Items->Add(Interop::ConvertString(BirthDate));
		m_PassengerList->Items->Add(Interop::ConvertString(ContactNumber));
		m_PassengerList->Items->Add(Interop::ConvertString(Address));
		m_PassengerList->Items->Add("\n\r");
	}	
}