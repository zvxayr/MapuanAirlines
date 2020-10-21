#pragma once

namespace UserInterface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SeatSelection
	/// </summary>
	public ref class SeatSelectionForm : public System::Windows::Forms::Form
	{
	public:
		SeatSelectionForm();

	protected:
		~SeatSelectionForm();

	private: ControlsLibrary::TitleBar^ m_TitleBar;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Panel^ m_Container;
    private: System::Windows::Forms::TableLayoutPanel^ m_SeatsTable;
    private: System::Windows::Forms::Button^ m_Continue;




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
            System::Windows::Forms::Label^ m_lbl_18;
            System::Windows::Forms::Label^ m_lbl_17;
            System::Windows::Forms::Label^ m_lbl_19;
            System::Windows::Forms::Label^ m_lbl_20;
            System::Windows::Forms::Label^ m_lbl_13;
            System::Windows::Forms::Label^ m_lbl_11;
            System::Windows::Forms::Label^ m_lbl_12;
            System::Windows::Forms::Label^ m_lbl_10;
            System::Windows::Forms::Label^ m_lbl_14;
            System::Windows::Forms::Label^ m_lbl_09;
            System::Windows::Forms::Label^ m_lbl_15;
            System::Windows::Forms::Label^ m_lbl_16;
            System::Windows::Forms::Label^ m_lbl_01;
            System::Windows::Forms::Label^ m_lbl_03;
            System::Windows::Forms::Label^ m_lbl_04;
            System::Windows::Forms::Label^ m_lbl_06;
            System::Windows::Forms::Label^ m_lbl_08;
            System::Windows::Forms::Label^ m_lbl_05;
            System::Windows::Forms::Label^ m_lbl_07;
            System::Windows::Forms::Label^ m_lbl_02;
            System::Windows::Forms::Label^ m_lbl_C;
            System::Windows::Forms::Label^ m_lbl_D;
            System::Windows::Forms::Label^ m_lbl_F;
            System::Windows::Forms::Label^ m_lbl_E;
            System::Windows::Forms::Label^ m_lbl_B;
            System::Windows::Forms::Label^ m_lbl_A;
            System::Windows::Forms::Panel^ m_BottomMargin;
            this->m_TitleBar = (gcnew ControlsLibrary::TitleBar());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->m_Container = (gcnew System::Windows::Forms::Panel());
            this->m_SeatsTable = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->m_Continue = (gcnew System::Windows::Forms::Button());
            m_lbl_18 = (gcnew System::Windows::Forms::Label());
            m_lbl_17 = (gcnew System::Windows::Forms::Label());
            m_lbl_19 = (gcnew System::Windows::Forms::Label());
            m_lbl_20 = (gcnew System::Windows::Forms::Label());
            m_lbl_13 = (gcnew System::Windows::Forms::Label());
            m_lbl_11 = (gcnew System::Windows::Forms::Label());
            m_lbl_12 = (gcnew System::Windows::Forms::Label());
            m_lbl_10 = (gcnew System::Windows::Forms::Label());
            m_lbl_14 = (gcnew System::Windows::Forms::Label());
            m_lbl_09 = (gcnew System::Windows::Forms::Label());
            m_lbl_15 = (gcnew System::Windows::Forms::Label());
            m_lbl_16 = (gcnew System::Windows::Forms::Label());
            m_lbl_01 = (gcnew System::Windows::Forms::Label());
            m_lbl_03 = (gcnew System::Windows::Forms::Label());
            m_lbl_04 = (gcnew System::Windows::Forms::Label());
            m_lbl_06 = (gcnew System::Windows::Forms::Label());
            m_lbl_08 = (gcnew System::Windows::Forms::Label());
            m_lbl_05 = (gcnew System::Windows::Forms::Label());
            m_lbl_07 = (gcnew System::Windows::Forms::Label());
            m_lbl_02 = (gcnew System::Windows::Forms::Label());
            m_lbl_C = (gcnew System::Windows::Forms::Label());
            m_lbl_D = (gcnew System::Windows::Forms::Label());
            m_lbl_F = (gcnew System::Windows::Forms::Label());
            m_lbl_E = (gcnew System::Windows::Forms::Label());
            m_lbl_B = (gcnew System::Windows::Forms::Label());
            m_lbl_A = (gcnew System::Windows::Forms::Label());
            m_BottomMargin = (gcnew System::Windows::Forms::Panel());
            this->panel1->SuspendLayout();
            this->m_Container->SuspendLayout();
            this->m_SeatsTable->SuspendLayout();
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
            this->m_TitleBar->MinimumSize = System::Drawing::Size(0, 30);
            this->m_TitleBar->Name = L"m_TitleBar";
            this->m_TitleBar->Size = System::Drawing::Size(480, 30);
            this->m_TitleBar->TabIndex = 0;
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->m_Continue);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->panel1->Location = System::Drawing::Point(0, 580);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(480, 60);
            this->panel1->TabIndex = 6;
            // 
            // m_Container
            // 
            this->m_Container->AutoScroll = true;
            this->m_Container->AutoScrollMinSize = System::Drawing::Size(12, 0);
            this->m_Container->AutoSize = true;
            this->m_Container->Controls->Add(this->m_SeatsTable);
            this->m_Container->Controls->Add(m_BottomMargin);
            this->m_Container->Dock = System::Windows::Forms::DockStyle::Fill;
            this->m_Container->Location = System::Drawing::Point(0, 30);
            this->m_Container->Margin = System::Windows::Forms::Padding(0);
            this->m_Container->Name = L"m_Container";
            this->m_Container->Padding = System::Windows::Forms::Padding(34);
            this->m_Container->Size = System::Drawing::Size(480, 550);
            this->m_Container->TabIndex = 7;
            // 
            // m_SeatsTable
            // 
            this->m_SeatsTable->AutoSize = true;
            this->m_SeatsTable->ColumnCount = 7;
            this->m_SeatsTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
            this->m_SeatsTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
            this->m_SeatsTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
            this->m_SeatsTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
            this->m_SeatsTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
            this->m_SeatsTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
            this->m_SeatsTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
            this->m_SeatsTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->m_SeatsTable->Controls->Add(m_lbl_18, 3, 18);
            this->m_SeatsTable->Controls->Add(m_lbl_17, 3, 17);
            this->m_SeatsTable->Controls->Add(m_lbl_19, 3, 19);
            this->m_SeatsTable->Controls->Add(m_lbl_20, 3, 20);
            this->m_SeatsTable->Controls->Add(m_lbl_13, 3, 13);
            this->m_SeatsTable->Controls->Add(m_lbl_11, 3, 11);
            this->m_SeatsTable->Controls->Add(m_lbl_12, 3, 12);
            this->m_SeatsTable->Controls->Add(m_lbl_10, 3, 10);
            this->m_SeatsTable->Controls->Add(m_lbl_14, 3, 14);
            this->m_SeatsTable->Controls->Add(m_lbl_09, 3, 9);
            this->m_SeatsTable->Controls->Add(m_lbl_15, 3, 15);
            this->m_SeatsTable->Controls->Add(m_lbl_16, 3, 16);
            this->m_SeatsTable->Controls->Add(m_lbl_01, 3, 1);
            this->m_SeatsTable->Controls->Add(m_lbl_03, 3, 3);
            this->m_SeatsTable->Controls->Add(m_lbl_04, 3, 4);
            this->m_SeatsTable->Controls->Add(m_lbl_06, 3, 6);
            this->m_SeatsTable->Controls->Add(m_lbl_08, 3, 8);
            this->m_SeatsTable->Controls->Add(m_lbl_05, 3, 5);
            this->m_SeatsTable->Controls->Add(m_lbl_07, 3, 7);
            this->m_SeatsTable->Controls->Add(m_lbl_02, 3, 2);
            this->m_SeatsTable->Controls->Add(m_lbl_C, 2, 0);
            this->m_SeatsTable->Controls->Add(m_lbl_D, 4, 0);
            this->m_SeatsTable->Controls->Add(m_lbl_F, 6, 0);
            this->m_SeatsTable->Controls->Add(m_lbl_E, 5, 0);
            this->m_SeatsTable->Controls->Add(m_lbl_B, 1, 0);
            this->m_SeatsTable->Controls->Add(m_lbl_A, 0, 0);
            this->m_SeatsTable->Dock = System::Windows::Forms::DockStyle::Top;
            this->m_SeatsTable->Location = System::Drawing::Point(34, 34);
            this->m_SeatsTable->Name = L"m_SeatsTable";
            this->m_SeatsTable->RowCount = 21;
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->m_SeatsTable->Size = System::Drawing::Size(395, 1050);
            this->m_SeatsTable->TabIndex = 3;
            // 
            // m_lbl_18
            // 
            m_lbl_18->AutoSize = true;
            m_lbl_18->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_18->Location = System::Drawing::Point(173, 905);
            m_lbl_18->Margin = System::Windows::Forms::Padding(5);
            m_lbl_18->Name = L"m_lbl_18";
            m_lbl_18->Size = System::Drawing::Size(46, 40);
            m_lbl_18->TabIndex = 25;
            m_lbl_18->Text = L"18";
            m_lbl_18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_17
            // 
            m_lbl_17->AutoSize = true;
            m_lbl_17->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_17->Location = System::Drawing::Point(173, 855);
            m_lbl_17->Margin = System::Windows::Forms::Padding(5);
            m_lbl_17->Name = L"m_lbl_17";
            m_lbl_17->Size = System::Drawing::Size(46, 40);
            m_lbl_17->TabIndex = 24;
            m_lbl_17->Text = L"17";
            m_lbl_17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_19
            // 
            m_lbl_19->AutoSize = true;
            m_lbl_19->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_19->Location = System::Drawing::Point(173, 955);
            m_lbl_19->Margin = System::Windows::Forms::Padding(5);
            m_lbl_19->Name = L"m_lbl_19";
            m_lbl_19->Size = System::Drawing::Size(46, 40);
            m_lbl_19->TabIndex = 23;
            m_lbl_19->Text = L"19";
            m_lbl_19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_20
            // 
            m_lbl_20->AutoSize = true;
            m_lbl_20->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_20->Location = System::Drawing::Point(173, 1005);
            m_lbl_20->Margin = System::Windows::Forms::Padding(5);
            m_lbl_20->Name = L"m_lbl_20";
            m_lbl_20->Size = System::Drawing::Size(46, 40);
            m_lbl_20->TabIndex = 22;
            m_lbl_20->Text = L"20";
            m_lbl_20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_13
            // 
            m_lbl_13->AutoSize = true;
            m_lbl_13->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_13->Location = System::Drawing::Point(173, 655);
            m_lbl_13->Margin = System::Windows::Forms::Padding(5);
            m_lbl_13->Name = L"m_lbl_13";
            m_lbl_13->Size = System::Drawing::Size(46, 40);
            m_lbl_13->TabIndex = 21;
            m_lbl_13->Text = L"13";
            m_lbl_13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_11
            // 
            m_lbl_11->AutoSize = true;
            m_lbl_11->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_11->Location = System::Drawing::Point(173, 555);
            m_lbl_11->Margin = System::Windows::Forms::Padding(5);
            m_lbl_11->Name = L"m_lbl_11";
            m_lbl_11->Size = System::Drawing::Size(46, 40);
            m_lbl_11->TabIndex = 20;
            m_lbl_11->Text = L"11";
            m_lbl_11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_12
            // 
            m_lbl_12->AutoSize = true;
            m_lbl_12->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_12->Location = System::Drawing::Point(173, 605);
            m_lbl_12->Margin = System::Windows::Forms::Padding(5);
            m_lbl_12->Name = L"m_lbl_12";
            m_lbl_12->Size = System::Drawing::Size(46, 40);
            m_lbl_12->TabIndex = 19;
            m_lbl_12->Text = L"12";
            m_lbl_12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_10
            // 
            m_lbl_10->AutoSize = true;
            m_lbl_10->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_10->Location = System::Drawing::Point(173, 505);
            m_lbl_10->Margin = System::Windows::Forms::Padding(5);
            m_lbl_10->Name = L"m_lbl_10";
            m_lbl_10->Size = System::Drawing::Size(46, 40);
            m_lbl_10->TabIndex = 18;
            m_lbl_10->Text = L"10";
            m_lbl_10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_14
            // 
            m_lbl_14->AutoSize = true;
            m_lbl_14->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_14->Location = System::Drawing::Point(173, 705);
            m_lbl_14->Margin = System::Windows::Forms::Padding(5);
            m_lbl_14->Name = L"m_lbl_14";
            m_lbl_14->Size = System::Drawing::Size(46, 40);
            m_lbl_14->TabIndex = 17;
            m_lbl_14->Text = L"14";
            m_lbl_14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_09
            // 
            m_lbl_09->AutoSize = true;
            m_lbl_09->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_09->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_09->Location = System::Drawing::Point(173, 455);
            m_lbl_09->Margin = System::Windows::Forms::Padding(5);
            m_lbl_09->Name = L"m_lbl_09";
            m_lbl_09->Size = System::Drawing::Size(46, 40);
            m_lbl_09->TabIndex = 16;
            m_lbl_09->Text = L"9";
            m_lbl_09->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_15
            // 
            m_lbl_15->AutoSize = true;
            m_lbl_15->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_15->Location = System::Drawing::Point(173, 755);
            m_lbl_15->Margin = System::Windows::Forms::Padding(5);
            m_lbl_15->Name = L"m_lbl_15";
            m_lbl_15->Size = System::Drawing::Size(46, 40);
            m_lbl_15->TabIndex = 15;
            m_lbl_15->Text = L"15";
            m_lbl_15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_16
            // 
            m_lbl_16->AutoSize = true;
            m_lbl_16->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_16->Location = System::Drawing::Point(173, 805);
            m_lbl_16->Margin = System::Windows::Forms::Padding(5);
            m_lbl_16->Name = L"m_lbl_16";
            m_lbl_16->Size = System::Drawing::Size(46, 40);
            m_lbl_16->TabIndex = 14;
            m_lbl_16->Text = L"16";
            m_lbl_16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_01
            // 
            m_lbl_01->AutoSize = true;
            m_lbl_01->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_01->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_01->Location = System::Drawing::Point(173, 55);
            m_lbl_01->Margin = System::Windows::Forms::Padding(5);
            m_lbl_01->Name = L"m_lbl_01";
            m_lbl_01->Size = System::Drawing::Size(46, 40);
            m_lbl_01->TabIndex = 13;
            m_lbl_01->Text = L"1";
            m_lbl_01->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_03
            // 
            m_lbl_03->AutoSize = true;
            m_lbl_03->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_03->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_03->Location = System::Drawing::Point(173, 155);
            m_lbl_03->Margin = System::Windows::Forms::Padding(5);
            m_lbl_03->Name = L"m_lbl_03";
            m_lbl_03->Size = System::Drawing::Size(46, 40);
            m_lbl_03->TabIndex = 12;
            m_lbl_03->Text = L"3";
            m_lbl_03->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_04
            // 
            m_lbl_04->AutoSize = true;
            m_lbl_04->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_04->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_04->Location = System::Drawing::Point(173, 205);
            m_lbl_04->Margin = System::Windows::Forms::Padding(5);
            m_lbl_04->Name = L"m_lbl_04";
            m_lbl_04->Size = System::Drawing::Size(46, 40);
            m_lbl_04->TabIndex = 11;
            m_lbl_04->Text = L"4";
            m_lbl_04->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_06
            // 
            m_lbl_06->AutoSize = true;
            m_lbl_06->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_06->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_06->Location = System::Drawing::Point(173, 305);
            m_lbl_06->Margin = System::Windows::Forms::Padding(5);
            m_lbl_06->Name = L"m_lbl_06";
            m_lbl_06->Size = System::Drawing::Size(46, 40);
            m_lbl_06->TabIndex = 10;
            m_lbl_06->Text = L"6";
            m_lbl_06->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_08
            // 
            m_lbl_08->AutoSize = true;
            m_lbl_08->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_08->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_08->Location = System::Drawing::Point(173, 405);
            m_lbl_08->Margin = System::Windows::Forms::Padding(5);
            m_lbl_08->Name = L"m_lbl_08";
            m_lbl_08->Size = System::Drawing::Size(46, 40);
            m_lbl_08->TabIndex = 9;
            m_lbl_08->Text = L"8";
            m_lbl_08->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_05
            // 
            m_lbl_05->AutoSize = true;
            m_lbl_05->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_05->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_05->Location = System::Drawing::Point(173, 255);
            m_lbl_05->Margin = System::Windows::Forms::Padding(5);
            m_lbl_05->Name = L"m_lbl_05";
            m_lbl_05->Size = System::Drawing::Size(46, 40);
            m_lbl_05->TabIndex = 8;
            m_lbl_05->Text = L"5";
            m_lbl_05->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_07
            // 
            m_lbl_07->AutoSize = true;
            m_lbl_07->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_07->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_07->Location = System::Drawing::Point(173, 355);
            m_lbl_07->Margin = System::Windows::Forms::Padding(5);
            m_lbl_07->Name = L"m_lbl_07";
            m_lbl_07->Size = System::Drawing::Size(46, 40);
            m_lbl_07->TabIndex = 7;
            m_lbl_07->Text = L"7";
            m_lbl_07->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_02
            // 
            m_lbl_02->AutoSize = true;
            m_lbl_02->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_02->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_02->Location = System::Drawing::Point(173, 105);
            m_lbl_02->Margin = System::Windows::Forms::Padding(5);
            m_lbl_02->Name = L"m_lbl_02";
            m_lbl_02->Size = System::Drawing::Size(46, 40);
            m_lbl_02->TabIndex = 6;
            m_lbl_02->Text = L"2";
            m_lbl_02->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_C
            // 
            m_lbl_C->AutoSize = true;
            m_lbl_C->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_C->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_C->Location = System::Drawing::Point(117, 5);
            m_lbl_C->Margin = System::Windows::Forms::Padding(5);
            m_lbl_C->Name = L"m_lbl_C";
            m_lbl_C->Size = System::Drawing::Size(46, 40);
            m_lbl_C->TabIndex = 5;
            m_lbl_C->Text = L"C";
            m_lbl_C->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_D
            // 
            m_lbl_D->AutoSize = true;
            m_lbl_D->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_D->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_D->Location = System::Drawing::Point(229, 5);
            m_lbl_D->Margin = System::Windows::Forms::Padding(5);
            m_lbl_D->Name = L"m_lbl_D";
            m_lbl_D->Size = System::Drawing::Size(46, 40);
            m_lbl_D->TabIndex = 4;
            m_lbl_D->Text = L"D";
            m_lbl_D->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_F
            // 
            m_lbl_F->AutoSize = true;
            m_lbl_F->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_F->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_F->Location = System::Drawing::Point(341, 5);
            m_lbl_F->Margin = System::Windows::Forms::Padding(5);
            m_lbl_F->Name = L"m_lbl_F";
            m_lbl_F->Size = System::Drawing::Size(49, 40);
            m_lbl_F->TabIndex = 3;
            m_lbl_F->Text = L"F";
            m_lbl_F->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_E
            // 
            m_lbl_E->AutoSize = true;
            m_lbl_E->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_E->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_E->Location = System::Drawing::Point(285, 5);
            m_lbl_E->Margin = System::Windows::Forms::Padding(5);
            m_lbl_E->Name = L"m_lbl_E";
            m_lbl_E->Size = System::Drawing::Size(46, 40);
            m_lbl_E->TabIndex = 2;
            m_lbl_E->Text = L"E";
            m_lbl_E->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_B
            // 
            m_lbl_B->AutoSize = true;
            m_lbl_B->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_B->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_B->Location = System::Drawing::Point(61, 5);
            m_lbl_B->Margin = System::Windows::Forms::Padding(5);
            m_lbl_B->Name = L"m_lbl_B";
            m_lbl_B->Size = System::Drawing::Size(46, 40);
            m_lbl_B->TabIndex = 1;
            m_lbl_B->Text = L"B";
            m_lbl_B->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_A
            // 
            m_lbl_A->AutoSize = true;
            m_lbl_A->Dock = System::Windows::Forms::DockStyle::Fill;
            m_lbl_A->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_A->Location = System::Drawing::Point(5, 5);
            m_lbl_A->Margin = System::Windows::Forms::Padding(5);
            m_lbl_A->Name = L"m_lbl_A";
            m_lbl_A->Size = System::Drawing::Size(46, 40);
            m_lbl_A->TabIndex = 0;
            m_lbl_A->Text = L"A";
            m_lbl_A->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_BottomMargin
            // 
            m_BottomMargin->Dock = System::Windows::Forms::DockStyle::Bottom;
            m_BottomMargin->Location = System::Drawing::Point(34, 1050);
            m_BottomMargin->Name = L"m_BottomMargin";
            m_BottomMargin->Size = System::Drawing::Size(395, 34);
            m_BottomMargin->TabIndex = 2;
            // 
            // m_Continue
            // 
            this->m_Continue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->m_Continue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
                static_cast<System::Int32>(static_cast<System::Byte>(75)));
            this->m_Continue->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
            this->m_Continue->FlatAppearance->BorderSize = 2;
            this->m_Continue->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
            this->m_Continue->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
            this->m_Continue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->m_Continue->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_Continue->Location = System::Drawing::Point(168, 13);
            this->m_Continue->Margin = System::Windows::Forms::Padding(168, 13, 168, 13);
            this->m_Continue->Name = L"m_Continue";
            this->m_Continue->Size = System::Drawing::Size(144, 34);
            this->m_Continue->TabIndex = 9;
            this->m_Continue->Text = L"Continue →";
            this->m_Continue->UseVisualStyleBackColor = false;
            this->m_Continue->Click += gcnew System::EventHandler(this, &SeatSelectionForm::m_Continue_Click);
            // 
            // SeatSelectionForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::Control;
            this->ClientSize = System::Drawing::Size(480, 640);
            this->Controls->Add(this->m_Container);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->m_TitleBar);
            this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
                static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"SeatSelectionForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Seat Selection";
            this->Load += gcnew System::EventHandler(this, &SeatSelectionForm::SeatSelectionForm_Load);
            this->panel1->ResumeLayout(false);
            this->m_Container->ResumeLayout(false);
            this->m_Container->PerformLayout();
            this->m_SeatsTable->ResumeLayout(false);
            this->m_SeatsTable->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    public:
        System::Action^ OnContinue;

    private:
        System::Void SeatSelectionForm_Load(System::Object^ sender, System::EventArgs^ e);
        System::Void m_Continue_Click(System::Object^ sender, System::EventArgs^ e);
};
}
