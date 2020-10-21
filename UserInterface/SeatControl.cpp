#include "SeatControl.h"

using namespace UserInterface;

SeatControl::SeatControl()
{
	InitializeComponent();
}

SeatControl::~SeatControl()
{
	if (components)
		delete components;
}

bool SeatControl::Available::get()
{
	return m_Available;
}

void SeatControl::Available::set(bool value)
{
	m_CheckBox->Enabled = m_Available = value;

	if (m_Available)
	{
		m_CheckBox->BackColor = System::Drawing::Color::Gainsboro;
		m_CheckBox->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
			static_cast<System::Int32>(static_cast<System::Byte>(75)));
	}
	else
	{
		m_CheckBox->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		m_CheckBox->FlatAppearance->CheckedBackColor = System::Drawing::Color::Chocolate;
	}
}

bool SeatControl::Taken::get()
{
	return m_Taken;
}

void SeatControl::Taken::set(bool value)
{
	m_Taken = value;
	m_CheckBox->Checked = m_Taken;
	m_CheckBox->Enabled = !m_Taken;
}
