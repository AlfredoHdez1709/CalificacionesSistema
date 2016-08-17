#pragma once

namespace ControldeCalificaciones {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormWeb
	/// </summary>
	public ref class FormWeb : public System::Windows::Forms::Form
	{
	public:
		FormWeb(void)
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
		~FormWeb()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::WebBrowser^  WebUrl;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormWeb::typeid));
			this->WebUrl = (gcnew System::Windows::Forms::WebBrowser());
			this->SuspendLayout();
			// 
			// WebUrl
			// 
			this->WebUrl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->WebUrl->Location = System::Drawing::Point(0, 0);
			this->WebUrl->MinimumSize = System::Drawing::Size(20, 20);
			this->WebUrl->Name = L"WebUrl";
			this->WebUrl->Size = System::Drawing::Size(284, 261);
			this->WebUrl->TabIndex = 0;
			this->WebUrl->Url = (gcnew System::Uri(L"http://201.144.84.24:8500/conest2016/", System::UriKind::Absolute));
			// 
			// FormWeb
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->WebUrl);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormWeb";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Subir Calificaciones";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FormWeb::FormWeb_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void FormWeb_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
