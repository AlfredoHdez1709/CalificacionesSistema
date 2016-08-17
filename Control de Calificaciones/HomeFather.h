#pragma once
#include "about.h"
#include "AgregarAlumno.h"
#include"ListAlumnos.h"
#include "FormBimestre.h"
#include "Perfil.h"
#include "FormManual.h"
#include "FormExportar.h"
#include "FormWeb.h"


namespace ControldeCalificaciones {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Timers;

	/// <summary>
	/// Summary for HomeFather
	/// </summary>
	public ref class HomeFather : public System::Windows::Forms::Form
	{
	public:
		HomeFather(Form^ obj)
		{
			InitializeComponent();
			aux = obj;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HomeFather()
		{
			if (components)
			{
				delete components;
			}
		}
	private: DevExpress::XtraBars::Ribbon::RibbonPage^  rbinicio;
	protected:
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^  ribbonPageGroup1;
	private: DevExpress::XtraBars::BarButtonItem^  btnaddalumno;
	private: DevExpress::XtraBars::BarButtonItem^  btnLista;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^  rbCalificaciones;
	private: DevExpress::XtraBars::BarButtonItem^  btnCalificaciones;
	private: DevExpress::XtraBars::BarButtonItem^  btnexportar;
	private: DevExpress::XtraBars::Ribbon::RibbonControl^  RMFather;

	private: DevExpress::XtraBars::BarButtonItem^  btnclose;



	private: DevExpress::XtraBars::Ribbon::RibbonPage^  rbpage2;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^  ribbonPageGroup2;
	private: DevExpress::XtraBars::BarButtonItem^  btnabout;
	private: DevExpress::XtraBars::BarButtonItem^  btnHelp;
	private: DevExpress::XtraBars::BarButtonItem^  btnMateria;
	private: DevExpress::XtraBars::BarButtonItem^  btnMaster;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^  btnHomeMaster;

	private: DevExpress::XtraBars::BarStaticItem^  lb_clock;
	private: System::Windows::Forms::Timer^  timerClock;
	private: DevExpress::XtraBars::BarHeaderItem^  lbl_clock;
	private: System::Windows::Forms::Label^  label1;
	private: DevExpress::XtraBars::BarButtonItem^  btnWeb;
	private: DevExpress::XtraBars::BarButtonItem^  btnsession;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^  ribbonPageGroup3;



		private: System::ComponentModel::IContainer^  components;
		Form^ aux;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(HomeFather::typeid));
			DevExpress::Utils::SuperToolTip^  superToolTip1 = (gcnew DevExpress::Utils::SuperToolTip());
			DevExpress::Utils::ToolTipTitleItem^  toolTipTitleItem1 = (gcnew DevExpress::Utils::ToolTipTitleItem());
			DevExpress::Utils::ToolTipItem^  toolTipItem1 = (gcnew DevExpress::Utils::ToolTipItem());
			DevExpress::Utils::ToolTipTitleItem^  toolTipTitleItem2 = (gcnew DevExpress::Utils::ToolTipTitleItem());
			DevExpress::Utils::SuperToolTip^  superToolTip2 = (gcnew DevExpress::Utils::SuperToolTip());
			DevExpress::Utils::ToolTipTitleItem^  toolTipTitleItem3 = (gcnew DevExpress::Utils::ToolTipTitleItem());
			DevExpress::Utils::ToolTipItem^  toolTipItem2 = (gcnew DevExpress::Utils::ToolTipItem());
			DevExpress::Utils::ToolTipTitleItem^  toolTipTitleItem4 = (gcnew DevExpress::Utils::ToolTipTitleItem());
			DevExpress::Utils::SuperToolTip^  superToolTip3 = (gcnew DevExpress::Utils::SuperToolTip());
			DevExpress::Utils::ToolTipTitleItem^  toolTipTitleItem5 = (gcnew DevExpress::Utils::ToolTipTitleItem());
			DevExpress::Utils::ToolTipItem^  toolTipItem3 = (gcnew DevExpress::Utils::ToolTipItem());
			DevExpress::Utils::ToolTipTitleItem^  toolTipTitleItem6 = (gcnew DevExpress::Utils::ToolTipTitleItem());
			DevExpress::Utils::SuperToolTip^  superToolTip4 = (gcnew DevExpress::Utils::SuperToolTip());
			DevExpress::Utils::ToolTipTitleItem^  toolTipTitleItem7 = (gcnew DevExpress::Utils::ToolTipTitleItem());
			DevExpress::Utils::ToolTipItem^  toolTipItem4 = (gcnew DevExpress::Utils::ToolTipItem());
			DevExpress::Utils::ToolTipTitleItem^  toolTipTitleItem8 = (gcnew DevExpress::Utils::ToolTipTitleItem());
			DevExpress::Utils::SuperToolTip^  superToolTip5 = (gcnew DevExpress::Utils::SuperToolTip());
			DevExpress::Utils::ToolTipTitleItem^  toolTipTitleItem9 = (gcnew DevExpress::Utils::ToolTipTitleItem());
			DevExpress::Utils::ToolTipItem^  toolTipItem5 = (gcnew DevExpress::Utils::ToolTipItem());
			DevExpress::Utils::ToolTipTitleItem^  toolTipTitleItem10 = (gcnew DevExpress::Utils::ToolTipTitleItem());
			DevExpress::Utils::SuperToolTip^  superToolTip6 = (gcnew DevExpress::Utils::SuperToolTip());
			DevExpress::Utils::ToolTipTitleItem^  toolTipTitleItem11 = (gcnew DevExpress::Utils::ToolTipTitleItem());
			DevExpress::Utils::ToolTipItem^  toolTipItem6 = (gcnew DevExpress::Utils::ToolTipItem());
			DevExpress::Utils::SuperToolTip^  superToolTip7 = (gcnew DevExpress::Utils::SuperToolTip());
			DevExpress::Utils::ToolTipTitleItem^  toolTipTitleItem12 = (gcnew DevExpress::Utils::ToolTipTitleItem());
			DevExpress::Utils::ToolTipItem^  toolTipItem7 = (gcnew DevExpress::Utils::ToolTipItem());
			this->rbinicio = (gcnew DevExpress::XtraBars::Ribbon::RibbonPage());
			this->ribbonPageGroup1 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->btnaddalumno = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->rbCalificaciones = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->btnCalificaciones = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->btnHomeMaster = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->btnMaster = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->btnWeb = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->btnLista = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->btnexportar = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->btnMateria = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->lb_clock = (gcnew DevExpress::XtraBars::BarStaticItem());
			this->lbl_clock = (gcnew DevExpress::XtraBars::BarHeaderItem());
			this->RMFather = (gcnew DevExpress::XtraBars::Ribbon::RibbonControl());
			this->btnclose = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->btnabout = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->btnHelp = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->btnsession = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->rbpage2 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPage());
			this->ribbonPageGroup3 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->ribbonPageGroup2 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->timerClock = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RMFather))->BeginInit();
			this->SuspendLayout();
			// 
			// rbinicio
			// 
			this->rbinicio->Groups->AddRange(gcnew cli::array< DevExpress::XtraBars::Ribbon::RibbonPageGroup^  >(3) {
				this->ribbonPageGroup1,
					this->rbCalificaciones, this->btnHomeMaster
			});
			this->rbinicio->Name = L"rbinicio";
			this->rbinicio->Text = L"Inicio";
			// 
			// ribbonPageGroup1
			// 
			this->ribbonPageGroup1->ItemLinks->Add(this->btnaddalumno);
			this->ribbonPageGroup1->Name = L"ribbonPageGroup1";
			this->ribbonPageGroup1->Text = L"Alumno";
			// 
			// btnaddalumno
			// 
			this->btnaddalumno->Caption = L"Agregar alumno";
			this->btnaddalumno->CategoryGuid = System::Guid(L"6ffddb2b-9015-4d97-a4c1-91613e0ef537");
			this->btnaddalumno->Glyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnaddalumno.Glyph")));
			this->btnaddalumno->Id = 1;
			this->btnaddalumno->LargeGlyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnaddalumno.LargeGlyph")));
			this->btnaddalumno->Name = L"btnaddalumno";
			toolTipTitleItem1->Text = L"Agregar un Alumno";
			toolTipItem1->Appearance->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image")));
			toolTipItem1->Appearance->Options->UseImage = true;
			toolTipItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolTipItem1.Image")));
			toolTipItem1->LeftIndent = 6;
			toolTipItem1->Text = L"Aqui podras agregar, modificar y eliminar \r\ntoda la lista de alumnos que le corre"
				L"sponda";
			toolTipTitleItem2->LeftIndent = 6;
			toolTipTitleItem2->Text = L"Si tienes dudas consulta en manual de \r\nusuario";
			superToolTip1->Items->Add(toolTipTitleItem1);
			superToolTip1->Items->Add(toolTipItem1);
			superToolTip1->Items->Add(toolTipTitleItem2);
			this->btnaddalumno->SuperTip = superToolTip1;
			this->btnaddalumno->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &HomeFather::btnaddalumno_ItemClick);
			// 
			// rbCalificaciones
			// 
			this->rbCalificaciones->ItemLinks->Add(this->btnCalificaciones);
			this->rbCalificaciones->Name = L"rbCalificaciones";
			this->rbCalificaciones->Text = L"Calificaciones";
			// 
			// btnCalificaciones
			// 
			this->btnCalificaciones->Caption = L"Calificaciones";
			this->btnCalificaciones->CategoryGuid = System::Guid(L"6ffddb2b-9015-4d97-a4c1-91613e0ef537");
			this->btnCalificaciones->Glyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCalificaciones.Glyph")));
			this->btnCalificaciones->Id = 4;
			this->btnCalificaciones->LargeGlyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCalificaciones.LargeGlyph")));
			this->btnCalificaciones->Name = L"btnCalificaciones";
			toolTipTitleItem3->Text = L"Calificaciones";
			toolTipItem2->Appearance->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image1")));
			toolTipItem2->Appearance->Options->UseImage = true;
			toolTipItem2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolTipItem2.Image")));
			toolTipItem2->LeftIndent = 6;
			toolTipItem2->Text = L"Registra las calificaciones de todos\r\ntus alumnos por materia, podras \r\nmodificar"
				L" y eliminar si asi lo deseas";
			toolTipTitleItem4->LeftIndent = 6;
			toolTipTitleItem4->Text = L"Si tienes dudas consulta el manual de usuario";
			superToolTip2->Items->Add(toolTipTitleItem3);
			superToolTip2->Items->Add(toolTipItem2);
			superToolTip2->Items->Add(toolTipTitleItem4);
			this->btnCalificaciones->SuperTip = superToolTip2;
			this->btnCalificaciones->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &HomeFather::btnCalificaciones_ItemClick);
			// 
			// btnHomeMaster
			// 
			this->btnHomeMaster->ItemLinks->Add(this->btnMaster);
			this->btnHomeMaster->ItemLinks->Add(this->btnWeb);
			this->btnHomeMaster->Name = L"btnHomeMaster";
			this->btnHomeMaster->Text = L"Perfil de Maestro";
			// 
			// btnMaster
			// 
			this->btnMaster->Caption = L"Perfil Maestro";
			this->btnMaster->Glyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMaster.Glyph")));
			this->btnMaster->Id = 9;
			this->btnMaster->LargeGlyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMaster.LargeGlyph")));
			this->btnMaster->Name = L"btnMaster";
			this->btnMaster->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &HomeFather::btnMaster_ItemClick);
			// 
			// btnWeb
			// 
			this->btnWeb->Caption = L"Subir Calificaciones";
			this->btnWeb->Glyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWeb.Glyph")));
			this->btnWeb->Id = 12;
			this->btnWeb->LargeGlyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWeb.LargeGlyph")));
			this->btnWeb->Name = L"btnWeb";
			this->btnWeb->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &HomeFather::btnWeb_ItemClick);
			// 
			// btnLista
			// 
			this->btnLista->Caption = L"Lista de asistencia";
			this->btnLista->CategoryGuid = System::Guid(L"6ffddb2b-9015-4d97-a4c1-91613e0ef537");
			this->btnLista->Glyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLista.Glyph")));
			this->btnLista->Id = 2;
			this->btnLista->LargeGlyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLista.LargeGlyph")));
			this->btnLista->Name = L"btnLista";
			toolTipTitleItem5->Text = L"Lista de asistencias";
			toolTipItem3->Appearance->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image2")));
			toolTipItem3->Appearance->Options->UseImage = true;
			toolTipItem3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolTipItem3.Image")));
			toolTipItem3->LeftIndent = 6;
			toolTipItem3->Text = L"Aqui tienes una lista de asistencia \r\nque podras imprimir y llevar tu control";
			toolTipTitleItem6->LeftIndent = 6;
			toolTipTitleItem6->Text = L"Si tienes dudas consulta la guia de usuario";
			superToolTip3->Items->Add(toolTipTitleItem5);
			superToolTip3->Items->Add(toolTipItem3);
			superToolTip3->Items->Add(toolTipTitleItem6);
			this->btnLista->SuperTip = superToolTip3;
			this->btnLista->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &HomeFather::btnLista_ItemClick);
			// 
			// btnexportar
			// 
			this->btnexportar->Caption = L"Exportar";
			this->btnexportar->CategoryGuid = System::Guid(L"6ffddb2b-9015-4d97-a4c1-91613e0ef537");
			this->btnexportar->Glyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnexportar.Glyph")));
			this->btnexportar->Id = 5;
			this->btnexportar->LargeGlyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnexportar.LargeGlyph")));
			this->btnexportar->Name = L"btnexportar";
			toolTipTitleItem7->Text = L"Exportar";
			toolTipItem4->Appearance->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image3")));
			toolTipItem4->Appearance->Options->UseImage = true;
			toolTipItem4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolTipItem4.Image")));
			toolTipItem4->LeftIndent = 6;
			toolTipItem4->Text = L"Exporta toda las informacion recabada\r\nen un archivo de Excel o PDF";
			toolTipTitleItem8->LeftIndent = 6;
			toolTipTitleItem8->Text = L"Si tienes dudas consulta el manual de usuario";
			superToolTip4->Items->Add(toolTipTitleItem7);
			superToolTip4->Items->Add(toolTipItem4);
			superToolTip4->Items->Add(toolTipTitleItem8);
			this->btnexportar->SuperTip = superToolTip4;
			this->btnexportar->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &HomeFather::btnexportar_ItemClick);
			// 
			// btnMateria
			// 
			this->btnMateria->Caption = L"Agregar Materia";
			this->btnMateria->Glyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMateria.Glyph")));
			this->btnMateria->Id = 8;
			this->btnMateria->LargeGlyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMateria.LargeGlyph")));
			this->btnMateria->Name = L"btnMateria";
			toolTipTitleItem9->Text = L"Agrega Una Materia";
			toolTipItem5->Appearance->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image4")));
			toolTipItem5->Appearance->Options->UseImage = true;
			toolTipItem5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolTipItem5.Image")));
			toolTipItem5->LeftIndent = 6;
			toolTipItem5->Text = L"Aqui podras agrega, modificar\r\ny eliminar las materias que esten \r\ndando en tu cu"
				L"rso";
			toolTipTitleItem10->LeftIndent = 6;
			toolTipTitleItem10->Text = L"Si tienes dudas consulta el manual\r\nde usuario";
			superToolTip5->Items->Add(toolTipTitleItem9);
			superToolTip5->Items->Add(toolTipItem5);
			superToolTip5->Items->Add(toolTipTitleItem10);
			this->btnMateria->SuperTip = superToolTip5;
			// 
			// lb_clock
			// 
			this->lb_clock->Caption = L"00:00:00";
			this->lb_clock->Id = 10;
			this->lb_clock->Name = L"lb_clock";
			this->lb_clock->TextAlignment = System::Drawing::StringAlignment::Near;
			// 
			// lbl_clock
			// 
			this->lbl_clock->Caption = L"barHeaderItem1";
			this->lbl_clock->Id = 11;
			this->lbl_clock->Name = L"lbl_clock";
			// 
			// RMFather
			// 
			this->RMFather->ExpandCollapseItem->Id = 0;
			this->RMFather->Items->AddRange(gcnew cli::array< DevExpress::XtraBars::BarItem^  >(14) {
				this->RMFather->ExpandCollapseItem,
					this->btnaddalumno, this->btnLista, this->btnCalificaciones, this->btnexportar, this->btnclose, this->btnabout, this->btnHelp,
					this->btnMateria, this->btnMaster, this->lb_clock, this->lbl_clock, this->btnWeb, this->btnsession
			});
			this->RMFather->Location = System::Drawing::Point(0, 0);
			this->RMFather->MaxItemId = 14;
			this->RMFather->Name = L"RMFather";
			this->RMFather->Pages->AddRange(gcnew cli::array< DevExpress::XtraBars::Ribbon::RibbonPage^  >(2) { this->rbinicio, this->rbpage2 });
			this->RMFather->RibbonStyle = DevExpress::XtraBars::Ribbon::RibbonControlStyle::Office2013;
			this->RMFather->Size = System::Drawing::Size(799, 142);
			this->RMFather->Toolbar->ItemLinks->Add(this->btnclose);
			// 
			// btnclose
			// 
			this->btnclose->Caption = L"Salir";
			this->btnclose->Glyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnclose.Glyph")));
			this->btnclose->Id = 8;
			this->btnclose->LargeGlyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnclose.LargeGlyph")));
			this->btnclose->Name = L"btnclose";
			this->btnclose->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &HomeFather::btnclose_ItemClick);
			// 
			// btnabout
			// 
			this->btnabout->Caption = L"Acerca de";
			this->btnabout->Glyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnabout.Glyph")));
			this->btnabout->Id = 10;
			this->btnabout->LargeGlyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnabout.LargeGlyph")));
			this->btnabout->Name = L"btnabout";
			toolTipTitleItem11->Text = L"Acerca de";
			toolTipItem6->Appearance->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image5")));
			toolTipItem6->Appearance->Options->UseImage = true;
			toolTipItem6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolTipItem6.Image")));
			toolTipItem6->LeftIndent = 6;
			toolTipItem6->Text = L"Informacion detallada del desarrollador\r\ny contacto";
			superToolTip6->Items->Add(toolTipTitleItem11);
			superToolTip6->Items->Add(toolTipItem6);
			this->btnabout->SuperTip = superToolTip6;
			this->btnabout->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &HomeFather::btnabout_ItemClick);
			// 
			// btnHelp
			// 
			this->btnHelp->Caption = L"Ayuda";
			this->btnHelp->CategoryGuid = System::Guid(L"6ffddb2b-9015-4d97-a4c1-91613e0ef537");
			this->btnHelp->Glyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHelp.Glyph")));
			this->btnHelp->Id = 11;
			this->btnHelp->LargeGlyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHelp.LargeGlyph")));
			this->btnHelp->Name = L"btnHelp";
			toolTipTitleItem12->Text = L"Ayuda";
			toolTipItem7->Appearance->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image6")));
			toolTipItem7->Appearance->Options->UseImage = true;
			toolTipItem7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolTipItem7.Image")));
			toolTipItem7->LeftIndent = 6;
			toolTipItem7->Text = L"Contiene todo el manual de usuario\r\npara tu disposicion, si aun tienes \r\ndudas co"
				L"ntactanos.";
			superToolTip7->Items->Add(toolTipTitleItem12);
			superToolTip7->Items->Add(toolTipItem7);
			this->btnHelp->SuperTip = superToolTip7;
			this->btnHelp->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &HomeFather::btnHelp_ItemClick);
			// 
			// btnsession
			// 
			this->btnsession->Caption = L"Terminar session";
			this->btnsession->Glyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnsession.Glyph")));
			this->btnsession->Id = 13;
			this->btnsession->LargeGlyph = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnsession.LargeGlyph")));
			this->btnsession->Name = L"btnsession";
			this->btnsession->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &HomeFather::btnsession_ItemClick);
			// 
			// rbpage2
			// 
			this->rbpage2->Groups->AddRange(gcnew cli::array< DevExpress::XtraBars::Ribbon::RibbonPageGroup^  >(2) {
				this->ribbonPageGroup3,
					this->ribbonPageGroup2
			});
			this->rbpage2->Name = L"rbpage2";
			this->rbpage2->Text = L"Configuraciones";
			// 
			// ribbonPageGroup3
			// 
			this->ribbonPageGroup3->ItemLinks->Add(this->btnsession);
			this->ribbonPageGroup3->Name = L"ribbonPageGroup3";
			this->ribbonPageGroup3->Text = L"Session";
			// 
			// ribbonPageGroup2
			// 
			this->ribbonPageGroup2->ItemLinks->Add(this->btnHelp);
			this->ribbonPageGroup2->ItemLinks->Add(this->btnabout);
			this->ribbonPageGroup2->Name = L"ribbonPageGroup2";
			this->ribbonPageGroup2->Text = L"Configuraciones";
			// 
			// timerClock
			// 
			this->timerClock->Enabled = true;
			this->timerClock->Tick += gcnew System::EventHandler(this, &HomeFather::timerClock_Tick);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(583, 156);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &HomeFather::label1_Click);
			// 
			// HomeFather
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(799, 437);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->RMFather);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->Name = L"HomeFather";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inicio";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &HomeFather::HomeFather_FormClosing);
			this->Load += gcnew System::EventHandler(this, &HomeFather::HomeFather_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RMFather))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		bool RoughlyEquals(DateTime time, DateTime timeWithWindow, int windowInSeconds, int frequencyInSeconds)
		{
			long delta = (long)((TimeSpan)(timeWithWindow - time)).TotalSeconds % frequencyInSeconds;
			delta = delta > windowInSeconds ? frequencyInSeconds - delta : delta;
			return Math::Abs(delta) < windowInSeconds;
		}

#pragma endregion
	
private: System::Void btnaddalumno_ItemClick(System::Object^  sender, DevExpress::XtraBars::ItemClickEventArgs^  e) {
	AgregarAlumno ^ addalumno = gcnew AgregarAlumno();
	addalumno->MdiParent = this;
	addalumno->Show();

}
private: System::Void btnLista_ItemClick(System::Object^  sender, DevExpress::XtraBars::ItemClickEventArgs^  e) {
	ListAlumnos  ^  listalumnos = gcnew ListAlumnos();
	listalumnos->MdiParent = this;
	listalumnos->Show();
}
private: System::Void btnCalificaciones_ItemClick(System::Object^  sender, DevExpress::XtraBars::ItemClickEventArgs^  e) {
	FormBimestre  ^ Bimestres = gcnew FormBimestre();
	Bimestres->MdiParent = this;
	Bimestres->Show();
}
private: System::Void btnabout_ItemClick(System::Object^  sender, DevExpress::XtraBars::ItemClickEventArgs^  e) {
	about  ^ acerca = gcnew about();
	acerca->MdiParent = this;
	acerca->Show();
}


private: System::Void timerClock_Tick(System::Object^  sender, System::EventArgs^  e) {
	DateTime d1 = DateTime::Now;
	this->label1->Text = d1.ToString();
}
private: System::Void btnclose_ItemClick(System::Object^  sender, DevExpress::XtraBars::ItemClickEventArgs^  e) {
	Application::Exit();
}
private: System::Void btnMaster_ItemClick(System::Object^  sender, DevExpress::XtraBars::ItemClickEventArgs^  e) {
	Perfil ^ perfil = gcnew Perfil();
	perfil->MdiParent = this;
	perfil->Show();
}
private: System::Void btnHelp_ItemClick(System::Object^  sender, DevExpress::XtraBars::ItemClickEventArgs^  e) {
	FormManual ^ manual = gcnew FormManual();
	manual->MdiParent = this;
	manual->Show();
}
private: System::Void btnexportar_ItemClick(System::Object^  sender, DevExpress::XtraBars::ItemClickEventArgs^  e) {
	FormExportar ^ exportar = gcnew FormExportar();
	exportar->MdiParent = this;
	exportar->Show();
}
private: System::Void btnWeb_ItemClick(System::Object^  sender, DevExpress::XtraBars::ItemClickEventArgs^  e) {
	FormWeb ^ web = gcnew FormWeb();
	web->MdiParent = this;
	web->Show();
}

private: System::Void HomeFather_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (MessageBox::Show("¿En verdad desea salir?", "Hasta pronto =(", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
	else

		e->Cancel = true;

		}
	private: System::Void HomeFather_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btnsession_ItemClick(System::Object^  sender, DevExpress::XtraBars::ItemClickEventArgs^  e) {
	aux->Show();
	this->Hide();
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
