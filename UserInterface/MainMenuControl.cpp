#include "MainMenuControl.h"

using namespace UserInterface;

MainMenuControl::MainMenuControl()
{
	InitializeComponent();
}

MainMenuControl::~MainMenuControl()
{
	if (components)
	{
		delete components;
	}
}

