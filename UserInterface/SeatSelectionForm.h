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
	private: System::Windows::Forms::Panel^ m_Container;


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
			this->m_TitleBar = (gcnew ControlsLibrary::TitleBar());
			this->m_Container = (gcnew System::Windows::Forms::Panel());
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
			this->m_TitleBar->Size = System::Drawing::Size(640, 30);
			this->m_TitleBar->TabIndex = 0;
			// 
			// m_Container
			// 
			this->m_Container->Dock = System::Windows::Forms::DockStyle::Fill;
			this->m_Container->Location = System::Drawing::Point(0, 30);
			this->m_Container->Name = L"m_Container";
			this->m_Container->Size = System::Drawing::Size(640, 417);
			this->m_Container->TabIndex = 1;
			// 
			// SeatSelectionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(640, 447);
			this->Controls->Add(this->m_Container);
			this->Controls->Add(this->m_TitleBar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SeatSelectionForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Seat Selection";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
