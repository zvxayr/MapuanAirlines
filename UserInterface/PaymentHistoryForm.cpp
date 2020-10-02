#include "PaymentHistoryForm.h"

using namespace UserInterface;

PaymentHistoryForm::PaymentHistoryForm()
{
	InitializeComponent();
}

PaymentHistoryForm::~PaymentHistoryForm()
{
	if (components)
		delete components;
}
