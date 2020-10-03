#include "PassengerDetailForm.h"

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

System::Void PassengerDetailForm::m_Continue_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (OnContinue) OnContinue();
}
