#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UserInterface {

	/// <summary>
	/// Summary for CancelFlightForm
	/// </summary>
	public ref class CancelFlightForm : public System::Windows::Forms::UserControl
	{
	public:
		CancelFlightForm();

	protected:
		~CancelFlightForm();
	private: System::Windows::Forms::TextBox^ m_SearchBox;
	protected:

	private: System::Windows::Forms::Button^ m_Search;
	private: System::Windows::Forms::Label^ label1;
	protected:


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
			this->m_SearchBox = (gcnew System::Windows::Forms::TextBox());
			this->m_Search = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			m_lbl_Header = (gcnew System::Windows::Forms::Label());
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
			m_lbl_Header->TabIndex = 3;
			m_lbl_Header->Text = L"WHICH FLIGHT TO CANCEL\?";
			m_lbl_Header->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// m_SearchBox
			// 
			this->m_SearchBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->m_SearchBox->Location = System::Drawing::Point(184, 157);
			this->m_SearchBox->Margin = System::Windows::Forms::Padding(184, 2, 184, 2);
			this->m_SearchBox->MaximumSize = System::Drawing::Size(480, 27);
			this->m_SearchBox->MinimumSize = System::Drawing::Size(480, 27);
			this->m_SearchBox->Name = L"m_SearchBox";
			this->m_SearchBox->Size = System::Drawing::Size(480, 27);
			this->m_SearchBox->TabIndex = 4;
			// 
			// m_Search
			// 
			this->m_Search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->m_Search->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->m_Search->FlatAppearance->BorderSize = 2;
			this->m_Search->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(154)));
			this->m_Search->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->m_Search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_Search->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_Search->Location = System::Drawing::Point(379, 219);
			this->m_Search->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->m_Search->Name = L"m_Search";
			this->m_Search->Size = System::Drawing::Size(83, 38);
			this->m_Search->TabIndex = 5;
			this->m_Search->Text = L"Search\r\n";
			this->m_Search->UseVisualStyleBackColor = false;
			this->m_Search->Click += gcnew System::EventHandler(this, &CancelFlightForm::m_Search_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 111);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(844, 31);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Enter the name of the person who reserved the flight";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CancelFlightForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->m_Search);
			this->Controls->Add(this->m_SearchBox);
			this->Controls->Add(m_lbl_Header);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->Margin = System::Windows::Forms::Padding(0);
			this->MaximumSize = System::Drawing::Size(848, 380);
			this->MinimumSize = System::Drawing::Size(848, 380);
			this->Name = L"CancelFlightForm";
			this->Size = System::Drawing::Size(848, 380);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:

	private:
		System::Void m_Search_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
