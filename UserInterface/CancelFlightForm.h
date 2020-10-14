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

	private: System::Windows::Forms::Label^ m_lbl_Header;
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
			this->m_lbl_Header = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// m_lbl_Header
			// 
			this->m_lbl_Header->Cursor = System::Windows::Forms::Cursors::Default;
			this->m_lbl_Header->Dock = System::Windows::Forms::DockStyle::Top;
			this->m_lbl_Header->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_lbl_Header->Location = System::Drawing::Point(0, 0);
			this->m_lbl_Header->Margin = System::Windows::Forms::Padding(0);
			this->m_lbl_Header->Name = L"m_lbl_Header";
			this->m_lbl_Header->Size = System::Drawing::Size(848, 60);
			this->m_lbl_Header->TabIndex = 3;
			this->m_lbl_Header->Text = L"WHICH FLIGHT TO CANCEL\?";
			this->m_lbl_Header->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CancelFlightForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->m_lbl_Header);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->Margin = System::Windows::Forms::Padding(0);
			this->MaximumSize = System::Drawing::Size(848, 380);
			this->MinimumSize = System::Drawing::Size(848, 380);
			this->Name = L"CancelFlightForm";
			this->Size = System::Drawing::Size(848, 380);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
