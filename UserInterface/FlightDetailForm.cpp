#include "FlightDetailForm.h"
#include "DataManager.h"
#include "Interop.h"

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

FlightDetailForm::Data^ FlightDetailForm::getData()
{
	using namespace DataManager;

	Data^ data = gcnew Data;
	data->IsOneWay = m_OneWay->Checked;
	data->IsFlyingToPlace = m_To->Checked;
	data->Place = Destination::List()[m_Place->SelectedIndex];
	data->AdultCount = int::Parse(m_AdultCount->Text);
	data->ChildCount = int::Parse(m_ChildCount->Text);;
	data->InfantCount = int::Parse(m_InfantCount->Text);;
	data->FlightClass = FlightClass::List()[m_FlightClass->SelectedIndex];
	data->DepartDate = Interop::ConvertString(m_DepartDate->Value.ToString("yyyy-MM-dd"));
	data->ReturnDate = Interop::ConvertString(m_ReturnDate->Value.ToString("yyyy-MM-dd"));

	return data;
}

System::Void FlightDetailForm::m_Continue_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!ValidateFormData())
		MessageBox::Show("Please fill out the form", "Warning", MessageBoxButtons::OK);

	else if (OnContinue) OnContinue(getData());
}

System::Void FlightDetailForm::FlightDetailForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	using namespace DataManager;

	m_ReturnDate->Enabled = false;

	for (const auto& dest : Destination::List())
		m_Place->Items->Add(Interop::ConvertString(dest.Name));

	for (const auto& fclass : FlightClass::List())
		m_FlightClass->Items->Add(Interop::ConvertString(fclass.Name));

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
