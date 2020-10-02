#include "BuyTicketsControl.h"

using namespace UserInterface;

BuyTicketsControl::BuyTicketsControl()
{
	InitializeComponent();
}

BuyTicketsControl::~BuyTicketsControl()
{
	if (components)
		delete components;
}
