#include "PassengerDetailForm.h"
#include "DataManager.h"
#include "Interop.h"

using namespace UserInterface;

PassengerDetailForm::PassengerDetailForm()
{
	InitializeComponent();
}

PassengerDetailForm::~PassengerDetailForm()
{
	if (components)
		delete components;
}

PassengerDetailForm::Data^ PassengerDetailForm::getData()
{
	Data^ data = gcnew Data;
	auto& passenger = data->passenger;
	passenger.SurName = Interop::ConvertString(m_Surname->Text);
	passenger.GivenName = Interop::ConvertString(m_GivenName->Text);
	passenger.MiddleName = Interop::ConvertString(m_MiddleName->Text);
	passenger.Sex = m_Sex_Male->Checked ? "Male" : "Female";
	passenger.BirthDate = Interop::ConvertString(m_BirthDate->Text);
	passenger.ContactNumber = Interop::ConvertString(m_ContactNumber->Text);
	passenger.Address = Interop::ConvertString(m_Address->Text);

	return data;
}

System::Void PassengerDetailForm::m_Continue_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (OnContinue) OnContinue(getData());
}
