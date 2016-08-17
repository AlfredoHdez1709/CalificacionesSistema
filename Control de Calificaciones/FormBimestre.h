#pragma once
namespace ControldeCalificaciones {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace iTextSharp;
	using namespace iTextSharp::text;
	using namespace iTextSharp::text::pdf;
	using namespace System::IO;

	/// <summary>
	/// Summary for FormBimestre
	/// </summary>
	public ref class FormBimestre : public System::Windows::Forms::Form
	{
	public:
		FormBimestre(void)
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
		~FormBimestre()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: DevExpress::XtraEditors::LabelControl^  labelControl2;

	private: DevExpress::XtraEditors::SimpleButton^  btnSave;

	private: DevExpress::XtraEditors::LabelControl^  labelControl1;
	private: System::Windows::Forms::DataGridView^  dgvAlumnos;


	private: System::Windows::Forms::Label^  label4;
	private: DevExpress::XtraEditors::LabelControl^  lblBimestre;
	private: System::Windows::Forms::TextBox^  txtespañol;
	private: System::Windows::Forms::TextBox^  txtmate;
	private: System::Windows::Forms::TextBox^  txtingles;
	private: System::Windows::Forms::TextBox^  txtvalores;
	private: System::Windows::Forms::TextBox^  txtciencias;
	private: System::Windows::Forms::TextBox^  txteducacion;
	private: System::Windows::Forms::TextBox^  txttecno;
	private: System::Windows::Forms::TextBox^  txtgeo;








	private: DevExpress::XtraEditors::LabelControl^  labelControl3;
	private: DevExpress::XtraEditors::LabelControl^  labelControl4;
	private: DevExpress::XtraEditors::LabelControl^  labelControl5;
	private: DevExpress::XtraEditors::LabelControl^  labelControl6;
	private: DevExpress::XtraEditors::LabelControl^  labelControl7;
	private: System::Windows::Forms::TextBox^  txtfinal;
	private: DevExpress::XtraEditors::SimpleButton^  btncalcular;
	private: System::Windows::Forms::TextBox^  txtid;
	private: DevExpress::XtraEditors::SimpleButton^  btnPrint;
	private: System::Windows::Forms::SaveFileDialog^  sfdDoc;
	private: System::Windows::Forms::TextBox^  txtBusqueda;
	private: System::Windows::Forms::Label^  lbsearch;


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

			void actualizar()

			{
				String^ constring = L"datasource=localhost;port=3306;username=root;password=root; database=systemcontrol";
				MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				MySqlCommand ^cmdDataBase = gcnew MySqlCommand("Update alumnos set idalumnos='" + this->txtid->Text + "',español='" + this->txtespañol->Text + "',matematicas='" + this->txtmate->Text + "',ingles='" + this->txtingles->Text + "',valores='" + this->txtvalores->Text + "',cienciasn='" + this->txtciencias->Text + "',educacionf='" + this->txteducacion->Text + "',tecnologias='" + this->txttecno->Text + "',geografia='" + this->txtgeo->Text + "',promediofinal='" + this->txtfinal->Text + "'where idalumnos='" + this->txtid->Text + "' ;", conDataBase);

				MySqlDataReader ^myReader;
				try
				{
					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					MessageBox::Show("Actualizado");
					txtespañol->Clear();
					txtmate->Clear();
					txtingles->Clear();
					txtvalores->Clear();
					txtciencias->Clear();
					txteducacion->Clear();
					txttecno->Clear();
					txtgeo->Clear();
					txtfinal->Clear();
					txtid->Clear();
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
			
			void buscar()
			{
				String ^ ruta = L"datasource=localhost; port=3306; username=root;password=root;database=systemcontrol"; //conexion a la base
				MySqlConnection^conexbase = gcnew MySqlConnection(ruta);//encapsula la conexiona e la ruta 
				
				String ^ query = "SELECT * FROM alumnos where nombre like('" + txtBusqueda->Text + "%')";
				MySqlCommand ^ cmd = gcnew MySqlCommand(query, conexbase);

				cmd->Parameters->AddWithValue("nombre", txtBusqueda->Text);

					DataTable^dt = gcnew DataTable();
					MySqlDataAdapter ^ da = gcnew MySqlDataAdapter(cmd); //hace la consulta al adaptador
					
					da->Fill(dt);

					dgvAlumnos->DataSource = dt;

					conexbase->Close();
			}



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormBimestre::typeid));
			this->labelControl2 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->btnSave = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->labelControl1 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->dgvAlumnos = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblBimestre = (gcnew DevExpress::XtraEditors::LabelControl());
			this->txtespañol = (gcnew System::Windows::Forms::TextBox());
			this->txtmate = (gcnew System::Windows::Forms::TextBox());
			this->txtingles = (gcnew System::Windows::Forms::TextBox());
			this->txtvalores = (gcnew System::Windows::Forms::TextBox());
			this->txtciencias = (gcnew System::Windows::Forms::TextBox());
			this->txteducacion = (gcnew System::Windows::Forms::TextBox());
			this->txttecno = (gcnew System::Windows::Forms::TextBox());
			this->txtgeo = (gcnew System::Windows::Forms::TextBox());
			this->labelControl3 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->labelControl4 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->labelControl5 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->labelControl6 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->labelControl7 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->txtfinal = (gcnew System::Windows::Forms::TextBox());
			this->btncalcular = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->btnPrint = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->sfdDoc = (gcnew System::Windows::Forms::SaveFileDialog());
			this->txtBusqueda = (gcnew System::Windows::Forms::TextBox());
			this->lbsearch = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlumnos))->BeginInit();
			this->SuspendLayout();
			// 
			// labelControl2
			// 
			this->labelControl2->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelControl2->Location = System::Drawing::Point(67, 287);
			this->labelControl2->Name = L"labelControl2";
			this->labelControl2->Size = System::Drawing::Size(86, 19);
			this->labelControl2->TabIndex = 14;
			this->labelControl2->Text = L"Matematicas";
			// 
			// btnSave
			// 
			this->btnSave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSave.Image")));
			this->btnSave->Location = System::Drawing::Point(522, 235);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(128, 48);
			this->btnSave->TabIndex = 16;
			this->btnSave->Text = L"Registrar";
			this->btnSave->Click += gcnew System::EventHandler(this, &FormBimestre::btnSave_Click);
			// 
			// labelControl1
			// 
			this->labelControl1->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelControl1->Location = System::Drawing::Point(110, 338);
			this->labelControl1->Name = L"labelControl1";
			this->labelControl1->Size = System::Drawing::Size(43, 19);
			this->labelControl1->TabIndex = 17;
			this->labelControl1->Text = L"Ingles";
			// 
			// dgvAlumnos
			// 
			this->dgvAlumnos->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvAlumnos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAlumnos->Location = System::Drawing::Point(15, 41);
			this->dgvAlumnos->Name = L"dgvAlumnos";
			this->dgvAlumnos->Size = System::Drawing::Size(736, 155);
			this->dgvAlumnos->TabIndex = 19;
			this->dgvAlumnos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormBimestre::dgvAlumnos_CellContentClick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(279, 423);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 16);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Promedio Final:";
			// 
			// lblBimestre
			// 
			this->lblBimestre->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBimestre->Location = System::Drawing::Point(98, 235);
			this->lblBimestre->Name = L"lblBimestre";
			this->lblBimestre->Size = System::Drawing::Size(55, 19);
			this->lblBimestre->TabIndex = 26;
			this->lblBimestre->Text = L"Español";
			// 
			// txtespañol
			// 
			this->txtespañol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtespañol->Location = System::Drawing::Point(159, 235);
			this->txtespañol->Name = L"txtespañol";
			this->txtespañol->Size = System::Drawing::Size(33, 26);
			this->txtespañol->TabIndex = 27;
			this->txtespañol->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtmate
			// 
			this->txtmate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtmate->Location = System::Drawing::Point(159, 283);
			this->txtmate->Name = L"txtmate";
			this->txtmate->Size = System::Drawing::Size(33, 26);
			this->txtmate->TabIndex = 28;
			this->txtmate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtingles
			// 
			this->txtingles->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtingles->Location = System::Drawing::Point(159, 335);
			this->txtingles->Name = L"txtingles";
			this->txtingles->Size = System::Drawing::Size(33, 26);
			this->txtingles->TabIndex = 29;
			this->txtingles->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtvalores
			// 
			this->txtvalores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtvalores->Location = System::Drawing::Point(159, 383);
			this->txtvalores->Name = L"txtvalores";
			this->txtvalores->Size = System::Drawing::Size(33, 26);
			this->txtvalores->TabIndex = 30;
			this->txtvalores->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtciencias
			// 
			this->txtciencias->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtciencias->Location = System::Drawing::Point(159, 437);
			this->txtciencias->Name = L"txtciencias";
			this->txtciencias->Size = System::Drawing::Size(33, 26);
			this->txtciencias->TabIndex = 31;
			this->txtciencias->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txteducacion
			// 
			this->txteducacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txteducacion->Location = System::Drawing::Point(364, 239);
			this->txteducacion->Name = L"txteducacion";
			this->txteducacion->Size = System::Drawing::Size(33, 26);
			this->txteducacion->TabIndex = 32;
			this->txteducacion->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txttecno
			// 
			this->txttecno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txttecno->Location = System::Drawing::Point(364, 290);
			this->txttecno->Name = L"txttecno";
			this->txttecno->Size = System::Drawing::Size(33, 26);
			this->txttecno->TabIndex = 33;
			this->txttecno->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtgeo
			// 
			this->txtgeo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtgeo->Location = System::Drawing::Point(364, 339);
			this->txtgeo->Name = L"txtgeo";
			this->txtgeo->Size = System::Drawing::Size(33, 26);
			this->txtgeo->TabIndex = 34;
			this->txtgeo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// labelControl3
			// 
			this->labelControl3->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelControl3->Location = System::Drawing::Point(101, 386);
			this->labelControl3->Name = L"labelControl3";
			this->labelControl3->Size = System::Drawing::Size(52, 19);
			this->labelControl3->TabIndex = 35;
			this->labelControl3->Text = L"Valores";
			// 
			// labelControl4
			// 
			this->labelControl4->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelControl4->Location = System::Drawing::Point(25, 440);
			this->labelControl4->Name = L"labelControl4";
			this->labelControl4->Size = System::Drawing::Size(128, 19);
			this->labelControl4->TabIndex = 36;
			this->labelControl4->Text = L"Ciencias Naturales";
			// 
			// labelControl5
			// 
			this->labelControl5->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelControl5->Location = System::Drawing::Point(244, 242);
			this->labelControl5->Name = L"labelControl5";
			this->labelControl5->Size = System::Drawing::Size(114, 19);
			this->labelControl5->TabIndex = 37;
			this->labelControl5->Text = L"Educacion Fisica";
			// 
			// labelControl6
			// 
			this->labelControl6->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelControl6->Location = System::Drawing::Point(272, 290);
			this->labelControl6->Name = L"labelControl6";
			this->labelControl6->Size = System::Drawing::Size(84, 19);
			this->labelControl6->TabIndex = 38;
			this->labelControl6->Text = L"Tecnologias";
			// 
			// labelControl7
			// 
			this->labelControl7->Appearance->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelControl7->Location = System::Drawing::Point(272, 342);
			this->labelControl7->Name = L"labelControl7";
			this->labelControl7->Size = System::Drawing::Size(68, 19);
			this->labelControl7->TabIndex = 39;
			this->labelControl7->Text = L"Geografia";
			// 
			// txtfinal
			// 
			this->txtfinal->Enabled = false;
			this->txtfinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtfinal->Location = System::Drawing::Point(387, 398);
			this->txtfinal->Name = L"txtfinal";
			this->txtfinal->Size = System::Drawing::Size(46, 49);
			this->txtfinal->TabIndex = 40;
			this->txtfinal->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btncalcular
			// 
			this->btncalcular->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncalcular->Location = System::Drawing::Point(439, 411);
			this->btncalcular->Name = L"btncalcular";
			this->btncalcular->Size = System::Drawing::Size(100, 37);
			this->btncalcular->TabIndex = 41;
			this->btncalcular->Text = L"CALCULAR";
			this->btncalcular->Click += gcnew System::EventHandler(this, &FormBimestre::btncalcular_Click);
			// 
			// txtid
			// 
			this->txtid->Enabled = false;
			this->txtid->Location = System::Drawing::Point(15, 202);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(39, 20);
			this->txtid->TabIndex = 42;
			// 
			// btnPrint
			// 
			this->btnPrint->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPrint->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPrint.Image")));
			this->btnPrint->Location = System::Drawing::Point(522, 299);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(128, 41);
			this->btnPrint->TabIndex = 43;
			this->btnPrint->Text = L"Imprimir Reporte";
			this->btnPrint->Click += gcnew System::EventHandler(this, &FormBimestre::btnPrint_Click);
			// 
			// txtBusqueda
			// 
			this->txtBusqueda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBusqueda->Location = System::Drawing::Point(188, 9);
			this->txtBusqueda->Name = L"txtBusqueda";
			this->txtBusqueda->Size = System::Drawing::Size(563, 26);
			this->txtBusqueda->TabIndex = 44;
			this->txtBusqueda->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &FormBimestre::txtBusqueda_KeyUp);
			// 
			// lbsearch
			// 
			this->lbsearch->AutoSize = true;
			this->lbsearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbsearch->Location = System::Drawing::Point(11, 12);
			this->lbsearch->Name = L"lbsearch";
			this->lbsearch->Size = System::Drawing::Size(171, 20);
			this->lbsearch->TabIndex = 45;
			this->lbsearch->Text = L"Busqueda por nombre:";
			// 
			// FormBimestre
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(763, 473);
			this->Controls->Add(this->lbsearch);
			this->Controls->Add(this->txtBusqueda);
			this->Controls->Add(this->btnPrint);
			this->Controls->Add(this->txtid);
			this->Controls->Add(this->btncalcular);
			this->Controls->Add(this->txtfinal);
			this->Controls->Add(this->labelControl7);
			this->Controls->Add(this->labelControl6);
			this->Controls->Add(this->labelControl5);
			this->Controls->Add(this->labelControl4);
			this->Controls->Add(this->labelControl3);
			this->Controls->Add(this->txtgeo);
			this->Controls->Add(this->txttecno);
			this->Controls->Add(this->txteducacion);
			this->Controls->Add(this->txtciencias);
			this->Controls->Add(this->txtvalores);
			this->Controls->Add(this->txtingles);
			this->Controls->Add(this->txtmate);
			this->Controls->Add(this->txtespañol);
			this->Controls->Add(this->lblBimestre);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgvAlumnos);
			this->Controls->Add(this->labelControl1);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->labelControl2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(779, 486);
			this->Name = L"FormBimestre";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calificaciones";
			this->Load += gcnew System::EventHandler(this, &FormBimestre::FormBimestre_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlumnos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		
	}




private: System::Void FormBimestre_Load(System::Object^  sender, System::EventArgs^  e) {
}


private: System::Void btncalcular_Click(System::Object^  sender, System::EventArgs^  e) {
	int num1 = Convert::ToInt32(txtespañol->Text);
	int num2 = Convert::ToInt32(txtmate->Text);
	int num3 = Convert::ToInt32(txtingles->Text);
	int num4 = Convert::ToInt32(txtvalores->Text);
	int num5 = Convert::ToInt32(txtciencias->Text);
	int num6 = Convert::ToInt32(txteducacion->Text);
	int num7 = Convert::ToInt32(txttecno->Text);
	int num8 = Convert::ToInt32(txtgeo->Text);

	int resul;

	resul = (num1 + num2 + num3 + num4 +num5 + num6 + num7 + num8)/8;

	txtfinal->Text = "" + resul;
}
private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
	actualizar();
}
private: System::Void dgvAlumnos_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	
	DataGridViewRow ^ dgv = dgvAlumnos->Rows[e->RowIndex];
	txtid->Text = dgv->Cells[0]->Value->ToString();
	txtespañol->Text = dgv->Cells[6]->Value->ToString();
	txtmate->Text = dgv->Cells[7]->Value->ToString();
	txtingles->Text = dgv->Cells[8]->Value->ToString();
	txtvalores->Text = dgv->Cells[9]->Value->ToString();
	txtciencias->Text = dgv->Cells[10]->Value->ToString();
	txteducacion->Text = dgv->Cells[11]->Value->ToString();
	txttecno->Text = dgv->Cells[12]->Value->ToString();
	txtgeo->Text = dgv->Cells[13]->Value->ToString();
}
private: System::Void btnPrint_Click(System::Object^  sender, System::EventArgs^  e) {
	
	sfdDoc->Filter = "PDF Files|*.pdf";
	String ^ filename = String::Empty;
	if (sfdDoc->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		filename = sfdDoc->FileName;
		Document ^ doc = gcnew Document(PageSize::LEGAL->Rotate(), 10, 10, 10, 10);
		PdfWriter ^ wri = iTextSharp::text::pdf::PdfWriter::GetInstance(doc, gcnew FileStream(filename, FileMode::Create));
		doc->Open();
		try
		{
			String ^ fecha = "Fecha de creacion : " + DateTime::Now.ToString();
			iTextSharp::text::Image ^ logo =  iTextSharp::text::Image::GetInstance("c:\Logo.png");
			Chunk ^ titulo = gcnew Chunk("Reporte de Calificaciones", FontFactory::GetFont("Arial", 20, iTextSharp::text::Font::BOLD));
			doc->Add(logo);
			doc->Add(gcnew Paragraph(titulo));
			doc->Add(gcnew Paragraph("							"));
			doc->Add(gcnew Paragraph("							"));
			doc->Add(gcnew Paragraph("							"));
			doc->Add(gcnew Paragraph("----------------------------------------------------------------------------------------------"));
			doc->Add(gcnew Paragraph("System Control"));
			doc->Add(gcnew Paragraph(fecha));
			doc->Add(gcnew Paragraph("----------------------------------------------------------------------------------------------"));
			doc->Add(gcnew Paragraph("							"));
			doc->Add(gcnew Paragraph("							"));
			doc->Add(gcnew Paragraph("							"));
			doc->Add(gcnew Paragraph("							\n"));


			PdfPTable ^ tabla = gcnew PdfPTable(dgvAlumnos->Columns->Count);
			for (int j = 0;j < dgvAlumnos->Columns->Count;j++)
			{
				tabla->AddCell(gcnew Phrase(dgvAlumnos->Columns[j]->HeaderText));
			}

			tabla->HeaderRows = 1;

			for (int i = 0; i < dgvAlumnos->Rows->Count;i++)
			{
				for (int k = 0; k < dgvAlumnos->Columns->Count;k++)
				{
					if (dgvAlumnos[k, i]->Value != nullptr)
					{
						tabla->AddCell(gcnew Phrase(dgvAlumnos[k, i]->Value->ToString()));
					}
				}
			}

			doc->Add(tabla);
			MessageBox::Show("Se creo la base da datos");

		}
		catch (Exception^ex)
		{

			MessageBox::Show(ex->Message);
			MessageBox::Show("Error de creacion");

		}

		doc->Close();
	}
}
private: System::Void txtBusqueda_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	buscar();
}
};
}
