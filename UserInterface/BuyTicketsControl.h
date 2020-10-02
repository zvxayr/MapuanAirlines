#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UserInterface {

	/// <summary>
	/// Summary for BuyTicketsControl
	/// </summary>
	public ref class BuyTicketsControl : public System::Windows::Forms::UserControl
	{
	public:
		BuyTicketsControl();

	protected:
		~BuyTicketsControl();

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
			this->SuspendLayout();
			// 
			// BuyTicketsControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Margin = System::Windows::Forms::Padding(0);
			this->MaximumSize = System::Drawing::Size(848, 380);
			this->MinimumSize = System::Drawing::Size(848, 380);
			this->Name = L"BuyTicketsControl";
			this->Size = System::Drawing::Size(848, 380);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
