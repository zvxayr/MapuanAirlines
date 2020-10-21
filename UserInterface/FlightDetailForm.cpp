#include "FlightDetailForm.h"
#include "Destination.h"
#include "FlightClass.h"

using namespace UserInterface;

FlightDetailForm::FlightDetailForm()
{
	InitializeComponent();
}

FlightDetailForm::~FlightDetailForm()
{
	if (components)
		delete components;
}

void FlightDetailForm::HighLight(System::Windows::Forms::Control^ control)
{
	control->BackColor = System::Drawing::Color::OrangeRed;
	control->ForeColor = System::Drawing::Color::Gainsboro;
}

bool FlightDetailForm::ValidateFormData()
{
	if (m_FlightClass->SelectedIndex == -1)
		HighLight(m_FlightClass);

	if (m_Place->SelectedIndex == -1)
		HighLight(m_Place);

	return m_FlightClass->SelectedIndex > -1 && m_Place->SelectedIndex > -1;
}

System::Void FlightDetailForm::m_Continue_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!ValidateFormData())
		MessageBox::Show("Please fill out the form", "Warning", MessageBoxButtons::OK);

	else if (OnContinue) OnContinue();
}

System::Void FlightDetailForm::FlightDetailForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	using namespace DataManager;

	m_ReturnDate->Enabled = false;

	for (const auto& dest : Destination::List())
		m_Place->Items->Add(gcnew String(dest.Name.c_str()));

	for (const auto& fclass : FlightClass::List())
		m_FlightClass->Items->Add(gcnew String(fclass.Name.c_str()));

}

System::Void FlightDetailForm::m_RoundTrip_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	// You can only return on round-trips
	m_ReturnDate->Enabled = m_RoundTrip->Checked;
}

System::Void FlightDetailForm::RemoveHighlight(System::Object^ sender, System::EventArgs^ e)
{
	auto control = safe_cast<System::Windows::Forms::ComboBox^>(sender);

	control->BackColor = System::Drawing::SystemColors::Window;
	control->ForeColor = System::Drawing::SystemColors::WindowText;
}
