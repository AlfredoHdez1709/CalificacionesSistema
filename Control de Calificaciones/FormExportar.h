#pragma once

namespace ControldeCalificaciones {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormExportar
	/// </summary>
	public ref class FormExportar : public System::Windows::Forms::Form
	{
	public:
		FormExportar(void)
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
		~FormExportar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: DevExpress::XtraEditors::SimpleButton^  simpleButton1;
	protected:
	private: DevExpress::XtraEditors::SimpleButton^  simpleButton2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormExportar::typeid));
			this->simpleButton1 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->simpleButton2 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->SuspendLayout();
			// 
			// simpleButton1
			// 
			this->simpleButton1->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->simpleButton1->Appearance->Options->UseFont = true;
			this->simpleButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->simpleButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"simpleButton1.Image")));
			this->simpleButton1->Location = System::Drawing::Point(24, 28);
			this->simpleButton1->Name = L"simpleButton1";
			this->simpleButton1->Size = System::Drawing::Size(120, 67);
			this->simpleButton1->TabIndex = 0;
			this->simpleButton1->Text = L"PDF";
			// 
			// simpleButton2
			// 
			this->simpleButton2->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->simpleButton2->Appearance->Options->UseFont = true;
			this->simpleButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->simpleButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"simpleButton2.Image")));
			this->simpleButton2->Location = System::Drawing::Point(174, 28);
			this->simpleButton2->Name = L"simpleButton2";
			this->simpleButton2->Size = System::Drawing::Size(120, 67);
			this->simpleButton2->TabIndex = 1;
			this->simpleButton2->Text = L"EXCEL";
			// 
			// FormExportar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(329, 125);
			this->Controls->Add(this->simpleButton2);
			this->Controls->Add(this->simpleButton1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormExportar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tipo de archivo a Exportar";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
