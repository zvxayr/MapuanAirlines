#include "CancelFlightForm.h"
#include "DataManager.h"
#include "UnorderedArrayBasedList.h"
#include "Passenger.h"
#include "Interop.h"

using namespace std;
using namespace DataManager;
using namespace UserInterface;

CancelFlightForm::CancelFlightForm()
{
	InitializeComponent();
}

CancelFlightForm::~CancelFlightForm()
{
	if (components)
		delete components;
}

System::Void CancelFlightForm::m_Search_Click(System::Object^ sender, System::EventArgs^ e)
{
	//replace with the search function for array based list
	using namespace DataManager;
	using namespace Passenger;

	bool found = false;

	for (int i = 0; i < Passenger::List().size() && found == false; i++)
	{
		auto& passenger = Passenger::List()[i];
		string name = passenger.SurName + ", " + passenger.GivenName + " " +  passenger.MiddleName;
		if (name == Interop::ConvertString(m_SearchBox->Text))
		{
			found = true;
		}
		if (found == true)
		{
			DialogResult Result = MessageBox::Show("Flight Reservation Found", "Are you sure you want to Cancel?" + Interop::ConvertString(to_string(i)), MessageBoxButtons::YesNo);
			if (Result == DialogResult::Yes)
			{
				Passenger::Erase(i);
				//Use Delete Function in array based list
			}
			MessageBox::Show("Notification", "Flight Successfully Cancelled", MessageBoxButtons::OK);
		}
		else
		{
			MessageBox::Show("Flight Reservation Not Found", "Please try again", MessageBoxButtons::OK);
		}
	}
}
