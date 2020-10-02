#include "FlightStatusForm.h"

using namespace UserInterface;

FlightStatusForm::FlightStatusForm()
{
	InitializeComponent();
}

FlightStatusForm::~FlightStatusForm()
{
	if (components)
		delete components;
}
