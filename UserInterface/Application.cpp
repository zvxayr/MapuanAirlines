#include "MainForm.h"
#include "DataManager.h"

using namespace System;
using namespace System::Windows::Forms;

void main()
{
	DataManager::load();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	UserInterface::MainForm form;
	Application::Run(% form);
	DataManager::save();
}
