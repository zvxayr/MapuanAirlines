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

	int i = 0;

	while(Passenger->)
	Passenger::List()[i];
	bool Found = true;
	if (Found == true)
	{
		DialogResult Result = MessageBox::Show("Flight Reservation Found", "Are you sure you want to Cancel?", MessageBoxButtons::YesNo);
		if (Result == DialogResult::Yes)
		{
			//Use Delete Function in array based list
		}
		MessageBox::Show("Notification", "Flight Successfully Cancelled", MessageBoxButtons::OK);
	}
	else
	{
		MessageBox::Show("Flight Reservation Not Found", "Please try again", MessageBoxButtons::OK);
	}
}
