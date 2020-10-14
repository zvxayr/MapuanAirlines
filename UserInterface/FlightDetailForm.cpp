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

bool FlightDetailForm::IsFormDataInvalid()
{
	// TODO: Implement this method
	return false;
}

System::Void FlightDetailForm::m_Continue_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (IsFormDataInvalid())
		MessageBox::Show("Please fill out the form");
	else if (OnContinue) OnContinue();
}

System::Void FlightDetailForm::FlightDetailForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	using namespace DataManager::FileReader;

	std::ifstream file("Destinations.txt");
	while (file.peek() > -1)
	{
		std::string name;
		DataManager::FileReader::Read(file, name);

		double basePrice;
		DataManager::FileReader::Read(file, basePrice);

		m_Destination->Items->Add(gcnew String(name.c_str()));
	}

}
