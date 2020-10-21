#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UserInterface {

	/// <summary>
	/// Summary for PassengerDetailForm
	/// </summary>
	public ref class PassengerDetailForm : public System::Windows::Forms::UserControl
	{
	public:
		PassengerDetailForm();

	protected:
		~PassengerDetailForm();

	private: System::Windows::Forms::Button^ m_Continue;
	private: System::Windows::Forms::TextBox^ m_Surname;
	private: System::Windows::Forms::TextBox^ m_GivenName;
	private: System::Windows::Forms::TextBox^ m_MiddleName;
	private: System::Windows::Forms::DateTimePicker^ m_BirthDate;
	private: System::Windows::Forms::TextBox^ m_ContactNumber;
	private: System::Windows::Forms::TextBox^ m_Address;

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
            System::Windows::Forms::RadioButton^ m_Sex_Female;
            System::Windows::Forms::RadioButton^ m_Sex_Male;
            System::Windows::Forms::Label^ m_lbl_Header;
            System::Windows::Forms::Label^ m_lbl_Surname;
            System::Windows::Forms::Label^ m_lbl_GivenName;
            System::Windows::Forms::Label^ m_lbl_MiddleName;
            System::Windows::Forms::Label^ m_lbl_BirthDate;
            System::Windows::Forms::Label^ m_lbl_ContactNumber;
            System::Windows::Forms::Label^ m_lbl_Address;
            System::Windows::Forms::Label^ m_lbl_Sex;
            this->m_Continue = (gcnew System::Windows::Forms::Button());
            this->m_Surname = (gcnew System::Windows::Forms::TextBox());
            this->m_GivenName = (gcnew System::Windows::Forms::TextBox());
            this->m_MiddleName = (gcnew System::Windows::Forms::TextBox());
            this->m_BirthDate = (gcnew System::Windows::Forms::DateTimePicker());
            this->m_ContactNumber = (gcnew System::Windows::Forms::TextBox());
            this->m_Address = (gcnew System::Windows::Forms::TextBox());
            m_Sex_Female = (gcnew System::Windows::Forms::RadioButton());
            m_Sex_Male = (gcnew System::Windows::Forms::RadioButton());
            m_lbl_Header = (gcnew System::Windows::Forms::Label());
            m_lbl_Surname = (gcnew System::Windows::Forms::Label());
            m_lbl_GivenName = (gcnew System::Windows::Forms::Label());
            m_lbl_MiddleName = (gcnew System::Windows::Forms::Label());
            m_lbl_BirthDate = (gcnew System::Windows::Forms::Label());
            m_lbl_ContactNumber = (gcnew System::Windows::Forms::Label());
            m_lbl_Address = (gcnew System::Windows::Forms::Label());
            m_lbl_Sex = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // m_Sex_Female
            // 
            m_Sex_Female->Appearance = System::Windows::Forms::Appearance::Button;
            m_Sex_Female->BackColor = System::Drawing::Color::Gainsboro;
            m_Sex_Female->FlatAppearance->BorderSize = 0;
            m_Sex_Female->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
            m_Sex_Female->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
            m_Sex_Female->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
            m_Sex_Female->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            m_Sex_Female->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_Sex_Female->Location = System::Drawing::Point(203, 180);
            m_Sex_Female->Margin = System::Windows::Forms::Padding(0, 10, 0, 0);
            m_Sex_Female->Name = L"m_Sex_Female";
            m_Sex_Female->Size = System::Drawing::Size(106, 29);
            m_Sex_Female->TabIndex = 25;
            m_Sex_Female->Text = L"Female";
            m_Sex_Female->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            m_Sex_Female->UseVisualStyleBackColor = false;
            // 
            // m_Sex_Male
            // 
            m_Sex_Male->Appearance = System::Windows::Forms::Appearance::Button;
            m_Sex_Male->BackColor = System::Drawing::Color::Gainsboro;
            m_Sex_Male->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
            m_Sex_Male->Checked = true;
            m_Sex_Male->FlatAppearance->BorderSize = 0;
            m_Sex_Male->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
            m_Sex_Male->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
            m_Sex_Male->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
            m_Sex_Male->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            m_Sex_Male->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_Sex_Male->Location = System::Drawing::Point(91, 180);
            m_Sex_Male->Margin = System::Windows::Forms::Padding(0, 10, 0, 0);
            m_Sex_Male->Name = L"m_Sex_Male";
            m_Sex_Male->Size = System::Drawing::Size(106, 29);
            m_Sex_Male->TabIndex = 26;
            m_Sex_Male->TabStop = true;
            m_Sex_Male->Text = L"Male";
            m_Sex_Male->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            m_Sex_Male->UseVisualStyleBackColor = false;
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
            this->m_Continue->TabIndex = 9;
            this->m_Continue->Text = L"Continue →";
            this->m_Continue->UseVisualStyleBackColor = false;
            this->m_Continue->Click += gcnew System::EventHandler(this, &PassengerDetailForm::m_Continue_Click);
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
            m_lbl_Header->TabIndex = 1;
            m_lbl_Header->Text = L"ENTER YOUR PERSONAL INFORMATION";
            m_lbl_Header->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // m_lbl_Surname
            // 
            m_lbl_Surname->AutoSize = true;
            m_lbl_Surname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_Surname->Location = System::Drawing::Point(87, 88);
            m_lbl_Surname->Name = L"m_lbl_Surname";
            m_lbl_Surname->Size = System::Drawing::Size(79, 21);
            m_lbl_Surname->TabIndex = 12;
            m_lbl_Surname->Text = L"Surname";
            // 
            // m_Surname
            // 
            this->m_Surname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_Surname->Location = System::Drawing::Point(91, 112);
            this->m_Surname->Name = L"m_Surname";
            this->m_Surname->Size = System::Drawing::Size(218, 27);
            this->m_Surname->TabIndex = 2;
            // 
            // m_GivenName
            // 
            this->m_GivenName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_GivenName->Location = System::Drawing::Point(315, 112);
            this->m_GivenName->Name = L"m_GivenName";
            this->m_GivenName->Size = System::Drawing::Size(218, 27);
            this->m_GivenName->TabIndex = 3;
            // 
            // m_lbl_GivenName
            // 
            m_lbl_GivenName->AutoSize = true;
            m_lbl_GivenName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_GivenName->Location = System::Drawing::Point(311, 88);
            m_lbl_GivenName->Name = L"m_lbl_GivenName";
            m_lbl_GivenName->Size = System::Drawing::Size(109, 21);
            m_lbl_GivenName->TabIndex = 14;
            m_lbl_GivenName->Text = L"Given Name";
            // 
            // m_MiddleName
            // 
            this->m_MiddleName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_MiddleName->Location = System::Drawing::Point(539, 112);
            this->m_MiddleName->Name = L"m_MiddleName";
            this->m_MiddleName->Size = System::Drawing::Size(218, 27);
            this->m_MiddleName->TabIndex = 4;
            // 
            // m_lbl_MiddleName
            // 
            m_lbl_MiddleName->AutoSize = true;
            m_lbl_MiddleName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_MiddleName->Location = System::Drawing::Point(535, 88);
            m_lbl_MiddleName->Name = L"m_lbl_MiddleName";
            m_lbl_MiddleName->Size = System::Drawing::Size(115, 21);
            m_lbl_MiddleName->TabIndex = 16;
            m_lbl_MiddleName->Text = L"Middle Name";
            // 
            // m_BirthDate
            // 
            this->m_BirthDate->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)),
                static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->m_BirthDate->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
            this->m_BirthDate->CalendarTitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)),
                static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->m_BirthDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_BirthDate->Location = System::Drawing::Point(315, 188);
            this->m_BirthDate->Name = L"m_BirthDate";
            this->m_BirthDate->Size = System::Drawing::Size(218, 21);
            this->m_BirthDate->TabIndex = 5;
            // 
            // m_lbl_BirthDate
            // 
            m_lbl_BirthDate->AutoSize = true;
            m_lbl_BirthDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_BirthDate->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            m_lbl_BirthDate->Location = System::Drawing::Point(311, 158);
            m_lbl_BirthDate->Name = L"m_lbl_BirthDate";
            m_lbl_BirthDate->Size = System::Drawing::Size(111, 21);
            m_lbl_BirthDate->TabIndex = 18;
            m_lbl_BirthDate->Text = L"Date Of Birth";
            // 
            // m_ContactNumber
            // 
            this->m_ContactNumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_ContactNumber->Location = System::Drawing::Point(539, 182);
            this->m_ContactNumber->Name = L"m_ContactNumber";
            this->m_ContactNumber->Size = System::Drawing::Size(218, 27);
            this->m_ContactNumber->TabIndex = 6;
            // 
            // m_lbl_ContactNumber
            // 
            m_lbl_ContactNumber->AutoSize = true;
            m_lbl_ContactNumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_ContactNumber->Location = System::Drawing::Point(535, 158);
            m_lbl_ContactNumber->Name = L"m_lbl_ContactNumber";
            m_lbl_ContactNumber->Size = System::Drawing::Size(145, 21);
            m_lbl_ContactNumber->TabIndex = 20;
            m_lbl_ContactNumber->Text = L"Contact Number";
            // 
            // m_Address
            // 
            this->m_Address->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_Address->Location = System::Drawing::Point(91, 249);
            this->m_Address->Margin = System::Windows::Forms::Padding(91, 0, 91, 0);
            this->m_Address->Name = L"m_Address";
            this->m_Address->Size = System::Drawing::Size(666, 27);
            this->m_Address->TabIndex = 23;
            // 
            // m_lbl_Address
            // 
            m_lbl_Address->AutoSize = true;
            m_lbl_Address->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_Address->Location = System::Drawing::Point(87, 225);
            m_lbl_Address->Name = L"m_lbl_Address";
            m_lbl_Address->Size = System::Drawing::Size(72, 21);
            m_lbl_Address->TabIndex = 22;
            m_lbl_Address->Text = L"Address";
            // 
            // m_lbl_Sex
            // 
            m_lbl_Sex->AutoSize = true;
            m_lbl_Sex->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_Sex->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            m_lbl_Sex->Location = System::Drawing::Point(87, 158);
            m_lbl_Sex->Name = L"m_lbl_Sex";
            m_lbl_Sex->Size = System::Drawing::Size(36, 21);
            m_lbl_Sex->TabIndex = 24;
            m_lbl_Sex->Text = L"Sex";
            // 
            // PassengerDetailForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->Controls->Add(m_Sex_Female);
            this->Controls->Add(m_Sex_Male);
            this->Controls->Add(m_lbl_Sex);
            this->Controls->Add(this->m_Address);
            this->Controls->Add(m_lbl_Address);
            this->Controls->Add(this->m_ContactNumber);
            this->Controls->Add(m_lbl_ContactNumber);
            this->Controls->Add(this->m_BirthDate);
            this->Controls->Add(m_lbl_BirthDate);
            this->Controls->Add(this->m_MiddleName);
            this->Controls->Add(m_lbl_MiddleName);
            this->Controls->Add(this->m_GivenName);
            this->Controls->Add(m_lbl_GivenName);
            this->Controls->Add(this->m_Surname);
            this->Controls->Add(m_lbl_Surname);
            this->Controls->Add(m_lbl_Header);
            this->Controls->Add(this->m_Continue);
            this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
                static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->MaximumSize = System::Drawing::Size(848, 380);
            this->MinimumSize = System::Drawing::Size(848, 380);
            this->Name = L"PassengerDetailForm";
            this->Size = System::Drawing::Size(848, 380);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    public:
        ref class Data
        {

        };

    private:
        Data^ getData();

    public:
        System::Action<Data^>^ OnContinue;

    private: System::Void m_Continue_Click(System::Object^ sender, System::EventArgs^ e);
};
}
