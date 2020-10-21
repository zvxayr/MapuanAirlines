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

PassengerDetailForm::Data^ PassengerDetailForm::getData()
{
	return gcnew Data;
}

System::Void PassengerDetailForm::m_Continue_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (OnContinue) OnContinue(getData());
}
