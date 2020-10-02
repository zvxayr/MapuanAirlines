#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ControlsLibrary {

	/// <summary>
	/// Summary for TitleBar
	/// </summary>
	public ref class TitleBar : public System::Windows::Forms::UserControl
	{
	public:
		TitleBar(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TitleBar()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ m_CloseButton;
	private: System::Windows::Forms::Label^ m_MinimizeButton;
	private: System::Windows::Forms::Label^ m_Title;



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
			this->m_CloseButton = (gcnew System::Windows::Forms::Label());
			this->m_MinimizeButton = (gcnew System::Windows::Forms::Label());
			this->m_Title = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// m_CloseButton
			// 
			this->m_CloseButton->AutoSize = true;
			this->m_CloseButton->BackColor = System::Drawing::Color::Red;
			this->m_CloseButton->Dock = System::Windows::Forms::DockStyle::Right;
			this->m_CloseButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_CloseButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->m_CloseButton->Location = System::Drawing::Point(808, 0);
			this->m_CloseButton->MinimumSize = System::Drawing::Size(40, 30);
			this->m_CloseButton->Name = L"m_CloseButton";
			this->m_CloseButton->Size = System::Drawing::Size(40, 30);
			this->m_CloseButton->TabIndex = 4;
			this->m_CloseButton->Text = L"✕";
			this->m_CloseButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->m_CloseButton->Click += gcnew System::EventHandler(this, &TitleBar::m_CloseButton_Click);
			this->m_CloseButton->MouseEnter += gcnew System::EventHandler(this, &TitleBar::m_Button_MouseEnter);
			this->m_CloseButton->MouseLeave += gcnew System::EventHandler(this, &TitleBar::m_Button_MouseLeave);
			// 
			// m_MinimizeButton
			// 
			this->m_MinimizeButton->AutoSize = true;
			this->m_MinimizeButton->BackColor = System::Drawing::Color::DimGray;
			this->m_MinimizeButton->Dock = System::Windows::Forms::DockStyle::Right;
			this->m_MinimizeButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_MinimizeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->m_MinimizeButton->Location = System::Drawing::Point(768, 0);
			this->m_MinimizeButton->MinimumSize = System::Drawing::Size(40, 30);
			this->m_MinimizeButton->Name = L"m_MinimizeButton";
			this->m_MinimizeButton->Size = System::Drawing::Size(40, 30);
			this->m_MinimizeButton->TabIndex = 5;
			this->m_MinimizeButton->Text = L"—";
			this->m_MinimizeButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->m_MinimizeButton->Click += gcnew System::EventHandler(this, &TitleBar::m_MinimizeButton_Click);
			this->m_MinimizeButton->MouseEnter += gcnew System::EventHandler(this, &TitleBar::m_Button_MouseEnter);
			this->m_MinimizeButton->MouseLeave += gcnew System::EventHandler(this, &TitleBar::m_Button_MouseLeave);
			// 
			// m_Title
			// 
			this->m_Title->AutoSize = true;
			this->m_Title->CausesValidation = false;
			this->m_Title->Dock = System::Windows::Forms::DockStyle::Left;
			this->m_Title->Enabled = false;
			this->m_Title->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_Title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->m_Title->Location = System::Drawing::Point(0, 0);
			this->m_Title->MinimumSize = System::Drawing::Size(0, 30);
			this->m_Title->Name = L"m_Title";
			this->m_Title->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->m_Title->Size = System::Drawing::Size(111, 30);
			this->m_Title->TabIndex = 6;
			this->m_Title->Text = L"Mapuan Airlines";
			this->m_Title->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// TitleBar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->Controls->Add(this->m_Title);
			this->Controls->Add(this->m_MinimizeButton);
			this->Controls->Add(this->m_CloseButton);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->Margin = System::Windows::Forms::Padding(0);
			this->MaximumSize = System::Drawing::Size(0, 30);
			this->MinimumSize = System::Drawing::Size(848, 30);
			this->Name = L"TitleBar";
			this->Size = System::Drawing::Size(848, 30);
			this->Load += gcnew System::EventHandler(this, &TitleBar::TitleBar_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &TitleBar::TitleBar_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TitleBar::TitleBar_MouseMove);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Drawing::Point lastPoint;

	private: System::Void TitleBar_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void TitleBar_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void m_MinimizeButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void m_CloseButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void m_Button_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void m_Button_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void TitleBar_Load(System::Object^ sender, System::EventArgs^ e);
};
}
