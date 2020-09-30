#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	UserInterface::MainForm form;
	Application::Run(% form);
}
