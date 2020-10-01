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
		MainForm();

	protected:
		~MainForm();

	private: ControlsLibrary::TitleBar^ m_TitleBar;
	private: System::Windows::Forms::Panel^ m_ControlContainer;

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
			this->m_ControlContainer = (gcnew System::Windows::Forms::Panel());
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
			this->m_TitleBar->TabIndex = 1;
			// 
			// m_ControlContainer
			// 
			this->m_ControlContainer->AutoSize = true;
			this->m_ControlContainer->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->m_ControlContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->m_ControlContainer->Location = System::Drawing::Point(0, 30);
			this->m_ControlContainer->Margin = System::Windows::Forms::Padding(0);
			this->m_ControlContainer->Name = L"m_ControlContainer";
			this->m_ControlContainer->Size = System::Drawing::Size(848, 480);
			this->m_ControlContainer->TabIndex = 0;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(848, 510);
			this->Controls->Add(this->m_ControlContainer);
			this->Controls->Add(this->m_TitleBar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(848, 510);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		void loadControl(System::Windows::Forms::UserControl^ control);

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e);
	};

}
