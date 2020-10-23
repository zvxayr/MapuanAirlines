#pragma once
#include "FlightDetailForm.h"
#include "PassengerDetailForm.h"
#include "AdditionalServicesForm.h"
#include "SeatSelectionForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace UserInterface {

	ref class BuyTicketsControl;

	public ref class BuyTicketsControlData
	{
	public:
		// TODO: Use proper members instead of these
		FlightDetailForm::Data FlightDetails;
		PassengerDetailForm::Data PassengerDetails;
		AdditionalServicesForm::Data AdditionalServices;
		SeatSelectionForm::Data SelectedSeats;
	};


	/// <summary>
	/// Summary for BuyTicketsControl
	/// </summary>
	public ref class BuyTicketsControl : public System::Windows::Forms::UserControl
	{
	public:
		BuyTicketsControl();

	protected:
		~BuyTicketsControl();
	private: System::Windows::Forms::Panel^ m_FormContainer;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->m_FormContainer = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// m_FormContainer
			// 
			this->m_FormContainer->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->m_FormContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->m_FormContainer->Location = System::Drawing::Point(0, 0);
			this->m_FormContainer->Margin = System::Windows::Forms::Padding(0);
			this->m_FormContainer->Name = L"m_FormContainer";
			this->m_FormContainer->Size = System::Drawing::Size(848, 380);
			this->m_FormContainer->TabIndex = 0;
			// 
			// BuyTicketsControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->m_FormContainer);
			this->Margin = System::Windows::Forms::Padding(0);
			this->MaximumSize = System::Drawing::Size(848, 380);
			this->MinimumSize = System::Drawing::Size(848, 380);
			this->Name = L"BuyTicketsControl";
			this->Size = System::Drawing::Size(848, 380);
			this->Load += gcnew System::EventHandler(this, &BuyTicketsControl::BuyTicketsControl_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		using Data = BuyTicketsControlData;

	private:
		Data^ m_Data;
		void BuyTickets();

	public:
		System::Action<Data^>^ OnBuy;

	private:
		FlightDetailForm^ m_FlightDetailForm;
		PassengerDetailForm^ m_PassengerDetailForm;
		AdditionalServicesForm^ m_AdditionalServicesForm;
		SeatSelectionForm^ m_SeatSelectionForm;

	private:
		void MountForm(System::Windows::Forms::UserControl^ form);
		void FlightDetails_Entered(FlightDetailForm::Data^);
		void PassengerDetails_Entered(PassengerDetailForm::Data^);
		void AdditionalServices_Selected(AdditionalServicesForm::Data^);
		void Seats_Selected(SeatSelectionForm::Data^);
	
	private:
		System::Void BuyTicketsControl_Load(System::Object^ sender, System::EventArgs^ e);
	};
}
