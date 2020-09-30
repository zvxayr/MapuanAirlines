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

System::Void TitleBar::m_Button_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	auto source = safe_cast<System::Windows::Forms::Label^>(sender);
	source->BackColor = System::Drawing::Color::FromArgb(255, source->BackColor.R, source->BackColor.G, source->BackColor.B);
	source->ForeColor = System::Drawing::SystemColors::ControlLight;
}
System::Void TitleBar::m_Button_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	auto source = safe_cast<System::Windows::Forms::Label^>(sender);
	source->BackColor = System::Drawing::Color::FromArgb(0, source->BackColor.R, source->BackColor.G, source->BackColor.B);
	source->ForeColor = System::Drawing::SystemColors::ControlDark;
}
System::Void TitleBar::TitleBar_Load(System::Object^ sender, System::EventArgs^ e) {
	m_CloseButton->BackColor = System::Drawing::Color::FromArgb(0, m_CloseButton->BackColor.R, m_CloseButton->BackColor.G, m_CloseButton->BackColor.B);
	m_MinimizeButton->BackColor = System::Drawing::Color::FromArgb(0, m_MinimizeButton->BackColor.R, m_MinimizeButton->BackColor.G, m_MinimizeButton->BackColor.B);
}
