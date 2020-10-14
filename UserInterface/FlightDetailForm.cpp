#include "FlightDetailForm.h"

using namespace UserInterface;

FlightDetailForm::FlightDetailForm()
{
	InitializeComponent();
}

FlightDetailForm::~FlightDetailForm()
{
	if (components)
		delete components;
}

bool FlightDetailForm::IsFormDataInvalid()
{
	// TODO: Implement this method
	return false;
}

System::Void FlightDetailForm::m_Continue_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (IsFormDataInvalid())
		MessageBox::Show("Please fill out the form");
	else if (OnContinue) OnContinue();
}
