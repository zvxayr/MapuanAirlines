#include "pch.h"
#include "TitleBar.h"

using namespace ControlsLibrary;

TitleBar::TitleBar()
{
	InitializeComponent();
}

TitleBar::~TitleBar()
{
	if (components)
		delete components;
}

System::Void TitleBar::TitleBar_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		this->ParentForm->Left += e->X - lastPoint.X;
		this->ParentForm->Top += e->Y - lastPoint.Y;
	}
}

System::Void TitleBar::TitleBar_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	lastPoint.X = e->X;
	lastPoint.Y = e->Y;
}

System::Void TitleBar::m_CloseButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	// exit when handler returned true or the handler is not defined
	if (!OnExit || OnExit())
		Application::Exit();
}

System::Void TitleBar::m_MinimizeButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->ParentForm->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}

System::Void TitleBar::m_Button_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	auto source = safe_cast<System::Windows::Forms::Button^>(sender);
	source->ForeColor = System::Drawing::SystemColors::ControlLight;
}

System::Void TitleBar::m_Button_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	auto source = safe_cast<System::Windows::Forms::Button^>(sender);
	source->ForeColor = this->ForeColor;
}
