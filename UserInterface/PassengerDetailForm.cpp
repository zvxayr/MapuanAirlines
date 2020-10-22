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
	string Sex;

	if (m_Sex_Male->Checked)
	{
		Sex = "Male";
	}
	else
	{
		Sex = "Female";
	}

	data->Name = Interop::ConvertString(m_Surname->Text)  + ", " + Interop::ConvertString(m_Surname->Text) + " " + Interop::ConvertString(m_Surname->Text);
	data->Sex = Sex;
	data->BirthDate = Interop::ConvertString(m_BirthDate->Text);
	data->ContactNum = Interop::ConvertString(m_ContactNumber->Text);
	data->Address = Interop::ConvertString(m_Address->Text);

	return data;
}

System::Void PassengerDetailForm::m_Continue_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (OnContinue) OnContinue(getData());
}
