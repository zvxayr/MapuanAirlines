#include "SeatSelectionForm.h"

using namespace UserInterface;

SeatSelectionForm::SeatSelectionForm()
{
	InitializeComponent();
}

SeatSelectionForm::~SeatSelectionForm()
{
	if (components)
		delete components;
}

System::Void SeatSelectionForm::SeatSelectionForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    for (int i = 0; i < 120; i++)
    {
        SeatControl^ seat = gcnew SeatControl;
        seat->Dock = System::Windows::Forms::DockStyle::Fill;
        m_SeatsTable->Controls->Add(seat, (i % 6) + (i % 6) / 3, 1 + i / 6);
    }
}

System::Void SeatSelectionForm::m_Continue_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (OnContinue) OnContinue();
}
