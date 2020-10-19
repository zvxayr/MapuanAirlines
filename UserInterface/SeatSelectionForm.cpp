#include "SeatSelectionForm.h"

using namespace UserInterface;

SeatSelectionForm::SeatSelectionForm()
{
	InitializeComponent();
}

SeatSelectionForm::~SeatSelectionForm()
{
	if (components)
		delete components;
}
