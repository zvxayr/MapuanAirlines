#include "CancelFlightForm.h"

using namespace UserInterface;

CancelFlightForm::CancelFlightForm()
{
	InitializeComponent();
}

CancelFlightForm::~CancelFlightForm()
{
	if (components)
		delete components;
}
