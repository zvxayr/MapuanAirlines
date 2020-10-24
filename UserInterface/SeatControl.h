#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace UserInterface {

	/// <summary>
	/// Summary for SeatControl
	/// </summary>
	public ref class SeatControl : public System::Windows::Forms::UserControl
	{
	public:
		SeatControl(int number);

	protected:
		~SeatControl();

	private: System::Windows::Forms::CheckBox^ m_CheckBox;

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
			this->m_CheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// m_CheckBox
			// 
			this->m_CheckBox->Appearance = System::Windows::Forms::Appearance::Button;
			this->m_CheckBox->AutoSize = true;
			this->m_CheckBox->BackColor = System::Drawing::Color::Gainsboro;
			this->m_CheckBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->m_CheckBox->FlatAppearance->BorderSize = 0;
			this->m_CheckBox->FlatAppearance->CheckedBackColor = System::Drawing::Color::Chocolate;
			this->m_CheckBox->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->m_CheckBox->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->m_CheckBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_CheckBox->Location = System::Drawing::Point(0, 0);
			this->m_CheckBox->Margin = System::Windows::Forms::Padding(5);
			this->m_CheckBox->MinimumSize = System::Drawing::Size(30, 30);
			this->m_CheckBox->Name = L"m_CheckBox";
			this->m_CheckBox->Size = System::Drawing::Size(30, 30);
			this->m_CheckBox->TabIndex = 0;
			this->m_CheckBox->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->m_CheckBox->UseVisualStyleBackColor = false;
			this->m_CheckBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SeatControl::m_CheckBox_MouseClick);
			// 
			// SeatControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Controls->Add(this->m_CheckBox);
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"SeatControl";
			this->Size = System::Drawing::Size(30, 30);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	public:
		System::Action<int, bool>^ OnClick;
	
	private:
		bool m_Available;
		bool m_Taken;
		int m_Number;

	public:
		property bool Available {
			bool get();
			void set(bool);
		}

		property bool Taken {
			bool get();
			void set(bool);
		}

		property int Number {
			int get();
		}

	private:
		System::Void m_CheckBox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	};

}
