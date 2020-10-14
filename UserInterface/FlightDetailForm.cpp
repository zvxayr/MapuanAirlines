#include "FlightDetailForm.h"
#include "FileReader.h"
#include <fstream>

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

void HighLight(System::Windows::Forms::Control^ control)
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
		MessageBox::Show("Please fill out the form");

	else if (OnContinue) OnContinue();
}

System::Void FlightDetailForm::FlightDetailForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	using namespace DataManager::FileReader;

	m_ReturnDate->Enabled = false;

	{
		std::ifstream file("Destinations.txt");
		while (file.peek() > -1)
		{
			std::string name;
			DataManager::FileReader::Read(file, name);

			double basePrice;
			DataManager::FileReader::Read(file, basePrice);

			m_Place->Items->Add(gcnew String(name.c_str()));
		}
	}

	{
		std::ifstream file("FlightClasses.txt");
		while (file.peek() > -1)
		{
			std::string name;
			DataManager::FileReader::Read(file, name);

			double multiplier;
			DataManager::FileReader::Read(file, multiplier);

			m_FlightClass->Items->Add(gcnew String(name.c_str()));
		}
	}
}

System::Void FlightDetailForm::m_RoundTrip_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	bool isFlightRoundTrip = m_RoundTrip->Checked;

	m_From->Enabled = !isFlightRoundTrip;
	m_To->Enabled = !isFlightRoundTrip;
	m_ReturnDate->Enabled = isFlightRoundTrip;

	if (isFlightRoundTrip)
	{
		m_From->BackColor = m_From->FlatAppearance->CheckedBackColor;
		m_To->BackColor = m_To->FlatAppearance->CheckedBackColor;
	}
	else
	{
		m_From->BackColor = System::Drawing::Color::Gainsboro;
		m_To->BackColor = System::Drawing::Color::Gainsboro;
	}
}

System::Void FlightDetailForm::RemoveHighlight(System::Object^ sender, System::EventArgs^ e)
{
	auto control = safe_cast<System::Windows::Forms::ComboBox^>(sender);

	control->BackColor = System::Drawing::SystemColors::Window;
	control->ForeColor = System::Drawing::SystemColors::WindowText;
}
