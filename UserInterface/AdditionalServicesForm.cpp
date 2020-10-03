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

System::Void AdditionalServicesForm::m_Continue_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (OnContinue) OnContinue();
}
