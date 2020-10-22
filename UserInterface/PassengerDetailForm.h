#pragma once
#include "Interop.h"

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UserInterface {

    ref class PassengerDetailForm;

    class PassengerDetailFormData
    {
    public:
        string Name;
        string Sex;
        string ContactNum;
        string BirthDate;
        string Address;
    };

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
    private: System::Windows::Forms::RadioButton^ m_Sex_Female;
    private: System::Windows::Forms::RadioButton^ m_Sex_Male;



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
            System::Windows::Forms::Label^ m_lbl_Surname;
            System::Windows::Forms::Label^ m_lbl_GivenName;
            System::Windows::Forms::Label^ m_lbl_MiddleName;
            System::Windows::Forms::Label^ m_lbl_BirthDate;
            System::Windows::Forms::Label^ m_lbl_ContactNumber;
            System::Windows::Forms::Label^ m_lbl_Address;
            System::Windows::Forms::Label^ m_lbl_Sex;
            this->m_Sex_Female = (gcnew System::Windows::Forms::RadioButton());
            this->m_Sex_Male = (gcnew System::Windows::Forms::RadioButton());
            this->m_Continue = (gcnew System::Windows::Forms::Button());
            this->m_Surname = (gcnew System::Windows::Forms::TextBox());
            this->m_GivenName = (gcnew System::Windows::Forms::TextBox());
            this->m_MiddleName = (gcnew System::Windows::Forms::TextBox());
            this->m_BirthDate = (gcnew System::Windows::Forms::DateTimePicker());
            this->m_ContactNumber = (gcnew System::Windows::Forms::TextBox());
            this->m_Address = (gcnew System::Windows::Forms::TextBox());
            m_lbl_Header = (gcnew System::Windows::Forms::Label());
            m_lbl_Surname = (gcnew System::Windows::Forms::Label());
            m_lbl_GivenName = (gcnew System::Windows::Forms::Label());
            m_lbl_MiddleName = (gcnew System::Windows::Forms::Label());
            m_lbl_BirthDate = (gcnew System::Windows::Forms::Label());
            m_lbl_ContactNumber = (gcnew System::Windows::Forms::Label());
            m_lbl_Address = (gcnew System::Windows::Forms::Label());
            m_lbl_Sex = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            this->m_Sex_Female->Appearance = System::Windows::Forms::Appearance::Button;
            this->m_Sex_Female->BackColor = System::Drawing::Color::Gainsboro;
            this->m_Sex_Female->FlatAppearance->BorderSize = 0;
            this->m_Sex_Female->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
            this->m_Sex_Female->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
            this->m_Sex_Female->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
            this->m_Sex_Female->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->m_Sex_Female->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_Sex_Female->Location = System::Drawing::Point(271, 222);
            this->m_Sex_Female->Margin = System::Windows::Forms::Padding(0, 12, 0, 0);
            this->m_Sex_Female->Name = L"m_Sex_Female";
            this->m_Sex_Female->Size = System::Drawing::Size(141, 36);
            this->m_Sex_Female->TabIndex = 25;
            this->m_Sex_Female->Text = L"Female";
            this->m_Sex_Female->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->m_Sex_Female->UseVisualStyleBackColor = false;
            this->m_Sex_Male->Appearance = System::Windows::Forms::Appearance::Button;
            this->m_Sex_Male->BackColor = System::Drawing::Color::Gainsboro;
            this->m_Sex_Male->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->m_Sex_Male->Checked = true;
            this->m_Sex_Male->FlatAppearance->BorderSize = 0;
            this->m_Sex_Male->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
            this->m_Sex_Male->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
            this->m_Sex_Male->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
            this->m_Sex_Male->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->m_Sex_Male->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_Sex_Male->Location = System::Drawing::Point(121, 222);
            this->m_Sex_Male->Margin = System::Windows::Forms::Padding(0, 12, 0, 0);
            this->m_Sex_Male->Name = L"m_Sex_Male";
            this->m_Sex_Male->Size = System::Drawing::Size(141, 36);
            this->m_Sex_Male->TabIndex = 26;
            this->m_Sex_Male->TabStop = true;
            this->m_Sex_Male->Text = L"Male";
            this->m_Sex_Male->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->m_Sex_Male->UseVisualStyleBackColor = false;
            m_lbl_Header->Cursor = System::Windows::Forms::Cursors::Default;
            m_lbl_Header->Dock = System::Windows::Forms::DockStyle::Top;
            m_lbl_Header->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_Header->Location = System::Drawing::Point(0, 0);
            m_lbl_Header->Margin = System::Windows::Forms::Padding(0);
            m_lbl_Header->Name = L"m_lbl_Header";
            m_lbl_Header->Size = System::Drawing::Size(1131, 74);
            m_lbl_Header->TabIndex = 1;
            m_lbl_Header->Text = L"ENTER YOUR PERSONAL INFORMATION";
            m_lbl_Header->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            m_lbl_Surname->AutoSize = true;
            m_lbl_Surname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_Surname->Location = System::Drawing::Point(116, 108);
            m_lbl_Surname->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            m_lbl_Surname->Name = L"m_lbl_Surname";
            m_lbl_Surname->Size = System::Drawing::Size(96, 23);
            m_lbl_Surname->TabIndex = 12;
            m_lbl_Surname->Text = L"Surname";
            m_lbl_GivenName->AutoSize = true;
            m_lbl_GivenName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_GivenName->Location = System::Drawing::Point(415, 108);
            m_lbl_GivenName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            m_lbl_GivenName->Name = L"m_lbl_GivenName";
            m_lbl_GivenName->Size = System::Drawing::Size(135, 23);
            m_lbl_GivenName->TabIndex = 14;
            m_lbl_GivenName->Text = L"Given Name";
            m_lbl_MiddleName->AutoSize = true;
            m_lbl_MiddleName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_MiddleName->Location = System::Drawing::Point(713, 108);
            m_lbl_MiddleName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            m_lbl_MiddleName->Name = L"m_lbl_MiddleName";
            m_lbl_MiddleName->Size = System::Drawing::Size(143, 23);
            m_lbl_MiddleName->TabIndex = 16;
            m_lbl_MiddleName->Text = L"Middle Name";
            m_lbl_BirthDate->AutoSize = true;
            m_lbl_BirthDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_BirthDate->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            m_lbl_BirthDate->Location = System::Drawing::Point(415, 194);
            m_lbl_BirthDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            m_lbl_BirthDate->Name = L"m_lbl_BirthDate";
            m_lbl_BirthDate->Size = System::Drawing::Size(133, 23);
            m_lbl_BirthDate->TabIndex = 18;
            m_lbl_BirthDate->Text = L"Date Of Birth";
            m_lbl_ContactNumber->AutoSize = true;
            m_lbl_ContactNumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_ContactNumber->Location = System::Drawing::Point(713, 194);
            m_lbl_ContactNumber->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            m_lbl_ContactNumber->Name = L"m_lbl_ContactNumber";
            m_lbl_ContactNumber->Size = System::Drawing::Size(177, 23);
            m_lbl_ContactNumber->TabIndex = 20;
            m_lbl_ContactNumber->Text = L"Contact Number";
            m_lbl_Address->AutoSize = true;
            m_lbl_Address->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_Address->Location = System::Drawing::Point(116, 277);
            m_lbl_Address->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            m_lbl_Address->Name = L"m_lbl_Address";
            m_lbl_Address->Size = System::Drawing::Size(88, 23);
            m_lbl_Address->TabIndex = 22;
            m_lbl_Address->Text = L"Address";
            m_lbl_Sex->AutoSize = true;
            m_lbl_Sex->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            m_lbl_Sex->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            m_lbl_Sex->Location = System::Drawing::Point(116, 194);
            m_lbl_Sex->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            m_lbl_Sex->Name = L"m_lbl_Sex";
            m_lbl_Sex->Size = System::Drawing::Size(43, 23);
            m_lbl_Sex->TabIndex = 24;
            m_lbl_Sex->Text = L"Sex";
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
            this->m_Continue->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_Continue->Location = System::Drawing::Point(897, 402);
            this->m_Continue->Margin = System::Windows::Forms::Padding(0);
            this->m_Continue->Name = L"m_Continue";
            this->m_Continue->Size = System::Drawing::Size(192, 42);
            this->m_Continue->TabIndex = 9;
            this->m_Continue->Text = L"Continue →";
            this->m_Continue->UseVisualStyleBackColor = false;
            this->m_Continue->Click += gcnew System::EventHandler(this, &PassengerDetailForm::m_Continue_Click);
            this->m_Surname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_Surname->Location = System::Drawing::Point(121, 138);
            this->m_Surname->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->m_Surname->Name = L"m_Surname";
            this->m_Surname->Size = System::Drawing::Size(289, 32);
            this->m_Surname->TabIndex = 2;
            this->m_GivenName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_GivenName->Location = System::Drawing::Point(420, 138);
            this->m_GivenName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->m_GivenName->Name = L"m_GivenName";
            this->m_GivenName->Size = System::Drawing::Size(289, 32);
            this->m_GivenName->TabIndex = 3;
            this->m_MiddleName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_MiddleName->Location = System::Drawing::Point(719, 138);
            this->m_MiddleName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->m_MiddleName->Name = L"m_MiddleName";
            this->m_MiddleName->Size = System::Drawing::Size(289, 32);
            this->m_MiddleName->TabIndex = 4;
            this->m_BirthDate->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)),
                static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->m_BirthDate->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
            this->m_BirthDate->CalendarTitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)),
                static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->m_BirthDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_BirthDate->Location = System::Drawing::Point(420, 231);
            this->m_BirthDate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->m_BirthDate->Name = L"m_BirthDate";
            this->m_BirthDate->Size = System::Drawing::Size(289, 24);
            this->m_BirthDate->TabIndex = 5;
            this->m_ContactNumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_ContactNumber->Location = System::Drawing::Point(719, 224);
            this->m_ContactNumber->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->m_ContactNumber->Name = L"m_ContactNumber";
            this->m_ContactNumber->Size = System::Drawing::Size(289, 32);
            this->m_ContactNumber->TabIndex = 6;
            this->m_Address->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->m_Address->Location = System::Drawing::Point(121, 306);
            this->m_Address->Margin = System::Windows::Forms::Padding(121, 0, 121, 0);
            this->m_Address->Name = L"m_Address";
            this->m_Address->Size = System::Drawing::Size(887, 32);
            this->m_Address->TabIndex = 23;
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->Controls->Add(this->m_Sex_Female);
            this->Controls->Add(this->m_Sex_Male);
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
            this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->MaximumSize = System::Drawing::Size(1131, 468);
            this->MinimumSize = System::Drawing::Size(1131, 468);
            this->Name = L"PassengerDetailForm";
            this->Size = System::Drawing::Size(1131, 468);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    public:
        using Data = Interop::Managed<PassengerDetailFormData>;

    private:
        Data^ getData();

    public:
        System::Action<Data^>^ OnContinue;

    private: System::Void m_Continue_Click(System::Object^ sender, System::EventArgs^ e);
};
}
