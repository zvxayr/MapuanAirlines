#include "SeatSelectionForm.h"
#include "Tickets.h"

using namespace DataManager;
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

void SeatSelectionForm::SetWindow(int from, int to)
{
    for each (SeatControl^ seat in m_SeatsContainer)
        seat->Available = from <= seat->Number && seat->Number < to;
}

void SeatSelectionForm::Use(const std::string& date, bool isGoingToPlace, const std::string& place)
{
    Tickets::load(date, isGoingToPlace, place);

    for (size_t i = 0; i < Tickets::List().size(); i++)
    {
        int& passengerId = Tickets::List()[i];
        safe_cast<SeatControl^>(m_SeatsContainer[i])->Taken = passengerId > -1;
    }
}

System::Void SeatSelectionForm::SeatSelectionForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    m_SeatsContainer = gcnew System::Collections::ArrayList;

    for (int i = 0; i < 120; i++)
    {
        SeatControl^ seat = gcnew SeatControl(i);
        seat->Dock = System::Windows::Forms::DockStyle::Fill;
        m_SeatsTable->Controls->Add(seat, (i % 6) + (i % 6) / 3, 1 + i / 6);
        m_SeatsContainer->Add(seat);
    }
}

SeatSelectionForm::Data^ SeatSelectionForm::getData()
{
    return gcnew Data;
}

System::Void SeatSelectionForm::m_Continue_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (OnContinue) OnContinue(getData());
}
