#include "CancelFlightForm.h"
#include "DataManager.h"
#include "UnorderedArrayBasedList.h"
#include "Passenger.h"

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

System::Void BuyTicketsControl::BuyTicketsControl_Load(System::Object^ sender, System::EventArgs^ e)
{
	
}