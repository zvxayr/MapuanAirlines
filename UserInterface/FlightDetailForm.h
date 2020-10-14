#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UserInterface {

	/// <summary>
	/// Summary for FlightDetailForm
	/// </summary>
	public ref class FlightDetailForm : public System::Windows::Forms::UserControl
	{
	public:
		FlightDetailForm();

	protected:
		~FlightDetailForm();


	private: System::Windows::Forms::ComboBox^ m_Source;
	private: System::Windows::Forms::ComboBox^ m_Destination;
	private: System::Windows::Forms::DateTimePicker^ m_DepartDate;
	private: System::Windows::Forms::DateTimePicker^ m_ReturnDate;
	private: System::Windows::Forms::NumericUpDown^ m_AdultCount;
	private: System::Windows::Forms::NumericUpDown^ m_ChildCount;
	private: System::Windows::Forms::NumericUpDown^ m_InfantCount;
	private: System::Windows::Forms::ComboBox^ m_FlightClass;
	private: System::Windows::Forms::Button^ m_Continue;
    private: System::Windows::Forms::RadioButton^ m_OneWay;
    private: System::Windows::Forms::RadioButton^ m_RoundTrip;

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
            System::Windows::Forms::Label^ m_lbl_Header;
            System::Windows::Forms::Label^ m_lbl_Source;
            System::Windows::Forms::Label^ m_lbl_Destination;
            System::Windows::Forms::Label^ m_lbl_DepartDate;
            System::Windows::Forms::Label^ m_lbl_ReturnDate;
            System::Windows::Forms::Label^ m_lbl_AdultRange;
            System::Windows::Forms::Label^ m_lbl_ChildRange;
            System::Windows::Forms::Label^ m_lbl_InfantRange;
            System::Windows::Forms::Label^ m_lbl_Adult;
            System::Windows::Forms::Label^ m_lbl_Child;
            System::Windows::Forms::Label^ m_lbl_Infant;
            System::Windows::Forms::Label^ m_lbl_FlightClass;
            this->m_OneWay = (gcnew System::Windows::Forms::RadioButton());
            this->m_RoundTrip = (gcnew System::Windows::Forms::RadioButton());
            this->m_Source = (gcnew System::Windows::Forms::ComboBox());
            this->m_Destination = (gcnew System::Windows::Forms::ComboBox());
            this->m_DepartDate = (gcnew System::Windows::Forms::DateTimePicker());
            this->m_ReturnDate = (gcnew System::Windows::Forms::DateTimePicker());
            this->m_AdultCount = (gcnew System::Windows::Forms::NumericUpDown());
            this->m_ChildCount = (gcnew System::Windows::Forms::NumericUpDown());
            this->m_InfantCount = (gcnew System::Windows::Forms::NumericUpDown());
            this->m_FlightClass = (gcnew System::Windows::Forms::ComboBox());
            this->m_Continue = (gcnew System::Windows::Forms::Button());
            m_lbl_Header = (gcnew System::Windows::Forms::Label());
            m_lbl_Source = (gcnew System::Windows::Forms::Label());
            m_lbl_Destination = (gcnew System::Windows::Forms::Label());
            m_lbl_DepartDate = (gcnew System::Windows::Forms::Label());
            m_lbl_ReturnDate = (gcnew System::Windows::Forms::Label());
            m_lbl_AdultRange = (gcnew System::Windows::Forms::Label());
            m_lbl_ChildRange = (gcnew System::Windows::Forms::Label());
            m_lbl_InfantRange = (gcnew System::Windows::Forms::Label());
            m_lbl_Adult = (gcnew System::Windows::Forms::Label());
            m_lbl_Child = (gcnew System::Windows::Forms::Label());
            m_lbl_Infant = (gcnew System::Windows::Forms::Label());
            m_lbl_FlightClass = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m_AdultCount))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m_ChildCount))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m_InfantCount))->BeginInit();
            this->SuspendLayout();
            // 
            // m_lbl_Header
            // 
            m_lbl_Header->Cursor = System::Windows::Forms::Cursors::Default;
            m_lbl_Header->Dock = System::Windows::Forms::DockStyle::Top;
            m_lbl_Header->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_Header->Location = System::Drawing::Point(0, 0);
            m_lbl_Header->Margin = System::Windows::Forms::Padding(0);
            m_lbl_Header->Name = L"m_lbl_Header";
            m_lbl_Header->Size = System::Drawing::Size(848, 60);
            m_lbl_Header->TabIndex = 2;
            m_lbl_Header->Text = L"WHERE WOULD YOU LIKE TO GO\?";
            m_lbl_Header->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_Source
            // 
            m_lbl_Source->AutoSize = true;
            m_lbl_Source->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_Source->Location = System::Drawing::Point(158, 108);
            m_lbl_Source->Name = L"m_lbl_Source";
            m_lbl_Source->Size = System::Drawing::Size(95, 21);
            m_lbl_Source->TabIndex = 4;
            m_lbl_Source->Text = L"Flying From";
            // 
            // m_lbl_Destination
            // 
            m_lbl_Destination->AutoSize = true;
            m_lbl_Destination->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_Destination->Location = System::Drawing::Point(432, 108);
            m_lbl_Destination->Name = L"m_lbl_Destination";
            m_lbl_Destination->Size = System::Drawing::Size(75, 21);
            m_lbl_Destination->TabIndex = 4;
            m_lbl_Destination->Text = L"Flying To";
            // 
            // m_lbl_DepartDate
            // 
            m_lbl_DepartDate->AutoSize = true;
            m_lbl_DepartDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_DepartDate->Location = System::Drawing::Point(158, 180);
            m_lbl_DepartDate->Name = L"m_lbl_DepartDate";
            m_lbl_DepartDate->Size = System::Drawing::Size(118, 21);
            m_lbl_DepartDate->TabIndex = 4;
            m_lbl_DepartDate->Text = L"Departing On";
            // 
            // m_lbl_ReturnDate
            // 
            m_lbl_ReturnDate->AutoSize = true;
            m_lbl_ReturnDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_ReturnDate->Location = System::Drawing::Point(432, 180);
            m_lbl_ReturnDate->Name = L"m_lbl_ReturnDate";
            m_lbl_ReturnDate->Size = System::Drawing::Size(114, 21);
            m_lbl_ReturnDate->TabIndex = 4;
            m_lbl_ReturnDate->Text = L"Returning On";
            // 
            // m_lbl_AdultRange
            // 
            m_lbl_AdultRange->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_AdultRange->Location = System::Drawing::Point(162, 266);
            m_lbl_AdultRange->Name = L"m_lbl_AdultRange";
            m_lbl_AdultRange->Size = System::Drawing::Size(78, 16);
            m_lbl_AdultRange->TabIndex = 4;
            m_lbl_AdultRange->Text = L"(12+ years)";
            m_lbl_AdultRange->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_ChildRange
            // 
            m_lbl_ChildRange->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_ChildRange->Location = System::Drawing::Point(245, 266);
            m_lbl_ChildRange->Name = L"m_lbl_ChildRange";
            m_lbl_ChildRange->Size = System::Drawing::Size(78, 16);
            m_lbl_ChildRange->TabIndex = 4;
            m_lbl_ChildRange->Text = L"(2-11 years)";
            m_lbl_ChildRange->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_InfantRange
            // 
            m_lbl_InfantRange->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_InfantRange->Location = System::Drawing::Point(334, 266);
            m_lbl_InfantRange->Name = L"m_lbl_InfantRange";
            m_lbl_InfantRange->Size = System::Drawing::Size(78, 16);
            m_lbl_InfantRange->TabIndex = 4;
            m_lbl_InfantRange->Text = L"(<2 years)";
            m_lbl_InfantRange->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_Adult
            // 
            m_lbl_Adult->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_Adult->Location = System::Drawing::Point(162, 242);
            m_lbl_Adult->Name = L"m_lbl_Adult";
            m_lbl_Adult->Size = System::Drawing::Size(78, 24);
            m_lbl_Adult->TabIndex = 4;
            m_lbl_Adult->Text = L"Adult";
            m_lbl_Adult->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_Child
            // 
            m_lbl_Child->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_Child->Location = System::Drawing::Point(245, 242);
            m_lbl_Child->Name = L"m_lbl_Child";
            m_lbl_Child->Size = System::Drawing::Size(78, 24);
            m_lbl_Child->TabIndex = 4;
            m_lbl_Child->Text = L"Child";
            m_lbl_Child->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_Infant
            // 
            m_lbl_Infant->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_Infant->Location = System::Drawing::Point(334, 242);
            m_lbl_Infant->Name = L"m_lbl_Infant";
            m_lbl_Infant->Size = System::Drawing::Size(78, 24);
            m_lbl_Infant->TabIndex = 4;
            m_lbl_Infant->Text = L"Infant";
            m_lbl_Infant->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_FlightClass
            // 
            m_lbl_FlightClass->AutoSize = true;
            m_lbl_FlightClass->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_FlightClass->Location = System::Drawing::Point(432, 253);
            m_lbl_FlightClass->Name = L"m_lbl_FlightClass";
            m_lbl_FlightClass->Size = System::Drawing::Size(95, 21);
            m_lbl_FlightClass->TabIndex = 4;
            m_lbl_FlightClass->Text = L"Flight Class";
            // 
            // m_OneWay
            // 
            this->m_OneWay->Appearance = System::Windows::Forms::Appearance::Button;
            this->m_OneWay->BackColor = System::Drawing::Color::Gainsboro;
            this->m_OneWay->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->m_OneWay->Checked = true;
            this->m_OneWay->FlatAppearance->BorderSize = 0;
            this->m_OneWay->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
            this->m_OneWay->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
            this->m_OneWay->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
            this->m_OneWay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->m_OneWay->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_OneWay->Location = System::Drawing::Point(162, 61);
            this->m_OneWay->Margin = System::Windows::Forms::Padding(0, 10, 0, 0);
            this->m_OneWay->Name = L"m_OneWay";
            this->m_OneWay->Size = System::Drawing::Size(250, 29);
            this->m_OneWay->TabIndex = 5;
            this->m_OneWay->TabStop = true;
            this->m_OneWay->Text = L"One-Way";
            this->m_OneWay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->m_OneWay->UseVisualStyleBackColor = false;
            // 
            // m_RoundTrip
            // 
            this->m_RoundTrip->Appearance = System::Windows::Forms::Appearance::Button;
            this->m_RoundTrip->BackColor = System::Drawing::Color::Gainsboro;
            this->m_RoundTrip->FlatAppearance->BorderSize = 0;
            this->m_RoundTrip->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
            this->m_RoundTrip->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
            this->m_RoundTrip->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
            this->m_RoundTrip->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->m_RoundTrip->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_RoundTrip->Location = System::Drawing::Point(436, 61);
            this->m_RoundTrip->Margin = System::Windows::Forms::Padding(0, 10, 0, 0);
            this->m_RoundTrip->Name = L"m_RoundTrip";
            this->m_RoundTrip->Size = System::Drawing::Size(250, 29);
            this->m_RoundTrip->TabIndex = 5;
            this->m_RoundTrip->Text = L"Round-Trip";
            this->m_RoundTrip->UseVisualStyleBackColor = false;
            // 
            // m_Source
            // 
            this->m_Source->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_Source->FormattingEnabled = true;
            this->m_Source->Location = System::Drawing::Point(162, 129);
            this->m_Source->Margin = System::Windows::Forms::Padding(162, 0, 12, 0);
            this->m_Source->MaximumSize = System::Drawing::Size(250, 0);
            this->m_Source->MinimumSize = System::Drawing::Size(250, 0);
            this->m_Source->Name = L"m_Source";
            this->m_Source->Size = System::Drawing::Size(250, 29);
            this->m_Source->TabIndex = 3;
            // 
            // m_Destination
            // 
            this->m_Destination->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_Destination->FormattingEnabled = true;
            this->m_Destination->Location = System::Drawing::Point(436, 129);
            this->m_Destination->Margin = System::Windows::Forms::Padding(12, 0, 162, 0);
            this->m_Destination->MaximumSize = System::Drawing::Size(250, 0);
            this->m_Destination->MinimumSize = System::Drawing::Size(250, 0);
            this->m_Destination->Name = L"m_Destination";
            this->m_Destination->Size = System::Drawing::Size(250, 29);
            this->m_Destination->TabIndex = 3;
            // 
            // m_DepartDate
            // 
            this->m_DepartDate->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)),
                static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->m_DepartDate->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
            this->m_DepartDate->CalendarTitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)),
                static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->m_DepartDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_DepartDate->Location = System::Drawing::Point(162, 204);
            this->m_DepartDate->Name = L"m_DepartDate";
            this->m_DepartDate->Size = System::Drawing::Size(250, 21);
            this->m_DepartDate->TabIndex = 6;
            // 
            // m_ReturnDate
            // 
            this->m_ReturnDate->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)),
                static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->m_ReturnDate->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
            this->m_ReturnDate->CalendarTitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)),
                static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->m_ReturnDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_ReturnDate->Location = System::Drawing::Point(436, 204);
            this->m_ReturnDate->Name = L"m_ReturnDate";
            this->m_ReturnDate->Size = System::Drawing::Size(250, 21);
            this->m_ReturnDate->TabIndex = 6;
            // 
            // m_AdultCount
            // 
            this->m_AdultCount->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_AdultCount->Location = System::Drawing::Point(162, 282);
            this->m_AdultCount->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->m_AdultCount->MaximumSize = System::Drawing::Size(78, 0);
            this->m_AdultCount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            this->m_AdultCount->MinimumSize = System::Drawing::Size(78, 0);
            this->m_AdultCount->Name = L"m_AdultCount";
            this->m_AdultCount->Size = System::Drawing::Size(78, 21);
            this->m_AdultCount->TabIndex = 7;
            this->m_AdultCount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            // 
            // m_ChildCount
            // 
            this->m_ChildCount->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_ChildCount->Location = System::Drawing::Point(248, 282);
            this->m_ChildCount->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->m_ChildCount->MaximumSize = System::Drawing::Size(78, 0);
            this->m_ChildCount->MinimumSize = System::Drawing::Size(78, 0);
            this->m_ChildCount->Name = L"m_ChildCount";
            this->m_ChildCount->Size = System::Drawing::Size(78, 21);
            this->m_ChildCount->TabIndex = 7;
            // 
            // m_InfantCount
            // 
            this->m_InfantCount->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_InfantCount->Location = System::Drawing::Point(334, 282);
            this->m_InfantCount->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->m_InfantCount->MaximumSize = System::Drawing::Size(78, 0);
            this->m_InfantCount->MinimumSize = System::Drawing::Size(78, 0);
            this->m_InfantCount->Name = L"m_InfantCount";
            this->m_InfantCount->Size = System::Drawing::Size(78, 21);
            this->m_InfantCount->TabIndex = 7;
            // 
            // m_FlightClass
            // 
            this->m_FlightClass->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_FlightClass->FormattingEnabled = true;
            this->m_FlightClass->Location = System::Drawing::Point(436, 274);
            this->m_FlightClass->Margin = System::Windows::Forms::Padding(12, 0, 162, 0);
            this->m_FlightClass->MaximumSize = System::Drawing::Size(250, 0);
            this->m_FlightClass->MinimumSize = System::Drawing::Size(250, 0);
            this->m_FlightClass->Name = L"m_FlightClass";
            this->m_FlightClass->Size = System::Drawing::Size(250, 29);
            this->m_FlightClass->TabIndex = 3;
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
            this->m_Continue->Location = System::Drawing::Point(673, 327);
            this->m_Continue->Margin = System::Windows::Forms::Padding(0);
            this->m_Continue->Name = L"m_Continue";
            this->m_Continue->Size = System::Drawing::Size(144, 34);
            this->m_Continue->TabIndex = 8;
            this->m_Continue->Text = L"Continue →";
            this->m_Continue->UseVisualStyleBackColor = false;
            this->m_Continue->Click += gcnew System::EventHandler(this, &FlightDetailForm::m_Continue_Click);
            // 
            // FlightDetailForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->Controls->Add(this->m_Continue);
            this->Controls->Add(this->m_InfantCount);
            this->Controls->Add(this->m_ChildCount);
            this->Controls->Add(this->m_AdultCount);
            this->Controls->Add(this->m_ReturnDate);
            this->Controls->Add(this->m_DepartDate);
            this->Controls->Add(this->m_RoundTrip);
            this->Controls->Add(this->m_OneWay);
            this->Controls->Add(m_lbl_Destination);
            this->Controls->Add(m_lbl_FlightClass);
            this->Controls->Add(m_lbl_ReturnDate);
            this->Controls->Add(m_lbl_Infant);
            this->Controls->Add(m_lbl_Child);
            this->Controls->Add(m_lbl_InfantRange);
            this->Controls->Add(m_lbl_Adult);
            this->Controls->Add(m_lbl_ChildRange);
            this->Controls->Add(m_lbl_AdultRange);
            this->Controls->Add(m_lbl_DepartDate);
            this->Controls->Add(m_lbl_Source);
            this->Controls->Add(this->m_FlightClass);
            this->Controls->Add(this->m_Destination);
            this->Controls->Add(this->m_Source);
            this->Controls->Add(m_lbl_Header);
            this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
                static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->Margin = System::Windows::Forms::Padding(0);
            this->MaximumSize = System::Drawing::Size(848, 380);
            this->MinimumSize = System::Drawing::Size(848, 380);
            this->Name = L"FlightDetailForm";
            this->Size = System::Drawing::Size(848, 380);
            this->Load += gcnew System::EventHandler(this, &FlightDetailForm::FlightDetailForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m_AdultCount))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m_ChildCount))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m_InfantCount))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    
    public:
        System::Action^ OnContinue;

    private:
        bool IsFormDataInvalid();

    private: System::Void m_Continue_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void FlightDetailForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}

