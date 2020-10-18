#pragma once
#include "BuyTicketsControl.h"
#include "CancelFlightForm.h"
#include "PaymentHistoryForm.h"
#include "FlightStatusForm.h"

namespace UserInterface {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm();

	protected:
		~MainForm();

	private: ControlsLibrary::TitleBar^ m_TitleBar;
	private: System::Windows::Forms::Button^ m_BuyTicketsButton;
	private: System::Windows::Forms::Button^ m_CancelFlightButton;
	private: System::Windows::Forms::Button^ m_PaymentHistoryButton;
	private: System::Windows::Forms::Button^ m_FlightStatusButton;
	private: System::Windows::Forms::Panel^ m_ControlContainer;

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
			System::Windows::Forms::Panel^ m_NavigationBar;
			this->m_TitleBar = (gcnew ControlsLibrary::TitleBar());
			this->m_BuyTicketsButton = (gcnew System::Windows::Forms::Button());
			this->m_CancelFlightButton = (gcnew System::Windows::Forms::Button());
			this->m_PaymentHistoryButton = (gcnew System::Windows::Forms::Button());
			this->m_FlightStatusButton = (gcnew System::Windows::Forms::Button());
			this->m_ControlContainer = (gcnew System::Windows::Forms::Panel());
			m_NavigationBar = (gcnew System::Windows::Forms::Panel());
			m_NavigationBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// m_TitleBar
			// 
			this->m_TitleBar->AutoSize = true;
			this->m_TitleBar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->m_TitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->m_TitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->m_TitleBar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->m_TitleBar->Location = System::Drawing::Point(0, 0);
			this->m_TitleBar->Margin = System::Windows::Forms::Padding(0);
			this->m_TitleBar->MaximumSize = System::Drawing::Size(0, 30);
			this->m_TitleBar->MinimumSize = System::Drawing::Size(848, 30);
			this->m_TitleBar->Name = L"m_TitleBar";
			this->m_TitleBar->Size = System::Drawing::Size(848, 30);
			this->m_TitleBar->TabIndex = 1;
			// 
			// m_NavigationBar
			// 
			m_NavigationBar->BackColor = System::Drawing::Color::Gainsboro;
			m_NavigationBar->Controls->Add(this->m_BuyTicketsButton);
			m_NavigationBar->Controls->Add(this->m_CancelFlightButton);
			m_NavigationBar->Controls->Add(this->m_PaymentHistoryButton);
			m_NavigationBar->Controls->Add(this->m_FlightStatusButton);
			m_NavigationBar->Dock = System::Windows::Forms::DockStyle::Top;
			m_NavigationBar->Location = System::Drawing::Point(0, 30);
			m_NavigationBar->Margin = System::Windows::Forms::Padding(0);
			m_NavigationBar->MaximumSize = System::Drawing::Size(848, 100);
			m_NavigationBar->MinimumSize = System::Drawing::Size(848, 100);
			m_NavigationBar->Name = L"m_NavigationBar";
			m_NavigationBar->Size = System::Drawing::Size(848, 100);
			m_NavigationBar->TabIndex = 4;
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
			this->m_BuyTicketsButton->TabIndex = 4;
			this->m_BuyTicketsButton->Text = L"Buy Tickets";
			this->m_BuyTicketsButton->UseVisualStyleBackColor = false;
			this->m_BuyTicketsButton->Click += gcnew System::EventHandler(this, &MainForm::m_BuyTicketsButton_Click);
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
			this->m_CancelFlightButton->TabIndex = 7;
			this->m_CancelFlightButton->Text = L"Cancel Flight";
			this->m_CancelFlightButton->UseVisualStyleBackColor = false;
			this->m_CancelFlightButton->Click += gcnew System::EventHandler(this, &MainForm::m_CancelFlightButton_Click);
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
			this->m_PaymentHistoryButton->TabIndex = 5;
			this->m_PaymentHistoryButton->Text = L"Payment History";
			this->m_PaymentHistoryButton->UseVisualStyleBackColor = false;
			this->m_PaymentHistoryButton->Click += gcnew System::EventHandler(this, &MainForm::m_PaymentHistoryButton_Click);
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
			this->m_FlightStatusButton->TabIndex = 6;
			this->m_FlightStatusButton->Text = L"Flight Status";
			this->m_FlightStatusButton->UseVisualStyleBackColor = false;
			this->m_FlightStatusButton->Click += gcnew System::EventHandler(this, &MainForm::m_FlightStatusButton_Click);
			// 
			// m_ControlContainer
			// 
			this->m_ControlContainer->AutoSize = true;
			this->m_ControlContainer->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->m_ControlContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->m_ControlContainer->Location = System::Drawing::Point(0, 130);
			this->m_ControlContainer->Margin = System::Windows::Forms::Padding(0);
			this->m_ControlContainer->MinimumSize = System::Drawing::Size(100, 100);
			this->m_ControlContainer->Name = L"m_ControlContainer";
			this->m_ControlContainer->Size = System::Drawing::Size(848, 380);
			this->m_ControlContainer->TabIndex = 5;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(848, 510);
			this->Controls->Add(this->m_ControlContainer);
			this->Controls->Add(m_NavigationBar);
			this->Controls->Add(this->m_TitleBar);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(848, 510);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			m_NavigationBar->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		BuyTicketsControl^ m_BuyTickets;
		CancelFlightForm^ m_CancelFlight;
		PaymentHistoryForm^ m_PaymentHistory;
		FlightStatusForm^ m_FlightStatus;

		void LoadControl(System::Windows::Forms::UserControl^ control);

	private:
		System::Windows::Forms::Button^ m_ActiveButton;

		void ClearActiveButton();
		void SetActiveButton(System::Windows::Forms::Button^ button);

	private:
		System::Void m_BuyTicketsButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void m_CancelFlightButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void m_PaymentHistoryButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void m_FlightStatusButton_Click(System::Object^ sender, System::EventArgs^ e);

	private:
		bool Exit();

	private:
		System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e);
};

}
