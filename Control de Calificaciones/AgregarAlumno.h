#pragma once


namespace ControldeCalificaciones {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AgregarAlumno
	/// </summary>
	public ref class AgregarAlumno : public System::Windows::Forms::Form
	{
	public:
		AgregarAlumno(void)
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
		~AgregarAlumno()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtnombre;
	private: System::Windows::Forms::TextBox^  txtapellidop;
	private: System::Windows::Forms::TextBox^  txtapellidom;
	private: System::Windows::Forms::TextBox^  txttutor;








	private: DevExpress::XtraEditors::SimpleButton^  btnsave;
	private: System::Windows::Forms::DataGridView^  dgvAlumnos;
	private: DevExpress::XtraEditors::SimpleButton^  btnupdate;
	private: DevExpress::XtraEditors::SimpleButton^  btndelete;
	private: System::Windows::Forms::Label^  lbid;

	private: System::Windows::Forms::TextBox^  txtid;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;


	public: void  consultar()
	{
		String ^ ruta = L"datasource=localhost; port=3306; username=root;password=root"; //conexion a la base
		MySqlConnection^conexbase = gcnew MySqlConnection(ruta);//encapsula la conexiona e la ruta 
		MySqlCommand^basetab = gcnew MySqlCommand("SELECT * FROM systemcontrol.alumnos", conexbase);//consulta  a la base y asi poder cargar y actualizar  su consulta 
																								   //MySqlDataReader^encapsula; //guarda los datos que recive de la base

		try
		{

			MySqlDataAdapter ^ opc = gcnew MySqlDataAdapter(); //hace la consulta al adaptador
			opc->SelectCommand = basetab;// va a cargar la tabla en la memoria 

			DataTable^dbdataset = gcnew DataTable();
			opc->Fill(dbdataset);//agrega datos a la tabla

								 //crea un objeto para construir la tabla
			BindingSource^ bsourse = gcnew BindingSource();//construye la tabla 
			bsourse->DataSource = dbdataset; //agraga la tabla al adaptador 


			dgvAlumnos->DataSource = bsourse;
			opc->Update(dbdataset); //para poder mostrarse (visualizar) lo ya guardado
			conexbase->Close();
		}
		catch (Exception^ex) // si no encuentra la ruta marca el mensaje de error

		{
			MessageBox::Show(ex->Message);
		}

	}

			void guardar()
			{
				String^ constring = L"datasource=localhost;port=3306;username=root;password=root; database=systemcontrol";
				MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				MySqlCommand ^cmdDataBase = gcnew MySqlCommand("insert into alumnos (nombre,apellidop,apellidom,tutor) values('" + this->txtnombre->Text + "','" + this->txtapellidop->Text + "','" + this->txtapellidom->Text + "','" + this->txttutor->Text + "') ;", conDataBase);
				MySqlDataReader ^myReader;
				try
				{
					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					MessageBox::Show("Guardado");
					consultar();
					while (myReader->Read())
					{

					}
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message);
				}

				if (MessageBox::Show("Deseas agregar otro Alumno", "Agrega a alguen mas", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					txtnombre->Clear();
					txtapellidop->Clear();
					txtapellidom->Clear();
					txttutor->Clear();
				}
				else
					this->Close();
			}

			void eliminar()
			{
				String^ constring = L"datasource=localhost;port=3306;username=root;password=root; database=systemcontrol";
				MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				MySqlCommand ^cmdDataBase = gcnew MySqlCommand("Delete from alumnos where idalumnos='" + this->txtid->Text + "';", conDataBase);

				MySqlDataReader ^myReader;
				try
				{
					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					MessageBox::Show("Eliminado");
					txtnombre->Clear();
					txtapellidop->Clear();
					txtapellidom->Clear();
					txttutor->Clear();
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

			void actualizar()
			{
				String^ constring = L"datasource=localhost;port=3306;username=root;password=root; database=systemcontrol";
				MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				MySqlCommand ^cmdDataBase = gcnew MySqlCommand("Update alumnos set idalumnos='" + this->txtid->Text + "',nombre='" + this->txtnombre->Text + "',apellidop='" + this->txtapellidop->Text + "',apellidom='" + this->txtapellidom->Text + "',tutor='" + this->txttutor->Text +  "'where idalumnos='" + this->txtid->Text + "' ;", conDataBase);

				MySqlDataReader ^myReader;
				try
				{
					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					MessageBox::Show("Actualizado");
					txtnombre->Clear();
					txtapellidop->Clear();
					txtapellidom->Clear();
					txttutor->Clear();
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AgregarAlumno::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->txtapellidop = (gcnew System::Windows::Forms::TextBox());
			this->txtapellidom = (gcnew System::Windows::Forms::TextBox());
			this->txttutor = (gcnew System::Windows::Forms::TextBox());
			this->btnsave = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->dgvAlumnos = (gcnew System::Windows::Forms::DataGridView());
			this->btnupdate = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->btndelete = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->lbid = (gcnew System::Windows::Forms::Label());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlumnos))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Apellido P:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(17, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Apellido M:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(54, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Tutor:";
			// 
			// txtnombre
			// 
			this->txtnombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtnombre->Location = System::Drawing::Point(128, 64);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(235, 29);
			this->txtnombre->TabIndex = 6;
			// 
			// txtapellidop
			// 
			this->txtapellidop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtapellidop->Location = System::Drawing::Point(128, 99);
			this->txtapellidop->Name = L"txtapellidop";
			this->txtapellidop->Size = System::Drawing::Size(235, 29);
			this->txtapellidop->TabIndex = 7;
			// 
			// txtapellidom
			// 
			this->txtapellidom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtapellidom->Location = System::Drawing::Point(128, 134);
			this->txtapellidom->Name = L"txtapellidom";
			this->txtapellidom->Size = System::Drawing::Size(235, 29);
			this->txtapellidom->TabIndex = 8;
			// 
			// txttutor
			// 
			this->txttutor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txttutor->Location = System::Drawing::Point(128, 169);
			this->txttutor->Name = L"txttutor";
			this->txttutor->Size = System::Drawing::Size(235, 29);
			this->txttutor->TabIndex = 9;
			// 
			// btnsave
			// 
			this->btnsave->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsave->Appearance->Options->UseFont = true;
			this->btnsave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnsave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnsave.Image")));
			this->btnsave->Location = System::Drawing::Point(12, 211);
			this->btnsave->Name = L"btnsave";
			this->btnsave->Size = System::Drawing::Size(113, 45);
			this->btnsave->TabIndex = 14;
			this->btnsave->Text = L"Guardar";
			this->btnsave->Click += gcnew System::EventHandler(this, &AgregarAlumno::btnsave_Click);
			// 
			// dgvAlumnos
			// 
			this->dgvAlumnos->AllowUserToOrderColumns = true;
			this->dgvAlumnos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAlumnos->Location = System::Drawing::Point(373, 17);
			this->dgvAlumnos->Name = L"dgvAlumnos";
			this->dgvAlumnos->Size = System::Drawing::Size(493, 239);
			this->dgvAlumnos->TabIndex = 15;
			this->dgvAlumnos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AgregarAlumno::dgvAlumnos_CellContentClick);
			// 
			// btnupdate
			// 
			this->btnupdate->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnupdate->Appearance->Options->UseFont = true;
			this->btnupdate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnupdate->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnupdate.Image")));
			this->btnupdate->Location = System::Drawing::Point(131, 211);
			this->btnupdate->Name = L"btnupdate";
			this->btnupdate->Size = System::Drawing::Size(113, 45);
			this->btnupdate->TabIndex = 16;
			this->btnupdate->Text = L"Actualizar";
			this->btnupdate->Click += gcnew System::EventHandler(this, &AgregarAlumno::btnupdate_Click);
			// 
			// btndelete
			// 
			this->btndelete->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndelete->Appearance->Options->UseFont = true;
			this->btndelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btndelete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btndelete.Image")));
			this->btndelete->Location = System::Drawing::Point(250, 211);
			this->btndelete->Name = L"btndelete";
			this->btndelete->Size = System::Drawing::Size(113, 45);
			this->btndelete->TabIndex = 17;
			this->btndelete->Text = L"Eliminar";
			this->btndelete->Click += gcnew System::EventHandler(this, &AgregarAlumno::btndelete_Click);
			// 
			// lbid
			// 
			this->lbid->AutoSize = true;
			this->lbid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbid->Location = System::Drawing::Point(83, 29);
			this->lbid->Name = L"lbid";
			this->lbid->Size = System::Drawing::Size(30, 24);
			this->lbid->TabIndex = 18;
			this->lbid->Text = L"id:";
			// 
			// txtid
			// 
			this->txtid->Enabled = false;
			this->txtid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtid->Location = System::Drawing::Point(128, 26);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(235, 29);
			this->txtid->TabIndex = 19;
			// 
			// AgregarAlumno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(878, 275);
			this->Controls->Add(this->txtid);
			this->Controls->Add(this->lbid);
			this->Controls->Add(this->btndelete);
			this->Controls->Add(this->btnupdate);
			this->Controls->Add(this->dgvAlumnos);
			this->Controls->Add(this->btnsave);
			this->Controls->Add(this->txttutor);
			this->Controls->Add(this->txtapellidom);
			this->Controls->Add(this->txtapellidop);
			this->Controls->Add(this->txtnombre);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(894, 314);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(894, 314);
			this->Name = L"AgregarAlumno";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Agregar Alumno";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlumnos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}

private: System::Void btnsave_Click(System::Object^  sender, System::EventArgs^  e) {
	guardar();
}

private: System::Void btndelete_Click(System::Object^  sender, System::EventArgs^  e) {
	eliminar();
}

private: System::Void dgvAlumnos_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			DataGridViewRow ^ dgv = dgvAlumnos->Rows[e->RowIndex];
			txtid->Text = dgv->Cells[0]->Value->ToString();
			txtnombre->Text = dgv->Cells[1]->Value->ToString();
			txtapellidop->Text = dgv->Cells[2]->Value->ToString();
			txtapellidom->Text = dgv->Cells[3]->Value->ToString();
			txttutor->Text = dgv->Cells[4]->Value->ToString();
		}

private: System::Void btnupdate_Click(System::Object^  sender, System::EventArgs^  e) {
	actualizar();
}
};
}
