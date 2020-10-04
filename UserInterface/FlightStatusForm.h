#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UserInterface {

	/// <summary>
	/// Summary for FlightStatusForm
	/// </summary>
	public ref class FlightStatusForm : public System::Windows::Forms::UserControl
	{
	public:
		FlightStatusForm();

	protected:
		~FlightStatusForm();

	private: System::Windows::Forms::TableLayoutPanel^ m_LayoutPanel;
	private: System::Windows::Forms::Label^ m_lbl_TicketSold;
	private: System::Windows::Forms::Label^ m_lbl_MoneyEarned;
	private: System::Windows::Forms::ListBox^ m_TicketsSold;
	private: System::Windows::Forms::ListBox^ m_MoneyEarned;

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
			this->m_LayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->m_lbl_TicketSold = (gcnew System::Windows::Forms::Label());
			this->m_lbl_MoneyEarned = (gcnew System::Windows::Forms::Label());
			this->m_TicketsSold = (gcnew System::Windows::Forms::ListBox());
			this->m_MoneyEarned = (gcnew System::Windows::Forms::ListBox());
			this->m_LayoutPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// m_LayoutPanel
			// 
			this->m_LayoutPanel->ColumnCount = 2;
			this->m_LayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->m_LayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->m_LayoutPanel->Controls->Add(this->m_lbl_TicketSold, 0, 0);
			this->m_LayoutPanel->Controls->Add(this->m_lbl_MoneyEarned, 1, 0);
			this->m_LayoutPanel->Controls->Add(this->m_TicketsSold, 0, 1);
			this->m_LayoutPanel->Controls->Add(this->m_MoneyEarned, 1, 1);
			this->m_LayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->m_LayoutPanel->Location = System::Drawing::Point(0, 0);
			this->m_LayoutPanel->Name = L"m_LayoutPanel";
			this->m_LayoutPanel->RowCount = 2;
			this->m_LayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->m_LayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->m_LayoutPanel->Size = System::Drawing::Size(848, 380);
			this->m_LayoutPanel->TabIndex = 0;
			// 
			// m_lbl_TicketSold
			// 
			this->m_lbl_TicketSold->Cursor = System::Windows::Forms::Cursors::Default;
			this->m_lbl_TicketSold->Dock = System::Windows::Forms::DockStyle::Top;
			this->m_lbl_TicketSold->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_lbl_TicketSold->Location = System::Drawing::Point(0, 0);
			this->m_lbl_TicketSold->Margin = System::Windows::Forms::Padding(0);
			this->m_lbl_TicketSold->Name = L"m_lbl_TicketSold";
			this->m_lbl_TicketSold->Size = System::Drawing::Size(424, 40);
			this->m_lbl_TicketSold->TabIndex = 3;
			this->m_lbl_TicketSold->Text = L"TOTAL TICKETS SOLD";
			this->m_lbl_TicketSold->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// m_lbl_MoneyEarned
			// 
			this->m_lbl_MoneyEarned->Cursor = System::Windows::Forms::Cursors::Default;
			this->m_lbl_MoneyEarned->Dock = System::Windows::Forms::DockStyle::Top;
			this->m_lbl_MoneyEarned->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_lbl_MoneyEarned->Location = System::Drawing::Point(424, 0);
			this->m_lbl_MoneyEarned->Margin = System::Windows::Forms::Padding(0);
			this->m_lbl_MoneyEarned->Name = L"m_lbl_MoneyEarned";
			this->m_lbl_MoneyEarned->Size = System::Drawing::Size(424, 40);
			this->m_lbl_MoneyEarned->TabIndex = 4;
			this->m_lbl_MoneyEarned->Text = L"TOTAL MONEY EARNED";
			this->m_lbl_MoneyEarned->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// m_TicketsSold
			// 
			this->m_TicketsSold->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->m_TicketsSold->FormattingEnabled = true;
			this->m_TicketsSold->Location = System::Drawing::Point(50, 50);
			this->m_TicketsSold->Margin = System::Windows::Forms::Padding(50, 10, 25, 30);
			this->m_TicketsSold->Name = L"m_TicketsSold";
			this->m_TicketsSold->Size = System::Drawing::Size(349, 290);
			this->m_TicketsSold->TabIndex = 5;
			// 
			// m_MoneyEarned
			// 
			this->m_MoneyEarned->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->m_MoneyEarned->FormattingEnabled = true;
			this->m_MoneyEarned->Location = System::Drawing::Point(449, 50);
			this->m_MoneyEarned->Margin = System::Windows::Forms::Padding(25, 10, 50, 30);
			this->m_MoneyEarned->Name = L"m_MoneyEarned";
			this->m_MoneyEarned->Size = System::Drawing::Size(349, 290);
			this->m_MoneyEarned->TabIndex = 6;
			// 
			// FlightStatusForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->m_LayoutPanel);
			this->MaximumSize = System::Drawing::Size(848, 380);
			this->MinimumSize = System::Drawing::Size(848, 380);
			this->Name = L"FlightStatusForm";
			this->Size = System::Drawing::Size(848, 380);
			this->m_LayoutPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
