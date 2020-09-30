#include "pch.h"
#include "TitleBar.h"

using namespace ControlsLibrary;

System::Void TitleBar::TitleBar_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		this->ParentForm->Left += e->X - lastPoint.X;
		this->ParentForm->Top += e->Y - lastPoint.Y;
	}
}

System::Void TitleBar::TitleBar_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	lastPoint.X = e->X;
	lastPoint.Y = e->Y;
}

System::Void TitleBar::m_CloseButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

System::Void TitleBar::m_MinimizeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ParentForm->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}
