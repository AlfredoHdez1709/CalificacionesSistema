#pragma once

namespace ControldeCalificaciones {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	

	/// <summary>
	/// Summary for RegistroProfe
	/// </summary>
	public ref class RegistroProfe : public System::Windows::Forms::Form
	{
	
	public:
		RegistroProfe(Form^ obj)
		{
		
			InitializeComponent();
			aux = obj;
			cbgrado->Items->Add("1 AM");
			cbgrado->Items->Add("2 AM");
			cbgrado->Items->Add("3 AM");
			cbgrado->Items->Add("1 PM");
			cbgrado->Items->Add("2 PM");
			cbgrado->Items->Add("3 PM");
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegistroProfe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  cbgrado;


	private: System::Windows::Forms::TextBox^  txtnameschool;

	private: System::Windows::Forms::TextBox^  txtlastamem;

	private: System::Windows::Forms::TextBox^  txtlastnamep;


	private: System::Windows::Forms::TextBox^  txtname;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::TextBox^  txtpass;
	private: System::Windows::Forms::TextBox^  txtusername;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  btnexaminar;
	private: System::Windows::Forms::TextBox^  txtURL;
	private: DevExpress::XtraEditors::SimpleButton^  btnsave;
	private: DevExpress::XtraEditors::SimpleButton^  simpleButton2;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
			 private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::PictureBox^  PicUser;
	private: System::Windows::Forms::NotifyIcon^  Alert;

	private:


			 Form^ aux;
		 
	

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RegistroProfe::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->PicUser = (gcnew System::Windows::Forms::PictureBox());
			this->txtURL = (gcnew System::Windows::Forms::TextBox());
			this->btnexaminar = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cbgrado = (gcnew System::Windows::Forms::ComboBox());
			this->txtnameschool = (gcnew System::Windows::Forms::TextBox());
			this->txtlastamem = (gcnew System::Windows::Forms::TextBox());
			this->txtlastnamep = (gcnew System::Windows::Forms::TextBox());
			this->txtname = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtpass = (gcnew System::Windows::Forms::TextBox());
			this->txtusername = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btnsave = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->simpleButton2 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->Alert = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicUser))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->pictureBox1->Location = System::Drawing::Point(-3, -8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(863, 88);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(23, 13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(48, 48);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(77, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Agregar a un docente";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->PicUser);
			this->groupBox1->Controls->Add(this->txtURL);
			this->groupBox1->Controls->Add(this->btnexaminar);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->cbgrado);
			this->groupBox1->Controls->Add(this->txtnameschool);
			this->groupBox1->Controls->Add(this->txtlastamem);
			this->groupBox1->Controls->Add(this->txtlastnamep);
			this->groupBox1->Controls->Add(this->txtname);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(12, 97);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(399, 359);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos Formales";
			// 
			// PicUser
			// 
			this->PicUser->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PicUser.Image")));
			this->PicUser->Location = System::Drawing::Point(148, 235);
			this->PicUser->Name = L"PicUser";
			this->PicUser->Size = System::Drawing::Size(111, 108);
			this->PicUser->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PicUser->TabIndex = 30;
			this->PicUser->TabStop = false;
			// 
			// txtURL
			// 
			this->txtURL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtURL->Location = System::Drawing::Point(265, 282);
			this->txtURL->Name = L"txtURL";
			this->txtURL->Size = System::Drawing::Size(111, 29);
			this->txtURL->TabIndex = 30;
			// 
			// btnexaminar
			// 
			this->btnexaminar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnexaminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnexaminar->Location = System::Drawing::Point(24, 287);
			this->btnexaminar->Name = L"btnexaminar";
			this->btnexaminar->Size = System::Drawing::Size(79, 41);
			this->btnexaminar->TabIndex = 29;
			this->btnexaminar->Text = L"Examinar";
			this->btnexaminar->UseVisualStyleBackColor = true;
			this->btnexaminar->Click += gcnew System::EventHandler(this, &RegistroProfe::btnexaminar_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(19, 246);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(98, 24);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Fotografia:";
			this->label7->Click += gcnew System::EventHandler(this, &RegistroProfe::label7_Click);
			// 
			// cbgrado
			// 
			this->cbgrado->FormattingEnabled = true;
			this->cbgrado->Location = System::Drawing::Point(148, 208);
			this->cbgrado->Name = L"cbgrado";
			this->cbgrado->Size = System::Drawing::Size(228, 21);
			this->cbgrado->TabIndex = 25;
			this->cbgrado->Text = L"Seleciona";
			// 
			// txtnameschool
			// 
			this->txtnameschool->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtnameschool->Location = System::Drawing::Point(148, 161);
			this->txtnameschool->Name = L"txtnameschool";
			this->txtnameschool->Size = System::Drawing::Size(228, 29);
			this->txtnameschool->TabIndex = 24;
			this->txtnameschool->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtlastamem
			// 
			this->txtlastamem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtlastamem->Location = System::Drawing::Point(148, 120);
			this->txtlastamem->Name = L"txtlastamem";
			this->txtlastamem->Size = System::Drawing::Size(228, 29);
			this->txtlastamem->TabIndex = 23;
			this->txtlastamem->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtlastnamep
			// 
			this->txtlastnamep->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtlastnamep->Location = System::Drawing::Point(148, 81);
			this->txtlastnamep->Name = L"txtlastnamep";
			this->txtlastnamep->Size = System::Drawing::Size(228, 29);
			this->txtlastnamep->TabIndex = 22;
			this->txtlastnamep->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtname
			// 
			this->txtname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtname->Location = System::Drawing::Point(148, 38);
			this->txtname->Name = L"txtname";
			this->txtname->Size = System::Drawing::Size(228, 29);
			this->txtname->TabIndex = 21;
			this->txtname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(19, 203);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 24);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Grado:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(19, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 24);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Escuela:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(19, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 24);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Apellido M:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(19, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 24);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Apellido P:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 24);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nombre:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txtpass);
			this->groupBox2->Controls->Add(this->txtusername);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Location = System::Drawing::Point(428, 178);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(399, 135);
			this->groupBox2->TabIndex = 27;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos de usuario";
			// 
			// txtpass
			// 
			this->txtpass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtpass->Location = System::Drawing::Point(148, 81);
			this->txtpass->Name = L"txtpass";
			this->txtpass->PasswordChar = '*';
			this->txtpass->Size = System::Drawing::Size(228, 29);
			this->txtpass->TabIndex = 22;
			this->txtpass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtusername
			// 
			this->txtusername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtusername->Location = System::Drawing::Point(148, 38);
			this->txtusername->Name = L"txtusername";
			this->txtusername->Size = System::Drawing::Size(228, 29);
			this->txtusername->TabIndex = 21;
			this->txtusername->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(19, 84);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(111, 24);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Contraseña:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(19, 43);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(84, 24);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Nombre:";
			// 
			// btnsave
			// 
			this->btnsave->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsave->Appearance->Options->UseFont = true;
			this->btnsave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnsave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnsave.Image")));
			this->btnsave->Location = System::Drawing::Point(576, 379);
			this->btnsave->Name = L"btnsave";
			this->btnsave->Size = System::Drawing::Size(109, 49);
			this->btnsave->TabIndex = 28;
			this->btnsave->Text = L"Registrar";
			this->btnsave->Click += gcnew System::EventHandler(this, &RegistroProfe::btnsave_Click);
			// 
			// simpleButton2
			// 
			this->simpleButton2->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->simpleButton2->Appearance->Options->UseFont = true;
			this->simpleButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->simpleButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"simpleButton2.Image")));
			this->simpleButton2->Location = System::Drawing::Point(702, 379);
			this->simpleButton2->Name = L"simpleButton2";
			this->simpleButton2->Size = System::Drawing::Size(113, 49);
			this->simpleButton2->TabIndex = 29;
			this->simpleButton2->Text = L"Cancelar";
			this->simpleButton2->Click += gcnew System::EventHandler(this, &RegistroProfe::simpleButton2_Click);
			// 
			// Alert
			// 
			this->Alert->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"Alert.Icon")));
			this->Alert->Text = L"Alerta!!!";
			// 
			// RegistroProfe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(839, 463);
			this->ControlBox = false;
			this->Controls->Add(this->simpleButton2);
			this->Controls->Add(this->btnsave);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"RegistroProfe";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Agregar Docente";
			this->Load += gcnew System::EventHandler(this, &RegistroProfe::RegistroProfe_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicUser))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnexaminar_Click(System::Object^  sender, System::EventArgs^  e) {
	
	OpenFileDialog ^ examinar = gcnew OpenFileDialog();
	examinar->Filter = "Archivo de imagen |*.jpg| Archivo PNG|*.png|Todos los archivos|*.*";
	examinar->ShowDialog();
	String ^ picexa = examinar->FileName->ToString();
	PicUser->ImageLocation = picexa;
	txtURL->Text = picexa;

}

	private: System::Void btnsave_Click(System::Object^  sender, System::EventArgs^  e) {

	
		array<System::Byte>^ imagebt;
		imagebt = nullptr;
		
		FileStream ^ fstream = gcnew FileStream(this->txtURL->Text,FileMode::Open,FileAccess::Read);
		BinaryReader ^ br = gcnew BinaryReader(fstream);
		imagebt = br->ReadBytes((int)fstream->Length);

		String^ constring = L"datasource=localhost;port=3306;username=root;password=root; database=systemcontrol";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand ^cmdDataBase = gcnew MySqlCommand("insert into  profesores (nombre,apellidop,apellidom,escuela,grado,foto,usuario,pass) values('" + this->txtname->Text  + "','" + this->txtlastnamep->Text + "','" + this->txtlastamem->Text + "','" + this->txtnameschool->Text + "','" + this->cbgrado->Text + "','" + "@IMG" + "','" + this->txtusername->Text + "','" + this->txtpass->Text + "') ;", conDataBase);
		MySqlDataReader ^myReader;
		try
		{
			conDataBase->Open();
			Alert->BalloonTipIcon = ToolTipIcon::Info;
			Alert->BalloonTipText = "El usuario fue registrado!!!";
			Alert->BalloonTipTitle = "Informacion de System Control";
			Alert->ShowBalloonTip(3000);
			MessageBox::Show("Guardado");
			cmdDataBase->Parameters->Add(gcnew MySqlParameter("@IMG", imagebt));
			myReader = cmdDataBase->ExecuteReader();
			
			while (myReader->Read())
			{

			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		txtname->Clear();
		txtlastnamep->Clear();
		txtlastamem->Clear();
		txtnameschool->Clear();
		cbgrado->Text = "";
		txtusername->Clear();
		txtpass->Clear();
		
		conDataBase->Close();
		txtURL->Clear();
		

	}
private: System::Void RegistroProfe_Load(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void simpleButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	aux->Show();
	this->Hide();
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
