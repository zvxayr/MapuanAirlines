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

static std::vector<int> seatNumbers;

void SeatSelectionForm::SetWindow(int from, int to)
{
    for each (SeatControl^ seat in m_SeatsContainer)
        seat->Available = from <= seat->Number && seat->Number < to;
}

void SeatSelectionForm::Use(const std::string& date, bool isGoingToPlace, const std::string& place)
{
    Tickets::load(date, isGoingToPlace, place);
    seatNumbers.clear();

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
        // Note: Intellisense does not seem to recognize this line of code.
        //       But it still compiles successfully.
        seat->OnClick = gcnew System::Action<int, bool>(this, &SeatSelectionForm::SeatClicked);
        m_SeatsTable->Controls->Add(seat, (i % 6) + (i % 6) / 3, 1 + i / 6);
        m_SeatsContainer->Add(seat);
    }
}

#include <iostream>

SeatSelectionForm::Data^ SeatSelectionForm::getData()
{
    Data^ data = gcnew Data;
    data->seatNumbers.clear();
    data->seatNumbers = seatNumbers;

    for (int& seatNumber : seatNumbers)
        std::cout << seatNumber << std::endl;

    return data;
}

System::Void SeatSelectionForm::m_Continue_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (OnContinue) OnContinue(getData());
}

void SeatSelectionForm::SeatClicked(int seatNumber, bool isChecked)
{
    if (isChecked)
        seatNumbers.push_back(seatNumber);
    else
        for (size_t i = 0; i < seatNumbers.size(); i++)
            if (seatNumbers[i] == seatNumber)
                seatNumbers.erase(seatNumbers.begin() + i);
}
