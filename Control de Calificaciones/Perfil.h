#pragma once


namespace ControldeCalificaciones {

	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for Perfil
	/// </summary>
	public ref class Perfil : public System::Windows::Forms::Form
	{
	public:
		Perfil(void)
		{
			InitializeComponent();
			consultar();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Perfil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  PicUser;

	private: System::Windows::Forms::Label^  lblName;
	private: System::Windows::Forms::Label^  lblNameSchool;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  CBGrado;
	private: System::Windows::Forms::TextBox^  txtSchool;


	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::TextBox^  txtPass;

	private: DevExpress::XtraEditors::SimpleButton^  btnSave;
	private: DevExpress::XtraEditors::SimpleButton^  btnMod;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;


	public:

		void consultar()
		{
			String ^ ruta = L"datasource=localhost; port=3306; username=root;password=root"; //conexion a la base
			MySqlConnection^conexbase = gcnew MySqlConnection(ruta);//encapsula la conexiona e la ruta 
			MySqlCommand^basetab = gcnew MySqlCommand("SELECT * FROM systemcontrol.profesores", conexbase);//consulta  a la base y asi poder cargar y actualizar  su consulta 
			MySqlDataReader^myReader;
			MySqlDataAdapter^dataAdapter = gcnew MySqlDataAdapter;
			try
			{
				conexbase->Open();
				myReader = basetab->ExecuteReader();


				while (myReader->Read())
				{
					String ^ Name = (myReader->GetString("nombre"));
					String ^ last1 = (myReader->GetString("apellidop"));
					String ^ last2 = (myReader->GetString("apellidom"));
					lblName->Text = "" + Name + " " + last1 + " " + last2;
					lblNameSchool->Text += (myReader->GetString("escuela"));
					txtSchool->Text += (myReader->GetString("escuela"));
					CBGrado->Text += (myReader->GetString("grado"));
					txtPass->Text += (myReader->GetString("pass"));

					


				/*Byte ^imgg =  (Byte)(myReader["foto"]);

					if (imgg == nullptr)
						PicUser->Image = nullptr;
					else
					{
						MemoryStream ^ mstream = gcnew MemoryStream(imgg);
						 //System::IO::MemoryStream ^ mstream = gcnew System::IO::MemoryStream(imgg);
						PicUser->Image = System::Drawing::Image::FromStream(mstream);
					}*/					
				}
				//MessageBox::Show("conectado!");
			}

			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

		void actualizar()
		{
			String^ constring = L"datasource=localhost;port=3306;username=root;password=root; database=systemcontrol";
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			MySqlCommand ^cmdDataBase = gcnew MySqlCommand("Update profesores set escuela='"+this->txtSchool->Text+ "',grado='" + this->CBGrado->Text + "',pass='" + this->txtPass->Text + "' ;", conDataBase);

			MySqlDataReader ^myReader;
			try
			{
				conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("Actualizado");
				txtSchool->Enabled = false;
				CBGrado->Enabled = false;
				txtPass->Enabled = false;
				consultar();

				while (myReader->Read())
				{

				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
			conDataBase->Close();
		}



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Perfil::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PicUser = (gcnew System::Windows::Forms::PictureBox());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblNameSchool = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CBGrado = (gcnew System::Windows::Forms::ComboBox());
			this->txtSchool = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->btnSave = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->btnMod = (gcnew DevExpress::XtraEditors::SimpleButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicUser))->BeginInit();
			this->SuspendLayout();
			this->pictureBox1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->pictureBox1->Location = System::Drawing::Point(-3, -8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(512, 108);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->PicUser->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PicUser.Image")));
			this->PicUser->Location = System::Drawing::Point(29, 30);
			this->PicUser->Name = L"PicUser";
			this->PicUser->Size = System::Drawing::Size(142, 137);
			this->PicUser->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PicUser->TabIndex = 1;
			this->PicUser->TabStop = false;
			this->lblName->AutoSize = true;
			this->lblName->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::Color::White;
			this->lblName->Location = System::Drawing::Point(189, 39);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(0, 20);
			this->lblName->TabIndex = 2;
			this->lblNameSchool->AutoSize = true;
			this->lblNameSchool->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->lblNameSchool->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNameSchool->ForeColor = System::Drawing::Color::White;
			this->lblNameSchool->Location = System::Drawing::Point(189, 70);
			this->lblNameSchool->Name = L"lblNameSchool";
			this->lblNameSchool->Size = System::Drawing::Size(0, 20);
			this->lblNameSchool->TabIndex = 3;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(90, 190);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Escuela:";
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(90, 236);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Grado:";
			this->CBGrado->Enabled = false;
			this->CBGrado->FormattingEnabled = true;
			this->CBGrado->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"1 AM", L"2 AM", L"3 AM", L"1 PM", L"2 PM", L"3 PM" });
			this->CBGrado->Location = System::Drawing::Point(217, 235);
			this->CBGrado->Name = L"CBGrado";
			this->CBGrado->Size = System::Drawing::Size(228, 21);
			this->CBGrado->TabIndex = 26;
			this->txtSchool->Enabled = false;
			this->txtSchool->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSchool->Location = System::Drawing::Point(217, 184);
			this->txtSchool->Name = L"txtSchool";
			this->txtSchool->Size = System::Drawing::Size(228, 26);
			this->txtSchool->TabIndex = 27;
			this->txtSchool->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(90, 274);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 20);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Contraseña:";
			this->txtPass->Enabled = false;
			this->txtPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPass->Location = System::Drawing::Point(217, 271);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(228, 26);
			this->txtPass->TabIndex = 30;
			this->txtPass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->btnSave->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Appearance->Options->UseFont = true;
			this->btnSave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSave.Image")));
			this->btnSave->Location = System::Drawing::Point(251, 324);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(113, 49);
			this->btnSave->TabIndex = 33;
			this->btnSave->Text = L"Guardar";
			this->btnSave->Click += gcnew System::EventHandler(this, &Perfil::btnSave_Click);
			this->btnMod->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMod->Appearance->Options->UseFont = true;
			this->btnMod->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMod->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMod.Image")));
			this->btnMod->Location = System::Drawing::Point(125, 324);
			this->btnMod->Name = L"btnMod";
			this->btnMod->Size = System::Drawing::Size(109, 49);
			this->btnMod->TabIndex = 32;
			this->btnMod->Text = L"Modificar";
			this->btnMod->Click += gcnew System::EventHandler(this, &Perfil::btnMod_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(488, 392);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnMod);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtSchool);
			this->Controls->Add(this->CBGrado);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblNameSchool);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->PicUser);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(504, 431);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(504, 431);
			this->Name = L"Perfil";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Perfil";
			this->Load += gcnew System::EventHandler(this, &Perfil::Perfil_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicUser))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnMod_Click(System::Object^  sender, System::EventArgs^  e) {
		txtSchool->Enabled=true;
		CBGrado->Enabled=true;
		txtPass->Enabled=true;
	
	}
private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
	actualizar();
}
private: System::Void Perfil_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
