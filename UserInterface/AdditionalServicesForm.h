#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UserInterface {

	/// <summary>
	/// Summary for AdditionalServicesForm
	/// </summary>
	public ref class AdditionalServicesForm : public System::Windows::Forms::UserControl
	{
	public:
		AdditionalServicesForm();

	protected:
		~AdditionalServicesForm();

	private: System::Windows::Forms::Button^ m_Continue;
	private: System::Windows::Forms::Label^ m_lbl_Header;
	private: System::Windows::Forms::CheckBox^ m_Insurance;
	private: System::Windows::Forms::CheckBox^ m_Food;
	private: System::Windows::Forms::CheckBox^ m_Seat;
	private: System::Windows::Forms::RichTextBox^ m_rtb_InsuranceDesciption;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdditionalServicesForm::typeid));
			this->m_Continue = (gcnew System::Windows::Forms::Button());
			this->m_lbl_Header = (gcnew System::Windows::Forms::Label());
			this->m_Insurance = (gcnew System::Windows::Forms::CheckBox());
			this->m_Food = (gcnew System::Windows::Forms::CheckBox());
			this->m_Seat = (gcnew System::Windows::Forms::CheckBox());
			this->m_rtb_InsuranceDesciption = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
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
			this->m_Continue->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->m_Continue->Location = System::Drawing::Point(673, 327);
			this->m_Continue->Margin = System::Windows::Forms::Padding(0);
			this->m_Continue->Name = L"m_Continue";
			this->m_Continue->Size = System::Drawing::Size(144, 34);
			this->m_Continue->TabIndex = 10;
			this->m_Continue->Text = L"Continue →";
			this->m_Continue->UseVisualStyleBackColor = false;
			this->m_Continue->Click += gcnew System::EventHandler(this, &AdditionalServicesForm::m_Continue_Click);
			// 
			// m_lbl_Header
			// 
			this->m_lbl_Header->Cursor = System::Windows::Forms::Cursors::Default;
			this->m_lbl_Header->Dock = System::Windows::Forms::DockStyle::Top;
			this->m_lbl_Header->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_lbl_Header->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->m_lbl_Header->Location = System::Drawing::Point(0, 0);
			this->m_lbl_Header->Margin = System::Windows::Forms::Padding(0);
			this->m_lbl_Header->Name = L"m_lbl_Header";
			this->m_lbl_Header->Size = System::Drawing::Size(848, 60);
			this->m_lbl_Header->TabIndex = 1;
			this->m_lbl_Header->Text = L"ADDITIONAL SERVICES";
			this->m_lbl_Header->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// m_Insurance
			// 
			this->m_Insurance->Appearance = System::Windows::Forms::Appearance::Button;
			this->m_Insurance->BackColor = System::Drawing::Color::Gainsboro;
			this->m_Insurance->FlatAppearance->BorderSize = 0;
			this->m_Insurance->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->m_Insurance->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
			this->m_Insurance->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->m_Insurance->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_Insurance->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_Insurance->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->m_Insurance->Location = System::Drawing::Point(124, 84);
			this->m_Insurance->Name = L"m_Insurance";
			this->m_Insurance->Size = System::Drawing::Size(196, 29);
			this->m_Insurance->TabIndex = 1;
			this->m_Insurance->Text = L"INSURANCE";
			this->m_Insurance->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->m_Insurance->UseVisualStyleBackColor = false;
			// 
			// m_Food
			// 
			this->m_Food->Appearance = System::Windows::Forms::Appearance::Button;
			this->m_Food->BackColor = System::Drawing::Color::Gainsboro;
			this->m_Food->FlatAppearance->BorderSize = 0;
			this->m_Food->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->m_Food->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
			this->m_Food->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->m_Food->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_Food->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_Food->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->m_Food->Location = System::Drawing::Point(326, 84);
			this->m_Food->Name = L"m_Food";
			this->m_Food->Size = System::Drawing::Size(196, 29);
			this->m_Food->TabIndex = 11;
			this->m_Food->Text = L"FOOD";
			this->m_Food->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->m_Food->UseVisualStyleBackColor = false;
			// 
			// m_Seat
			// 
			this->m_Seat->Appearance = System::Windows::Forms::Appearance::Button;
			this->m_Seat->BackColor = System::Drawing::Color::Gainsboro;
			this->m_Seat->FlatAppearance->BorderSize = 0;
			this->m_Seat->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->m_Seat->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
			this->m_Seat->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->m_Seat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_Seat->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_Seat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->m_Seat->Location = System::Drawing::Point(528, 84);
			this->m_Seat->Name = L"m_Seat";
			this->m_Seat->Size = System::Drawing::Size(196, 29);
			this->m_Seat->TabIndex = 12;
			this->m_Seat->Text = L"SEAT";
			this->m_Seat->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->m_Seat->UseVisualStyleBackColor = false;
			// 
			// m_rtb_InsuranceDesciption
			// 
			this->m_rtb_InsuranceDesciption->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->m_rtb_InsuranceDesciption->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->m_rtb_InsuranceDesciption->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->m_rtb_InsuranceDesciption->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->m_rtb_InsuranceDesciption->Location = System::Drawing::Point(124, 125);
			this->m_rtb_InsuranceDesciption->Margin = System::Windows::Forms::Padding(124, 0, 124, 0);
			this->m_rtb_InsuranceDesciption->Name = L"m_rtb_InsuranceDesciption";
			this->m_rtb_InsuranceDesciption->ReadOnly = true;
			this->m_rtb_InsuranceDesciption->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->m_rtb_InsuranceDesciption->Size = System::Drawing::Size(196, 157);
			this->m_rtb_InsuranceDesciption->TabIndex = 13;
			this->m_rtb_InsuranceDesciption->Text = resources->GetString(L"m_rtb_InsuranceDesciption.Text");
			// 
			// AdditionalServicesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->m_rtb_InsuranceDesciption);
			this->Controls->Add(this->m_Seat);
			this->Controls->Add(this->m_Food);
			this->Controls->Add(this->m_Insurance);
			this->Controls->Add(this->m_lbl_Header);
			this->Controls->Add(this->m_Continue);
			this->Margin = System::Windows::Forms::Padding(0);
			this->MaximumSize = System::Drawing::Size(848, 380);
			this->MinimumSize = System::Drawing::Size(848, 380);
			this->Name = L"AdditionalServicesForm";
			this->Size = System::Drawing::Size(848, 380);
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		System::Action^ OnContinue;

	private: System::Void m_Continue_Click(System::Object^ sender, System::EventArgs^ e);
};
}
