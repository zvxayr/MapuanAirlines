#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UserInterface {

	/// <summary>
	/// Summary for PaymentHistoryForm
	/// </summary>
	public ref class PaymentHistoryForm : public System::Windows::Forms::UserControl
	{
	public:
		PaymentHistoryForm();

	protected:
		~PaymentHistoryForm();

	private: System::Windows::Forms::Label^ m_lbl_Header;
	private: System::Windows::Forms::FlowLayoutPanel^ m_ListContainer;
	private: System::Windows::Forms::ListBox^ m_PassengerList;

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
			this->m_lbl_Header = (gcnew System::Windows::Forms::Label());
			this->m_ListContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->m_PassengerList = (gcnew System::Windows::Forms::ListBox());
			this->m_ListContainer->SuspendLayout();
			this->SuspendLayout();
			// 
			// m_lbl_Header
			// 
			this->m_lbl_Header->Cursor = System::Windows::Forms::Cursors::Default;
			this->m_lbl_Header->Dock = System::Windows::Forms::DockStyle::Top;
			this->m_lbl_Header->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_lbl_Header->Location = System::Drawing::Point(0, 0);
			this->m_lbl_Header->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->m_lbl_Header->Name = L"m_lbl_Header";
			this->m_lbl_Header->Size = System::Drawing::Size(848, 40);
			this->m_lbl_Header->TabIndex = 1;
			this->m_lbl_Header->Text = L"LIST OF PASSENGERS";
			this->m_lbl_Header->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// m_ListContainer
			// 
			this->m_ListContainer->AutoSize = true;
			this->m_ListContainer->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->m_ListContainer->Controls->Add(this->m_PassengerList);
			this->m_ListContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->m_ListContainer->Location = System::Drawing::Point(0, 40);
			this->m_ListContainer->Margin = System::Windows::Forms::Padding(0);
			this->m_ListContainer->Name = L"m_ListContainer";
			this->m_ListContainer->Size = System::Drawing::Size(848, 340);
			this->m_ListContainer->TabIndex = 2;
			// 
			// m_PassengerList
			// 
			this->m_PassengerList->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_PassengerList->FormattingEnabled = true;
			this->m_PassengerList->ItemHeight = 16;
			this->m_PassengerList->Location = System::Drawing::Point(100, 10);
			this->m_PassengerList->Margin = System::Windows::Forms::Padding(100, 10, 100, 30);
			this->m_PassengerList->Name = L"m_PassengerList";
			this->m_PassengerList->Size = System::Drawing::Size(648, 276);
			this->m_PassengerList->TabIndex = 0;
			// 
			// PaymentHistoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->m_ListContainer);
			this->Controls->Add(this->m_lbl_Header);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->MaximumSize = System::Drawing::Size(848, 380);
			this->MinimumSize = System::Drawing::Size(848, 380);
			this->Name = L"PaymentHistoryForm";
			this->Size = System::Drawing::Size(848, 380);
			this->m_ListContainer->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
