#pragma once
#include "HomeFather.h"
#include "RegistroProfe.h"

namespace ControldeCalificaciones {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtuser;
	private: System::Windows::Forms::TextBox^  txtpass;


	private: System::Windows::Forms::Button^  btnInicio;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;

	private: AxWMPLib::AxWindowsMediaPlayer^  PlayVideo;
	private: DevExpress::XtraEditors::SimpleButton^  btnplay;
	private: DevExpress::XtraEditors::SimpleButton^  btnpausa;
	private: DevExpress::XtraEditors::SimpleButton^  btnstop;
	private: System::Windows::Forms::Timer^  ImagenSplash;

	private: System::Windows::Forms::PictureBox^  pc1;
	private: System::Windows::Forms::PictureBox^  pc2;
	private: System::Windows::Forms::PictureBox^  pc3;
	private: System::Windows::Forms::PictureBox^  pc4;

















	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtuser = (gcnew System::Windows::Forms::TextBox());
			this->txtpass = (gcnew System::Windows::Forms::TextBox());
			this->btnInicio = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->PlayVideo = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->btnplay = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->btnpausa = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->btnstop = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->ImagenSplash = (gcnew System::Windows::Forms::Timer(this->components));
			this->pc1 = (gcnew System::Windows::Forms::PictureBox());
			this->pc2 = (gcnew System::Windows::Forms::PictureBox());
			this->pc3 = (gcnew System::Windows::Forms::PictureBox());
			this->pc4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayVideo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->pictureBox1->Location = System::Drawing::Point(-1, -6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(721, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(162, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Usuario";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(377, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Contraseña";
			// 
			// txtuser
			// 
			this->txtuser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtuser->Location = System::Drawing::Point(251, 15);
			this->txtuser->Name = L"txtuser";
			this->txtuser->Size = System::Drawing::Size(120, 29);
			this->txtuser->TabIndex = 5;
			this->txtuser->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtpass
			// 
			this->txtpass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtpass->Location = System::Drawing::Point(489, 12);
			this->txtpass->Name = L"txtpass";
			this->txtpass->PasswordChar = '*';
			this->txtpass->Size = System::Drawing::Size(123, 29);
			this->txtpass->TabIndex = 6;
			this->txtpass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnInicio
			// 
			this->btnInicio->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnInicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInicio->Location = System::Drawing::Point(618, 11);
			this->btnInicio->Name = L"btnInicio";
			this->btnInicio->Size = System::Drawing::Size(75, 35);
			this->btnInicio->TabIndex = 7;
			this->btnInicio->Text = L"Iniciar";
			this->btnInicio->UseVisualStyleBackColor = true;
			this->btnInicio->Click += gcnew System::EventHandler(this, &Login::btnInicio_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(415, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(156, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Aún no está registro:";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->linkLabel1->DisabledLinkColor = System::Drawing::Color::White;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(577, 57);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(118, 20);
			this->linkLabel1->TabIndex = 9;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"¡Haz click aquí!!";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel1_LinkClicked);
			// 
			// PlayVideo
			// 
			this->PlayVideo->Enabled = true;
			this->PlayVideo->Location = System::Drawing::Point(-1, 90);
			this->PlayVideo->Name = L"PlayVideo";
			this->PlayVideo->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"PlayVideo.OcxState")));
			this->PlayVideo->Size = System::Drawing::Size(706, 383);
			this->PlayVideo->TabIndex = 10;
			// 
			// btnplay
			// 
			this->btnplay->Appearance->BackColor = System::Drawing::Color::RoyalBlue;
			this->btnplay->Appearance->Options->UseBackColor = true;
			this->btnplay->ButtonStyle = DevExpress::XtraEditors::Controls::BorderStyles::UltraFlat;
			this->btnplay->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnplay->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnplay.Image")));
			this->btnplay->ImageLocation = DevExpress::XtraEditors::ImageLocation::TopCenter;
			this->btnplay->Location = System::Drawing::Point(12, 418);
			this->btnplay->Name = L"btnplay";
			this->btnplay->Size = System::Drawing::Size(33, 41);
			this->btnplay->TabIndex = 11;
			this->btnplay->Click += gcnew System::EventHandler(this, &Login::btnplay_Click);
			// 
			// btnpausa
			// 
			this->btnpausa->Appearance->BackColor = System::Drawing::Color::Lime;
			this->btnpausa->Appearance->Options->UseBackColor = true;
			this->btnpausa->ButtonStyle = DevExpress::XtraEditors::Controls::BorderStyles::UltraFlat;
			this->btnpausa->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnpausa->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnpausa.Image")));
			this->btnpausa->ImageLocation = DevExpress::XtraEditors::ImageLocation::TopCenter;
			this->btnpausa->Location = System::Drawing::Point(51, 418);
			this->btnpausa->Name = L"btnpausa";
			this->btnpausa->Size = System::Drawing::Size(35, 41);
			this->btnpausa->TabIndex = 12;
			this->btnpausa->Click += gcnew System::EventHandler(this, &Login::btnpausa_Click);
			// 
			// btnstop
			// 
			this->btnstop->Appearance->BackColor = System::Drawing::Color::Red;
			this->btnstop->Appearance->Options->UseBackColor = true;
			this->btnstop->ButtonStyle = DevExpress::XtraEditors::Controls::BorderStyles::UltraFlat;
			this->btnstop->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnstop->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnstop.Image")));
			this->btnstop->ImageLocation = DevExpress::XtraEditors::ImageLocation::TopCenter;
			this->btnstop->Location = System::Drawing::Point(92, 418);
			this->btnstop->Name = L"btnstop";
			this->btnstop->Size = System::Drawing::Size(42, 41);
			this->btnstop->TabIndex = 13;
			this->btnstop->Click += gcnew System::EventHandler(this, &Login::btnstop_Click);
			// 
			// ImagenSplash
			// 
			this->ImagenSplash->Enabled = true;
			this->ImagenSplash->Interval = 3000;
			this->ImagenSplash->Tick += gcnew System::EventHandler(this, &Login::ImagenSplash_Tick);
			// 
			// pc1
			// 
			this->pc1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pc1.Image")));
			this->pc1->Location = System::Drawing::Point(12, 0);
			this->pc1->Name = L"pc1";
			this->pc1->Size = System::Drawing::Size(108, 90);
			this->pc1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pc1->TabIndex = 14;
			this->pc1->TabStop = false;
			// 
			// pc2
			// 
			this->pc2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pc2.Image")));
			this->pc2->Location = System::Drawing::Point(12, 67);
			this->pc2->Name = L"pc2";
			this->pc2->Size = System::Drawing::Size(108, 90);
			this->pc2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pc2->TabIndex = 15;
			this->pc2->TabStop = false;
			this->pc2->Visible = false;
			// 
			// pc3
			// 
			this->pc3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pc3.Image")));
			this->pc3->Location = System::Drawing::Point(92, -6);
			this->pc3->Name = L"pc3";
			this->pc3->Size = System::Drawing::Size(108, 90);
			this->pc3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pc3->TabIndex = 16;
			this->pc3->TabStop = false;
			this->pc3->Visible = false;
			// 
			// pc4
			// 
			this->pc4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pc4.Image")));
			this->pc4->Location = System::Drawing::Point(-22, -13);
			this->pc4->Name = L"pc4";
			this->pc4->Size = System::Drawing::Size(108, 90);
			this->pc4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pc4->TabIndex = 17;
			this->pc4->TabStop = false;
			this->pc4->Visible = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 471);
			this->Controls->Add(this->pc4);
			this->Controls->Add(this->pc3);
			this->Controls->Add(this->pc2);
			this->Controls->Add(this->pc1);
			this->Controls->Add(this->btnstop);
			this->Controls->Add(this->btnpausa);
			this->Controls->Add(this->btnplay);
			this->Controls->Add(this->PlayVideo);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnInicio);
			this->Controls->Add(this->txtpass);
			this->Controls->Add(this->txtuser);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"System Control";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayVideo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	RegistroProfe ^ addprofe = gcnew RegistroProfe(this);
	addprofe->Show();
	this->Hide();
}
		



		
private: System::Void btnInicio_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root; database=systemcontrol";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand ^cmdDataBase = gcnew MySqlCommand("select *  from profesores where usuario='" + this->txtuser->Text + "' and pass='" + this->txtpass->Text + "';", conDataBase);
	MySqlDataReader ^myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		int count = 0;
		while (myReader->Read())
		{
			count = count + 1;
		}
		if (count == 1)
		{
			MessageBox::Show("Bienvenido");
			conDataBase -> Close();
			HomeFather ^ ObjInicio = gcnew HomeFather(this);
			ObjInicio->Show();
			this->Hide();
		}
		else if (count>1)
		{
			MessageBox::Show("EL usuario y la contraseña es incorrecta");
		}
		else
			MessageBox::Show("EL usuario y la contraseña es incorrecta");
		

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnpausa_Click(System::Object^  sender, System::EventArgs^  e) {
	PlayVideo->Ctlcontrols->pause();
}
private: System::Void btnplay_Click(System::Object^  sender, System::EventArgs^  e) {
	PlayVideo->Ctlcontrols->play();

}
private: System::Void btnstop_Click(System::Object^  sender, System::EventArgs^  e) {
	PlayVideo->Ctlcontrols->stop();
}
private: System::Void ImagenSplash_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	




	Random^ ranObj = gcnew Random;
	int var = ranObj->Next(1, 4);
	switch (var)
	{
	case 1:
		pc1->Image = pc2->Image;
		break;
	case 2:
		pc1->Image = pc3->Image;
		break;
	case 3:
		pc1->Image = pc4->Image;
		break;
	case 4:
		pc4->Image = pc1->Image;

	}
	
	
}
};
}
