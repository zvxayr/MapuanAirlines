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
