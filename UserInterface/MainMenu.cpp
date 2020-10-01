#include "MainMenu.h"

using namespace UserInterface;

UserInterface::MainMenu::MainMenu()
{
	InitializeComponent();
}

UserInterface::MainMenu::~MainMenu()
{
	if (components)
	{
		delete components;
	}
}

