#include "AdditionalServicesForm.h"

using namespace UserInterface;

AdditionalServicesForm::AdditionalServicesForm()
{
	InitializeComponent();
}

AdditionalServicesForm::~AdditionalServicesForm()
{
	if (components)
		delete components;
}

AdditionalServicesForm::Data^ AdditionalServicesForm::getData()
{
	Data^ data = gcnew Data;
	data->Insurance = m_Insurance->Checked;
	data->Food = m_Food->Checked;
	data->Seats = m_Seat->Checked;
	return data;
}

System::Void AdditionalServicesForm::m_Continue_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (OnContinue) OnContinue();
}
