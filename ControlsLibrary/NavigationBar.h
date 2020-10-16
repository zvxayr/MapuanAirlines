#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ControlsLibrary {

	/// <summary>
	/// Summary for NavigationBar
	/// </summary>
	public ref class NavigationBar : public System::Windows::Forms::UserControl
	{
	public:
		NavigationBar();

	protected:
		~NavigationBar();

	private: System::Windows::Forms::FlowLayoutPanel^ m_ButtonContainer;
	private: System::Windows::Forms::Button^ m_BuyTicketsButton;
	private: System::Windows::Forms::Button^ m_PaymentHistoryButton;
	private: System::Windows::Forms::Button^ m_FlightStatusButton;
	private: System::Windows::Forms::Button^ m_CancelFlightButton;


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
			this->m_BuyTicketsButton = (gcnew System::Windows::Forms::Button());
			this->m_ButtonContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->m_CancelFlightButton = (gcnew System::Windows::Forms::Button());
			this->m_PaymentHistoryButton = (gcnew System::Windows::Forms::Button());
			this->m_FlightStatusButton = (gcnew System::Windows::Forms::Button());
			this->m_ButtonContainer->SuspendLayout();
			this->SuspendLayout();
			// 
			// m_BuyTicketsButton
			// 
			this->m_BuyTicketsButton->BackColor = System::Drawing::Color::White;
			this->m_BuyTicketsButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->m_BuyTicketsButton->FlatAppearance->BorderSize = 4;
			this->m_BuyTicketsButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
			this->m_BuyTicketsButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->m_BuyTicketsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_BuyTicketsButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_BuyTicketsButton->Location = System::Drawing::Point(16, 15);
			this->m_BuyTicketsButton->Margin = System::Windows::Forms::Padding(16, 15, 8, 15);
			this->m_BuyTicketsButton->MinimumSize = System::Drawing::Size(192, 70);
			this->m_BuyTicketsButton->Name = L"m_BuyTicketsButton";
			this->m_BuyTicketsButton->Size = System::Drawing::Size(192, 70);
			this->m_BuyTicketsButton->TabIndex = 0;
			this->m_BuyTicketsButton->Text = L"Buy Tickets";
			this->m_BuyTicketsButton->UseVisualStyleBackColor = false;
			this->m_BuyTicketsButton->Click += gcnew System::EventHandler(this, &NavigationBar::m_BuyTicketsButton_Click);
			// 
			// m_ButtonContainer
			// 
			this->m_ButtonContainer->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->m_ButtonContainer->BackColor = System::Drawing::Color::Gainsboro;
			this->m_ButtonContainer->Controls->Add(this->m_BuyTicketsButton);
			this->m_ButtonContainer->Controls->Add(this->m_CancelFlightButton);
			this->m_ButtonContainer->Controls->Add(this->m_PaymentHistoryButton);
			this->m_ButtonContainer->Controls->Add(this->m_FlightStatusButton);
			this->m_ButtonContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->m_ButtonContainer->Location = System::Drawing::Point(0, 0);
			this->m_ButtonContainer->Margin = System::Windows::Forms::Padding(0);
			this->m_ButtonContainer->MaximumSize = System::Drawing::Size(848, 100);
			this->m_ButtonContainer->MinimumSize = System::Drawing::Size(848, 100);
			this->m_ButtonContainer->Name = L"m_ButtonContainer";
			this->m_ButtonContainer->Size = System::Drawing::Size(848, 100);
			this->m_ButtonContainer->TabIndex = 1;
			// 
			// m_CancelFlightButton
			// 
			this->m_CancelFlightButton->BackColor = System::Drawing::Color::White;
			this->m_CancelFlightButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->m_CancelFlightButton->FlatAppearance->BorderSize = 4;
			this->m_CancelFlightButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
			this->m_CancelFlightButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->m_CancelFlightButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_CancelFlightButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_CancelFlightButton->Location = System::Drawing::Point(224, 15);
			this->m_CancelFlightButton->Margin = System::Windows::Forms::Padding(8, 15, 8, 15);
			this->m_CancelFlightButton->MinimumSize = System::Drawing::Size(192, 70);
			this->m_CancelFlightButton->Name = L"m_CancelFlightButton";
			this->m_CancelFlightButton->Size = System::Drawing::Size(192, 70);
			this->m_CancelFlightButton->TabIndex = 3;
			this->m_CancelFlightButton->Text = L"Cancel Flight";
			this->m_CancelFlightButton->UseVisualStyleBackColor = false;
			this->m_CancelFlightButton->Click += gcnew System::EventHandler(this, &NavigationBar::m_CancelFlightButton_Click);
			// 
			// m_PaymentHistoryButton
			// 
			this->m_PaymentHistoryButton->BackColor = System::Drawing::Color::White;
			this->m_PaymentHistoryButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->m_PaymentHistoryButton->FlatAppearance->BorderSize = 4;
			this->m_PaymentHistoryButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
			this->m_PaymentHistoryButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->m_PaymentHistoryButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_PaymentHistoryButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->m_PaymentHistoryButton->Location = System::Drawing::Point(432, 15);
			this->m_PaymentHistoryButton->Margin = System::Windows::Forms::Padding(8, 15, 8, 15);
			this->m_PaymentHistoryButton->MinimumSize = System::Drawing::Size(192, 70);
			this->m_PaymentHistoryButton->Name = L"m_PaymentHistoryButton";
			this->m_PaymentHistoryButton->Size = System::Drawing::Size(192, 70);
			this->m_PaymentHistoryButton->TabIndex = 1;
			this->m_PaymentHistoryButton->Text = L"Payment History";
			this->m_PaymentHistoryButton->UseVisualStyleBackColor = false;
			this->m_PaymentHistoryButton->Click += gcnew System::EventHandler(this, &NavigationBar::m_PaymentHistoryButton_Click);
			// 
			// m_FlightStatusButton
			// 
			this->m_FlightStatusButton->BackColor = System::Drawing::Color::White;
			this->m_FlightStatusButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->m_FlightStatusButton->FlatAppearance->BorderSize = 4;
			this->m_FlightStatusButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
			this->m_FlightStatusButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->m_FlightStatusButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_FlightStatusButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_FlightStatusButton->Location = System::Drawing::Point(640, 15);
			this->m_FlightStatusButton->Margin = System::Windows::Forms::Padding(8, 15, 16, 15);
			this->m_FlightStatusButton->MinimumSize = System::Drawing::Size(192, 70);
			this->m_FlightStatusButton->Name = L"m_FlightStatusButton";
			this->m_FlightStatusButton->Size = System::Drawing::Size(192, 70);
			this->m_FlightStatusButton->TabIndex = 2;
			this->m_FlightStatusButton->Text = L"Flight Status";
			this->m_FlightStatusButton->UseVisualStyleBackColor = false;
			this->m_FlightStatusButton->Click += gcnew System::EventHandler(this, &NavigationBar::m_FlightStatusButton_Click);
			// 
			// NavigationBar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->m_ButtonContainer);
			this->MaximumSize = System::Drawing::Size(848, 100);
			this->MinimumSize = System::Drawing::Size(848, 100);
			this->Name = L"NavigationBar";
			this->Size = System::Drawing::Size(848, 100);
			this->m_ButtonContainer->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		// callback handlers
		System::Action^ OnBuyTickets;
		System::Action^ OnCancelFlight;
		System::Action^ OnPaymentHistory;
		System::Action^ OnFlightStatus;
	
	private:
		System::Windows::Forms::Button^ m_ActiveButton;

	public:
		void ClearActiveButton();

	private:
		void SetActiveButton(System::Windows::Forms::Button^ button);

	private:
		System::Void m_BuyTicketsButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void m_CancelFlightButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void m_PaymentHistoryButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void m_FlightStatusButton_Click(System::Object^ sender, System::EventArgs^ e);
};

}
