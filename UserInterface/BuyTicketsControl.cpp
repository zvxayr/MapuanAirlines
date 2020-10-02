#include "BuyTicketsControl.h"

using namespace UserInterface;

BuyTicketsControl::BuyTicketsControl()
{
	InitializeComponent();
}

BuyTicketsControl::~BuyTicketsControl()
{
	if (components)
		delete components;
}

void BuyTicketsControl::MountForm(System::Windows::Forms::UserControl^ form)
{
	m_FormContainer->Controls->Clear();
	m_FormContainer->Controls->Add(form);
}

System::Void BuyTicketsControl::BuyTicketsControl_Load(System::Object^ sender, System::EventArgs^ e)
{
	// create forms
	m_FlightDetailForm = gcnew FlightDetailForm();

	// mount initial form
	MountForm(m_FlightDetailForm);
}
