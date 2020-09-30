#pragma once
#include "MainMenuControl.h"

namespace UserInterface {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm()
		{
			InitializeComponent();
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ControlsLibrary::TitleBar^ m_TitleBar;
	protected:

	protected:

	protected:

	protected:

	protected:

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
			this->m_TitleBar = (gcnew ControlsLibrary::TitleBar());
			this->SuspendLayout();
			// 
			// m_TitleBar
			// 
			this->m_TitleBar->AutoSize = true;
			this->m_TitleBar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->m_TitleBar->BackColor = System::Drawing::Color::Gainsboro;
			this->m_TitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->m_TitleBar->Location = System::Drawing::Point(0, 0);
			this->m_TitleBar->Margin = System::Windows::Forms::Padding(0);
			this->m_TitleBar->MaximumSize = System::Drawing::Size(0, 30);
			this->m_TitleBar->MinimumSize = System::Drawing::Size(848, 30);
			this->m_TitleBar->Name = L"m_TitleBar";
			this->m_TitleBar->Size = System::Drawing::Size(848, 30);
			this->m_TitleBar->TabIndex = 0;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(848, 510);
			this->Controls->Add(this->m_TitleBar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(848, 510);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
