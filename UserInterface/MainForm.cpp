#include "MainForm.h"
#include "MainMenu.h"

using namespace UserInterface;

MainForm::MainForm()
{
	InitializeComponent();
}

MainForm::~MainForm()
{
	if (components)
	{
		delete components;
	}
}

System::Void MainForm::MainForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	loadControl(gcnew MainMenu());
}

void MainForm::loadControl(System::Windows::Forms::UserControl^ control)
{
	m_ControlContainer->Controls->Clear();
	m_ControlContainer->Controls->Add(control);
}
