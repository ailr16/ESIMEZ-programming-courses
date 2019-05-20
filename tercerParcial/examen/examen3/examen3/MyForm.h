#include <msclr/marshal_cppstd.h>
#include <string>
#include <iostream>
#include <fstream>
#include "Integral.h"
#include "Derivada.h"
#include "tratamientoPuntos.h"
#include "GraficadorFx.h"
#include "EDO.h"

#pragma once
using info::lundin::math::ExpressionParser;

namespace examen3 {				//Cambiar CLRWindowsForms por nombre del proyecto

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			ind = 0;
			comprobarBotones();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	public:
		int ind, selInductor=0;
	public:	int n, ng, selected;
			int m;
			double *x;
			double *y;
			double *z;
			double **V;
			double **Vt;
			double **S;
			double **St;
			String^ polinomio;
			String^ ecuacionRecta;
	private: System::Windows::Forms::TabControl^  tabControl1;
	public:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  botonLimpiar;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  botonIntegrar;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  cajaFuncion;

	private: System::Windows::Forms::TextBox^  cajaN;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  cajaXb;
	private: System::Windows::Forms::TextBox^  cajaXa;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  cajaInductor;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  botonInfo;
	private: System::Windows::Forms::Button^  botonGraficar;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  botonLeer;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Button^  botonLeeArchivo3;


	private: System::Windows::Forms::TextBox^  cajaArchivo;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Button^  dif3;
private: System::Windows::Forms::Button^  info3;


private: System::Windows::Forms::Button^  botonGraficar3;
private: System::Windows::Forms::Button^  botonLimpiar3;


	private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::TextBox^  cajaInterpolar3;

	private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Button^  leerPuntos3;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  cajaPuntos3;

	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::Button^  limpiar4;

private: System::Windows::Forms::ListBox^  listBox4;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::Button^  info4;

private: System::Windows::Forms::Button^  botonResolver4;

private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::TextBox^  cajaFuncion4;

private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  cajaE0;

private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  cajaN4;

private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::TextBox^  cajaT4;

private: System::Windows::Forms::TextBox^  cajaT0;
private: System::Windows::Forms::Label^  cajaT;



private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::PictureBox^  pictureBox10;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::PictureBox^  pictureBox11;
private: System::Windows::Forms::PictureBox^  pictureBox14;
private: System::Windows::Forms::PictureBox^  pictureBox13;
private: System::Windows::Forms::PictureBox^  pictureBox12;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label35;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->botonLimpiar = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->botonIntegrar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cajaInductor = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cajaFuncion = (gcnew System::Windows::Forms::TextBox());
			this->cajaN = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cajaXb = (gcnew System::Windows::Forms::TextBox());
			this->cajaXa = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->botonInfo = (gcnew System::Windows::Forms::Button());
			this->botonGraficar = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->botonLeer = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->botonLeeArchivo3 = (gcnew System::Windows::Forms::Button());
			this->cajaArchivo = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->dif3 = (gcnew System::Windows::Forms::Button());
			this->info3 = (gcnew System::Windows::Forms::Button());
			this->botonGraficar3 = (gcnew System::Windows::Forms::Button());
			this->botonLimpiar3 = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->cajaInterpolar3 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->leerPuntos3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->cajaPuntos3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->limpiar4 = (gcnew System::Windows::Forms::Button());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->info4 = (gcnew System::Windows::Forms::Button());
			this->botonResolver4 = (gcnew System::Windows::Forms::Button());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->cajaFuncion4 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->cajaE0 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->cajaN4 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->cajaT4 = (gcnew System::Windows::Forms::TextBox());
			this->cajaT0 = (gcnew System::Windows::Forms::TextBox());
			this->cajaT = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(13, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1158, 518);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->pictureBox5);
			this->tabPage1->Controls->Add(this->pictureBox4);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->pictureBox3);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1150, 492);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Integral";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(732, 326);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(377, 143);
			this->label9->TabIndex = 16;
			this->label9->Text = resources->GetString(L"label9.Text");
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(266, 325);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(187, 152);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 15;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(492, 430);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(157, 50);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(519, 369);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Series de Fourier";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(469, 322);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(256, 104);
			this->label8->TabIndex = 12;
			this->label8->Text = resources->GetString(L"label8.Text");
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(12, 318);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(239, 159);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(5, 134);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(253, 143);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(2, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(259, 299);
			this->label7->TabIndex = 9;
			this->label7->Text = resources->GetString(L"label7.Text");
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Controls->Add(this->botonLimpiar);
			this->groupBox3->Controls->Add(this->listBox1);
			this->groupBox3->Location = System::Drawing::Point(440, 6);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(704, 313);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Salida";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(279, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(419, 281);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// botonLimpiar
			// 
			this->botonLimpiar->Location = System::Drawing::Point(52, 277);
			this->botonLimpiar->Name = L"botonLimpiar";
			this->botonLimpiar->Size = System::Drawing::Size(146, 23);
			this->botonLimpiar->TabIndex = 2;
			this->botonLimpiar->Text = L"Limpiar";
			this->botonLimpiar->UseVisualStyleBackColor = true;
			this->botonLimpiar->Click += gcnew System::EventHandler(this, &MyForm::botonLimpiar_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->Location = System::Drawing::Point(7, 20);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(255, 251);
			this->listBox1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->botonIntegrar);
			this->groupBox2->Location = System::Drawing::Point(257, 229);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(179, 90);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Proceso";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(20, 50);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Info";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// botonIntegrar
			// 
			this->botonIntegrar->Location = System::Drawing::Point(20, 20);
			this->botonIntegrar->Name = L"botonIntegrar";
			this->botonIntegrar->Size = System::Drawing::Size(146, 23);
			this->botonIntegrar->TabIndex = 5;
			this->botonIntegrar->Text = L"Resolver";
			this->botonIntegrar->UseVisualStyleBackColor = true;
			this->botonIntegrar->Click += gcnew System::EventHandler(this, &MyForm::botonIntegrar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label33);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->cajaInductor);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->cajaFuncion);
			this->groupBox1->Controls->Add(this->cajaN);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->cajaXb);
			this->groupBox1->Controls->Add(this->cajaXa);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(257, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(179, 216);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entrada";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(97, 16);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(75, 26);
			this->label33->TabIndex = 14;
			this->label33->Text = L"*Ingrese como\r\nfuncion de x";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"mH", L"uH", L"nH" });
			this->comboBox1->Location = System::Drawing::Point(100, 174);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(52, 21);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Valor del inductor";
			// 
			// cajaInductor
			// 
			this->cajaInductor->Location = System::Drawing::Point(32, 175);
			this->cajaInductor->Name = L"cajaInductor";
			this->cajaInductor->Size = System::Drawing::Size(61, 20);
			this->cajaInductor->TabIndex = 11;
			this->cajaInductor->Text = L"14.16";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(36, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 42);
			this->label6->TabIndex = 10;
			this->label6->Text = L"∫";
			// 
			// cajaFuncion
			// 
			this->cajaFuncion->Location = System::Drawing::Point(64, 59);
			this->cajaFuncion->Name = L"cajaFuncion";
			this->cajaFuncion->Size = System::Drawing::Size(88, 20);
			this->cajaFuncion->TabIndex = 3;
			this->cajaFuncion->Text = resources->GetString(L"cajaFuncion.Text");
			this->cajaFuncion->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaFuncion_TextChanged);
			// 
			// cajaN
			// 
			this->cajaN->Location = System::Drawing::Point(76, 118);
			this->cajaN->Name = L"cajaN";
			this->cajaN->Size = System::Drawing::Size(50, 20);
			this->cajaN->TabIndex = 4;
			this->cajaN->Text = L"512";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(57, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(154, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"dx";
			// 
			// cajaXb
			// 
			this->cajaXb->Location = System::Drawing::Point(32, 24);
			this->cajaXb->Name = L"cajaXb";
			this->cajaXb->Size = System::Drawing::Size(36, 20);
			this->cajaXb->TabIndex = 2;
			this->cajaXb->Text = L"15.18";
			this->cajaXb->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaXb_TextChanged);
			// 
			// cajaXa
			// 
			this->cajaXa->Location = System::Drawing::Point(32, 89);
			this->cajaXa->Name = L"cajaXa";
			this->cajaXa->Size = System::Drawing::Size(36, 20);
			this->cajaXa->TabIndex = 1;
			this->cajaXa->Text = L"0";
			this->cajaXa->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaXa_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"xb";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"xa";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage2->Controls->Add(this->groupBox6);
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->pictureBox6);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1150, 492);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Derivada";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->pictureBox7);
			this->groupBox6->Controls->Add(this->listBox2);
			this->groupBox6->Location = System::Drawing::Point(560, 15);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(581, 336);
			this->groupBox6->TabIndex = 13;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Salida";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(216, 24);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(359, 302);
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox7_Paint);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->HorizontalScrollbar = true;
			this->listBox2->Location = System::Drawing::Point(7, 23);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(203, 303);
			this->listBox2->TabIndex = 0;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button3);
			this->groupBox5->Controls->Add(this->botonInfo);
			this->groupBox5->Controls->Add(this->botonGraficar);
			this->groupBox5->Controls->Add(this->button4);
			this->groupBox5->Location = System::Drawing::Point(305, 179);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(249, 122);
			this->groupBox5->TabIndex = 12;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Proceso";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(9, 19);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 29);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Resolver";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// botonInfo
			// 
			this->botonInfo->Location = System::Drawing::Point(84, 91);
			this->botonInfo->Name = L"botonInfo";
			this->botonInfo->Size = System::Drawing::Size(75, 23);
			this->botonInfo->TabIndex = 3;
			this->botonInfo->Text = L"Info";
			this->botonInfo->UseVisualStyleBackColor = true;
			this->botonInfo->Click += gcnew System::EventHandler(this, &MyForm::botonInfo_Click);
			// 
			// botonGraficar
			// 
			this->botonGraficar->Location = System::Drawing::Point(126, 19);
			this->botonGraficar->Name = L"botonGraficar";
			this->botonGraficar->Size = System::Drawing::Size(117, 29);
			this->botonGraficar->TabIndex = 2;
			this->botonGraficar->Text = L"Graficar";
			this->botonGraficar->UseVisualStyleBackColor = true;
			this->botonGraficar->Click += gcnew System::EventHandler(this, &MyForm::botonGraficar_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(9, 54);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(234, 31);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Limpiar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(651, 366);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(232, 117);
			this->label12->TabIndex = 11;
			this->label12->Text = resources->GetString(L"label12.Text");
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label34);
			this->groupBox4->Controls->Add(this->comboBox2);
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->textBox2);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Controls->Add(this->botonLeer);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Location = System::Drawing::Point(305, 15);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(249, 158);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Entrada";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(96, 16);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(134, 13);
			this->label34->TabIndex = 15;
			this->label34->Text = L"*Ingrese como funcion de t";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"nF", L"uF", L"mF", L"F" });
			this->comboBox2->Location = System::Drawing::Point(166, 96);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(44, 21);
			this->comboBox2->TabIndex = 10;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(120, 96);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(39, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"20";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(19, 99);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(101, 13);
			this->label13->TabIndex = 8;
			this->label13->Text = L"Valor del capacitor: ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(25, 38);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 13);
			this->label14->TabIndex = 7;
			this->label14->Text = L"v(t)=";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(118, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(39, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"2";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(96, 67);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(16, 13);
			this->label15->TabIndex = 5;
			this->label15->Text = L"t=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(57, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"2.06*sin(2000t-0.6656)+0.901*sin(4000t-2.3995) ";
			// 
			// botonLeer
			// 
			this->botonLeer->Location = System::Drawing::Point(69, 129);
			this->botonLeer->Name = L"botonLeer";
			this->botonLeer->Size = System::Drawing::Size(112, 23);
			this->botonLeer->TabIndex = 2;
			this->botonLeer->Text = L"Generar puntos";
			this->botonLeer->UseVisualStyleBackColor = true;
			this->botonLeer->Click += gcnew System::EventHandler(this, &MyForm::botonLeer_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 18);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(45, 13);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Funcion";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(324, 366);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(277, 104);
			this->label11->TabIndex = 5;
			this->label11->Text = resources->GetString(L"label11.Text");
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(6, 290);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(293, 180);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(6, 15);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(293, 273);
			this->label10->TabIndex = 3;
			this->label10->Text = resources->GetString(L"label10.Text");
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage3->Controls->Add(this->groupBox9);
			this->tabPage3->Controls->Add(this->groupBox8);
			this->tabPage3->Controls->Add(this->groupBox7);
			this->tabPage3->Controls->Add(this->pictureBox8);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1150, 492);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Ajuste de Puntos";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->pictureBox9);
			this->groupBox9->Controls->Add(this->listBox3);
			this->groupBox9->Location = System::Drawing::Point(694, 8);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(448, 478);
			this->groupBox9->TabIndex = 6;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Salida";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(11, 195);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(431, 275);
			this->pictureBox9->TabIndex = 1;
			this->pictureBox9->TabStop = false;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->HorizontalScrollbar = true;
			this->listBox3->Location = System::Drawing::Point(7, 23);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(431, 160);
			this->listBox3->TabIndex = 0;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->botonLeeArchivo3);
			this->groupBox8->Controls->Add(this->cajaArchivo);
			this->groupBox8->Controls->Add(this->label20);
			this->groupBox8->Controls->Add(this->label21);
			this->groupBox8->Controls->Add(this->dif3);
			this->groupBox8->Controls->Add(this->info3);
			this->groupBox8->Controls->Add(this->botonGraficar3);
			this->groupBox8->Controls->Add(this->botonLimpiar3);
			this->groupBox8->Location = System::Drawing::Point(439, 282);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(249, 204);
			this->groupBox8->TabIndex = 5;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Proceso";
			// 
			// botonLeeArchivo3
			// 
			this->botonLeeArchivo3->Location = System::Drawing::Point(22, 58);
			this->botonLeeArchivo3->Name = L"botonLeeArchivo3";
			this->botonLeeArchivo3->Size = System::Drawing::Size(205, 23);
			this->botonLeeArchivo3->TabIndex = 8;
			this->botonLeeArchivo3->Text = L"Lee de archivo";
			this->botonLeeArchivo3->UseVisualStyleBackColor = true;
			this->botonLeeArchivo3->Click += gcnew System::EventHandler(this, &MyForm::botonLeeArchivo3_Click);
			// 
			// cajaArchivo
			// 
			this->cajaArchivo->Location = System::Drawing::Point(89, 31);
			this->cajaArchivo->Name = L"cajaArchivo";
			this->cajaArchivo->Size = System::Drawing::Size(119, 20);
			this->cajaArchivo->TabIndex = 7;
			this->cajaArchivo->Text = L"perdidasDePotencia.csv";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(19, 29);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(61, 26);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Nombre del\r\narchivo";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(18, 15);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(98, 13);
			this->label21->TabIndex = 5;
			this->label21->Text = L"Leer desde archivo";
			// 
			// dif3
			// 
			this->dif3->Location = System::Drawing::Point(22, 88);
			this->dif3->Name = L"dif3";
			this->dif3->Size = System::Drawing::Size(205, 23);
			this->dif3->TabIndex = 4;
			this->dif3->Text = L"Metodo de Diferencias Finitas";
			this->dif3->UseVisualStyleBackColor = true;
			this->dif3->Click += gcnew System::EventHandler(this, &MyForm::dif3_Click);
			// 
			// info3
			// 
			this->info3->Location = System::Drawing::Point(89, 174);
			this->info3->Name = L"info3";
			this->info3->Size = System::Drawing::Size(75, 23);
			this->info3->TabIndex = 3;
			this->info3->Text = L"Info";
			this->info3->UseVisualStyleBackColor = true;
			this->info3->Click += gcnew System::EventHandler(this, &MyForm::info3_Click);
			// 
			// botonGraficar3
			// 
			this->botonGraficar3->Location = System::Drawing::Point(22, 117);
			this->botonGraficar3->Name = L"botonGraficar3";
			this->botonGraficar3->Size = System::Drawing::Size(98, 51);
			this->botonGraficar3->TabIndex = 2;
			this->botonGraficar3->Text = L"Graficar";
			this->botonGraficar3->UseVisualStyleBackColor = true;
			this->botonGraficar3->Click += gcnew System::EventHandler(this, &MyForm::botonGraficar3_Click);
			// 
			// botonLimpiar3
			// 
			this->botonLimpiar3->Location = System::Drawing::Point(126, 117);
			this->botonLimpiar3->Name = L"botonLimpiar3";
			this->botonLimpiar3->Size = System::Drawing::Size(101, 51);
			this->botonLimpiar3->TabIndex = 0;
			this->botonLimpiar3->Text = L"Limpiar";
			this->botonLimpiar3->UseVisualStyleBackColor = true;
			this->botonLimpiar3->Click += gcnew System::EventHandler(this, &MyForm::botonLimpiar3_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->cajaInterpolar3);
			this->groupBox7->Controls->Add(this->label18);
			this->groupBox7->Controls->Add(this->leerPuntos3);
			this->groupBox7->Controls->Add(this->dataGridView1);
			this->groupBox7->Controls->Add(this->label19);
			this->groupBox7->Controls->Add(this->cajaPuntos3);
			this->groupBox7->Location = System::Drawing::Point(439, 8);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(249, 273);
			this->groupBox7->TabIndex = 4;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Entrada";
			// 
			// cajaInterpolar3
			// 
			this->cajaInterpolar3->Location = System::Drawing::Point(117, 42);
			this->cajaInterpolar3->Name = L"cajaInterpolar3";
			this->cajaInterpolar3->Size = System::Drawing::Size(100, 20);
			this->cajaInterpolar3->TabIndex = 4;
			this->cajaInterpolar3->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaInterpolar3_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(20, 46);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(86, 13);
			this->label18->TabIndex = 3;
			this->label18->Text = L"Valor a interpolar";
			// 
			// leerPuntos3
			// 
			this->leerPuntos3->Location = System::Drawing::Point(82, 245);
			this->leerPuntos3->Name = L"leerPuntos3";
			this->leerPuntos3->Size = System::Drawing::Size(75, 23);
			this->leerPuntos3->TabIndex = 2;
			this->leerPuntos3->Text = L"Leer puntos";
			this->leerPuntos3->UseVisualStyleBackColor = true;
			this->leerPuntos3->Click += gcnew System::EventHandler(this, &MyForm::leerPuntos3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 67);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(237, 177);
			this->dataGridView1->TabIndex = 2;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(17, 19);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(94, 13);
			this->label19->TabIndex = 1;
			this->label19->Text = L"Numero de puntos";
			// 
			// cajaPuntos3
			// 
			this->cajaPuntos3->Location = System::Drawing::Point(117, 16);
			this->cajaPuntos3->Name = L"cajaPuntos3";
			this->cajaPuntos3->Size = System::Drawing::Size(100, 20);
			this->cajaPuntos3->TabIndex = 0;
			this->cajaPuntos3->Text = L"0";
			this->cajaPuntos3->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaPuntos3_TextChanged);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(61, 327);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(304, 161);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 2;
			this->pictureBox8->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(3, 8);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(430, 299);
			this->label17->TabIndex = 1;
			this->label17->Text = resources->GetString(L"label17.Text");
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage4->Controls->Add(this->label30);
			this->tabPage4->Controls->Add(this->pictureBox14);
			this->tabPage4->Controls->Add(this->pictureBox13);
			this->tabPage4->Controls->Add(this->pictureBox12);
			this->tabPage4->Controls->Add(this->pictureBox11);
			this->tabPage4->Controls->Add(this->label32);
			this->tabPage4->Controls->Add(this->groupBox10);
			this->tabPage4->Controls->Add(this->groupBox11);
			this->tabPage4->Controls->Add(this->groupBox12);
			this->tabPage4->Controls->Add(this->pictureBox10);
			this->tabPage4->Controls->Add(this->label22);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1150, 492);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Ecuacion Diferencial Ordinaria";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(662, 429);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(182, 52);
			this->label30->TabIndex = 11;
			this->label30->Text = L"Estos resultados nos indican que\r\nhay que hacer un reajuste en las\r\nconstantes Kp"
				L" y td, así como en la\r\nganancia, que debe aproximarse a 0.";
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(377, 297);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(243, 50);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 10;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(377, 246);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(243, 31);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 9;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(441, 155);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(118, 47);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 8;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(423, 41);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(136, 44);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 7;
			this->pictureBox11->TabStop = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(344, 10);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(314, 468);
			this->label32->TabIndex = 6;
			this->label32->Text = resources->GetString(L"label32.Text");
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->limpiar4);
			this->groupBox10->Controls->Add(this->listBox4);
			this->groupBox10->Location = System::Drawing::Point(840, 4);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(292, 481);
			this->groupBox10->TabIndex = 5;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Salida";
			// 
			// limpiar4
			// 
			this->limpiar4->Location = System::Drawing::Point(79, 441);
			this->limpiar4->Name = L"limpiar4";
			this->limpiar4->Size = System::Drawing::Size(146, 23);
			this->limpiar4->TabIndex = 6;
			this->limpiar4->Text = L"Limpiar";
			this->limpiar4->UseVisualStyleBackColor = true;
			this->limpiar4->Click += gcnew System::EventHandler(this, &MyForm::limpiar4_Click);
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->HorizontalScrollbar = true;
			this->listBox4->Location = System::Drawing::Point(7, 20);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(279, 407);
			this->listBox4->TabIndex = 0;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->info4);
			this->groupBox11->Controls->Add(this->botonResolver4);
			this->groupBox11->Location = System::Drawing::Point(662, 311);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(179, 111);
			this->groupBox11->TabIndex = 4;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Proceso";
			// 
			// info4
			// 
			this->info4->Location = System::Drawing::Point(20, 81);
			this->info4->Name = L"info4";
			this->info4->Size = System::Drawing::Size(146, 23);
			this->info4->TabIndex = 5;
			this->info4->Text = L"Info";
			this->info4->UseVisualStyleBackColor = true;
			this->info4->Click += gcnew System::EventHandler(this, &MyForm::info4_Click);
			// 
			// botonResolver4
			// 
			this->botonResolver4->Location = System::Drawing::Point(20, 20);
			this->botonResolver4->Name = L"botonResolver4";
			this->botonResolver4->Size = System::Drawing::Size(146, 55);
			this->botonResolver4->TabIndex = 5;
			this->botonResolver4->Text = L"Resolver";
			this->botonResolver4->UseVisualStyleBackColor = true;
			this->botonResolver4->Click += gcnew System::EventHandler(this, &MyForm::botonResolver4_Click);
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->label35);
			this->groupBox12->Controls->Add(this->cajaFuncion4);
			this->groupBox12->Controls->Add(this->label23);
			this->groupBox12->Controls->Add(this->cajaE0);
			this->groupBox12->Controls->Add(this->label24);
			this->groupBox12->Controls->Add(this->label25);
			this->groupBox12->Controls->Add(this->label26);
			this->groupBox12->Controls->Add(this->label27);
			this->groupBox12->Controls->Add(this->label28);
			this->groupBox12->Controls->Add(this->cajaN4);
			this->groupBox12->Controls->Add(this->label29);
			this->groupBox12->Controls->Add(this->cajaT4);
			this->groupBox12->Controls->Add(this->cajaT0);
			this->groupBox12->Controls->Add(this->cajaT);
			this->groupBox12->Controls->Add(this->label31);
			this->groupBox12->Location = System::Drawing::Point(655, 4);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(179, 301);
			this->groupBox12->TabIndex = 3;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Entrada";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(34, 151);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(134, 13);
			this->label35->TabIndex = 16;
			this->label35->Text = L"*Ingrese como funcion de t";
			// 
			// cajaFuncion4
			// 
			this->cajaFuncion4->Location = System::Drawing::Point(46, 170);
			this->cajaFuncion4->Name = L"cajaFuncion4";
			this->cajaFuncion4->Size = System::Drawing::Size(118, 20);
			this->cajaFuncion4->TabIndex = 15;
			this->cajaFuncion4->Text = L"(0.16-(2.4*((0.879853)^t)*sin(1.826*t))^2)/2.16";
			this->cajaFuncion4->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaFuncion4_TextChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(97, 203);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(19, 13);
			this->label23->TabIndex = 14;
			this->label23->Text = L"e0";
			// 
			// cajaE0
			// 
			this->cajaE0->Location = System::Drawing::Point(117, 200);
			this->cajaE0->Name = L"cajaE0";
			this->cajaE0->Size = System::Drawing::Size(36, 20);
			this->cajaE0->TabIndex = 2;
			this->cajaE0->Text = L"8";
			this->cajaE0->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaE0_TextChanged);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(26, 171);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(18, 20);
			this->label24->TabIndex = 12;
			this->label24->Text = L"=";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(4, 159);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(27, 20);
			this->label25->TabIndex = 11;
			this->label25->Text = L"de";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(5, 182);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(23, 20);
			this->label26->TabIndex = 10;
			this->label26->Text = L"dt";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(3, 162);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(27, 20);
			this->label27->TabIndex = 9;
			this->label27->Text = L"__";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(7, 20);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(161, 104);
			this->label28->TabIndex = 8;
			this->label28->Text = resources->GetString(L"label28.Text");
			// 
			// cajaN4
			// 
			this->cajaN4->Location = System::Drawing::Point(53, 253);
			this->cajaN4->Name = L"cajaN4";
			this->cajaN4->Size = System::Drawing::Size(100, 20);
			this->cajaN4->TabIndex = 4;
			this->cajaN4->Text = L"512";
			this->cajaN4->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaN4_TextChanged);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(34, 256);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(13, 13);
			this->label29->TabIndex = 6;
			this->label29->Text = L"n";
			// 
			// cajaT4
			// 
			this->cajaT4->Location = System::Drawing::Point(72, 226);
			this->cajaT4->Name = L"cajaT4";
			this->cajaT4->Size = System::Drawing::Size(36, 20);
			this->cajaT4->TabIndex = 3;
			this->cajaT4->Text = L"32";
			this->cajaT4->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaT4_TextChanged);
			// 
			// cajaT0
			// 
			this->cajaT0->Location = System::Drawing::Point(46, 200);
			this->cajaT0->Name = L"cajaT0";
			this->cajaT0->Size = System::Drawing::Size(36, 20);
			this->cajaT0->TabIndex = 1;
			this->cajaT0->Text = L"0";
			this->cajaT0->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaT0_TextChanged);
			// 
			// cajaT
			// 
			this->cajaT->AutoSize = true;
			this->cajaT->Location = System::Drawing::Point(57, 229);
			this->cajaT->Name = L"cajaT";
			this->cajaT->Size = System::Drawing::Size(10, 13);
			this->cajaT->TabIndex = 2;
			this->cajaT->Text = L"t";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(31, 203);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(16, 13);
			this->label31->TabIndex = 1;
			this->label31->Text = L"t0";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(7, 86);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(312, 162);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 1;
			this->pictureBox10->TabStop = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(4, 4);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(344, 481);
			this->label22->TabIndex = 0;
			this->label22->Text = resources->GetString(L"label22.Text");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1183, 543);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Examen 3er Parcial. Proyectos. Lozano Ramírez Angel Iván.";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->groupBox10->ResumeLayout(false);
			this->groupBox11->ResumeLayout(false);
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}

	private: System::Void botonIntegrar_Click(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
		Integral A;

		int cf = pictureBox1->Width;
		int ff = pictureBox1->Height;
		int ci = 1;
		Graphics^ g;
		g = pictureBox1->CreateGraphics();
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
		Pen^ plumaAzul = gcnew Pen(Color::DarkBlue, 1.0f);
		Pen^ plumaGris = gcnew Pen(Color::Gray, 1.0f);
		g->Clear(System::Drawing::Color::White);

		int n = cf - ci;
		GraficadorFx obj(n);
		double xi = Convert::ToDouble(cajaXa->Text);
		double xf = Convert::ToDouble(cajaXb->Text);

		obj.GraficaXY(xi, xf, cf, ff, cajaFuncion->Text);
		int j = 1;
		for (int k = 0; k < n - 1; k++) {
			g->DrawLine(plumaAzul, obj.C[k], obj.F[k], obj.C[j], obj.F[j]);
			j++;
		}

		int divisionVertical = (int)(cf / fabs(xf - xi));
		int divisionHorizontal = (int)(ff / fabs(obj.yf - obj.yi));

		if ((obj.Fun(xi)*obj.Fun(xf) < 0) || (obj.yi <= 0 && obj.yf >= 0)) {
			obj.y0 = 0;
			obj.f0 = obj.Fil(obj.y0);
			g->DrawLine(plumaNegra, 0, obj.f0, cf, obj.f0);
		}
		if (xi <= 0 && xf >= 0) {
			obj.x0 = 0;
			obj.c0 = obj.Col(obj.x0);
			g->DrawLine(plumaNegra, obj.c0, 0, obj.c0, ff);
		}

		double L;
		if(selInductor == 0)	L = Convert::ToDouble(cajaInductor->Text) * 1*pow(10,-3);
		else if (selInductor == 1)		L = Convert::ToDouble(cajaInductor->Text) * 1 * pow(10, -6);
		else if (selInductor == 2)		L = Convert::ToDouble(cajaInductor->Text) * 1 * pow(10, -9);

		listBox1->Items->Add("Valor del inductor: " + L + "H");
		listBox1->Items->Add(
			"i(" + cajaXb->Text + ")= "+
			(1 / L)*A.Simpson(Convert::ToDouble(cajaXa->Text), Convert::ToDouble(cajaXb->Text), Convert::ToDouble(cajaN->Text), cajaFuncion->Text)
			+ " [A]"
		);
	}
	public: void comprobarBotones(void) {
		if (cajaN->Text == "" || cajaXa->Text == "" || cajaXb->Text == "" || cajaFuncion->Text == "") {
			botonIntegrar->Enabled = !true;
		}
		else    botonIntegrar->Enabled = !false;
	}
	private: System::Void cajaXa_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
	}
	private: System::Void cajaXb_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
	}
	private: System::Void cajaN_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
	}
	private: System::Void botonLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
		Graphics^ g;
		g = pictureBox1->CreateGraphics();
		cajaXa->Clear();
		cajaXb->Clear();
		cajaN->Clear();
		cajaFuncion->Clear();
		listBox1->Items->Clear();
		g->Clear(System::Drawing::Color::White);
	}
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		comprobarBotones();
		Graphics^ g = e->Graphics;
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
	}
private: System::Void cajaFuncion_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	comprobarBotones();
}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
		if (comboBox1->SelectedIndex == 0)	selInductor = 0;
		else if (comboBox1->SelectedIndex == 1)	selInductor = 1;
		else if (comboBox1->SelectedIndex == 2)	selInductor = 2;
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	comprobarBotones();
	System::Diagnostics::Process::Start("parteIntegralFuncion.txt");
}

		 //DERIVADA
private: System::Void botonLeer_Click(System::Object^  sender, System::EventArgs^  e) {
	delete x;	delete y;
	n = 10;
	x = new double[n];
	y = new double[n];

	double i = Convert::ToDouble(textBox2->Text);
	ExpressionParser^ par = gcnew ExpressionParser();
	for (int j = 0; j < n; j++) {
		x[j] = i;
		y[j] = FunT(i, textBox1->Text);
		i += 0.1;
	}

	listBox1->Items->Add("t\tv(t)");
	for (int i = 0; i < n; i++) {
		listBox2->Items->Add(x[i] + "\t" + y[i]);
	}
}
	private:
		double FunT(double t, System::String^ fn) {
			ExpressionParser^ par = gcnew ExpressionParser();
			par->Values->Add("t", t);
			return par->Parse(fn);
		}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	double resultadoDerivada;
	double fx;
	double capacitor;
	Derivadas d1(n);
	tratamientoPuntos tp1(n);
	d1.modificaArregloX(x);
	d1.modificaArregloY(y);
	tp1.modificaArregloX(x);
	tp1.modificaArregloY(y);
	resultadoDerivada = d1.derivadaCLR();
	ecuacionRecta = d1.rectaTangenteCLR();
	polinomio = tp1.diferenciasFinitasCLR(x[0], fx);
	ExpressionParser^ par = gcnew ExpressionParser();
	par->Values->Add("x", Convert::ToDouble(textBox2->Text));
	listBox2->Items->Add("");
	listBox2->Items->Add("Polinomio: f(x)=" + polinomio);
	listBox2->Items->Add("Recta tangente: y(x)=  " + ecuacionRecta);
	listBox2->Items->Add("");
	if (selected == 0) {
		listBox2->Items->Add("Valor del capacitor:" + textBox3->Text + "nF");
		capacitor = Convert::ToDouble(textBox3->Text) * pow(10, -9);
	}
	else if (selected == 1) {
		listBox2->Items->Add("Valor del capacitor:" + textBox3->Text + "uF");
		capacitor = Convert::ToDouble(textBox3->Text) * pow(10, -6);
	}
	else if (selected == 2) {
		listBox2->Items->Add("Valor del capacitor:" + textBox3->Text + "mF");
		capacitor = Convert::ToDouble(textBox3->Text) * pow(10, -3);
	}
	else if (selected == 3) {
		listBox2->Items->Add("Valor del capacitor:" + textBox3->Text + "F");
		capacitor = Convert::ToDouble(textBox3->Text);
	}
	listBox2->Items->Add("Corriente en el capacitor:");
	listBox2->Items->Add("ic(" + d1.regresaAlgunValorDeX(0) + ")=   " + capacitor * par->Parse(ecuacionRecta) + "[A]");
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	selected = comboBox2->SelectedIndex;
}
private: System::Void botonGraficar_Click(System::Object^  sender, System::EventArgs^  e) {
	Graphics^ g;
	g = pictureBox7->CreateGraphics();
	Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
	Pen^ plumaAzul = gcnew Pen(Color::DarkBlue, 1.0f);
	Pen^ plumaGris = gcnew Pen(Color::Gray, 1.0f);
	Pen^ plumaRoja = gcnew Pen(Color::Red, 1.0f);
	g->Clear(System::Drawing::Color::White);

	int cf = pictureBox7->Width;
	int ff = pictureBox7->Height;
	int ci = 1;

	try {
		m = cf - ci;
		GraficadorFx obj(m);

		double xf = x[n - 1] + 0.04;
		double xi = x[0] - 0.04;

		obj.GraficaXY(xi, xf, cf, ff, polinomio, ecuacionRecta);
		int j = 1;
		for (int k = 0; k < m - 1; k++) {
			g->DrawLine(plumaAzul, obj.C[k], obj.F[k], obj.C[j], obj.F[j]);
			j++;
		}
		j = 1;
		for (int k = 0; k < m - 1; k++) {
			g->DrawLine(plumaRoja, obj.C2[k], obj.F2[k], obj.C2[j], obj.F2[j]);
			j++;
		}

		if ((obj.Fun(xi)*obj.Fun(xf) < 0) || (obj.yi <= 0 && obj.yf >= 0)) {
			obj.y0 = 0;
			obj.f0 = obj.Fil(obj.y0);
			g->DrawLine(plumaNegra, 0, obj.f0, cf, obj.f0);
		}
		if (xi <= 0 && xf >= 0) {
			obj.x0 = 0;
			obj.c0 = obj.Col(obj.x0);
			g->DrawLine(plumaNegra, obj.c0, 0, obj.c0, ff);
		}
	}
	catch (FormatException^ e) {}
}
private: System::Void pictureBox7_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	Graphics^ g = e->Graphics;
	Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g;
		g = pictureBox7->CreateGraphics();

		listBox2->Items->Clear();
		g->Clear(System::Drawing::Color::White);
	}
	private: System::Void botonInfo_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}

			 //Diferencias finitas
			 ///////////////////////
			 ///////////////////////
private: System::Void cajaPuntos3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	verificaBotones3();
	try {
		dataGridView1->Columns->Clear();
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Add("Matriz", "x");
		dataGridView1->Columns->Add("Matriz", "y");
		n = Convert::ToInt32(cajaPuntos3->Text);
		for (int k = 0; k < n; k++) dataGridView1->Rows->Add();
	}
	catch (FormatException ^e) {}
}
private: System::Void cajaInterpolar3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	verificaBotones3();
}
void verificaBotones3(void) {
	if (cajaInterpolar3->Text != "") {
		dif3->Enabled = true;
		botonGraficar3->Enabled = true;
	}
	else {
		dif3->Enabled = false;
		botonGraficar3->Enabled = false;
	}
}
private: System::Void leerPuntos3_Click(System::Object^  sender, System::EventArgs^  e) {
	verificaBotones3();
	delete x;	delete y;
	x = new double[n];
	y = new double[n];

	for (int i = 0; i < n; i++) {
		x[i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);
		y[i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
	}
	listBox3->Items->Add("x\ty");
	for (int i = 0; i < n; i++) {
		listBox3->Items->Add(x[i] + "\t" + y[i]);
	}
}
	private: System::Void botonLeeArchivo3_Click(System::Object^  sender, System::EventArgs^  e) {
		verificaBotones3();
		std::string nombreArchivo;
		msclr::interop::marshal_context context;
		nombreArchivo = context.marshal_as<std::string>(cajaArchivo->Text);
		listBox1->Items->Clear();

		double d;
		char c;
		std::string dato2;
		int xd;

		std::ifstream archivo_in;
		archivo_in.open(nombreArchivo);
		if (archivo_in.fail())	listBox1->Items->Add("Error al abrir el archivo");
		else {
			for (int i = 1; i <= 7; i++)	archivo_in >> c;
			archivo_in >> d;
			listBox1->Items->Add("Numero de puntos= " + d);
			xd = d;
			cajaPuntos3->Text = Convert::ToString(xd);
			//Termina lectura de datos principales

			delete x;	delete y;
			x = new double[n];
			y = new double[n];

			for (int i = 0; i < n; i++) {
				archivo_in >> d;
				x[i] = d;
				archivo_in >> c;
				archivo_in >> d;
				y[i] = d;
			}


			for (int i = 0; i < n; i++) dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(x[i]);
			for (int i = 0; i < n; i++) dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(y[i]);

		}
		archivo_in.close();
	}
	private: System::Void dif3_Click(System::Object^  sender, System::EventArgs^  e) {
		verificaBotones3();
		double resultadoInterpolacion;
		std::string pol;
		tratamientoPuntos tp(n);
		tp.modificaArregloX(x);
		tp.modificaArregloY(y);
		polinomio = tp.diferenciasFinitasCLR(Convert::ToDouble(cajaInterpolar3->Text), resultadoInterpolacion);
		listBox3->Items->Add("Interpolacion: f(" + cajaInterpolar3->Text + ")=   " + resultadoInterpolacion);
		listBox3->Items->Add("Polinomio: f(x)=  " + polinomio);
	}
	private: System::Void botonGraficar3_Click(System::Object^  sender, System::EventArgs^  e) {
		verificaBotones3();
		Graphics^ g;
		g = pictureBox9->CreateGraphics();
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
		Pen^ plumaAzul = gcnew Pen(Color::DarkBlue, 1.0f);
		Pen^ plumaGris = gcnew Pen(Color::Gray, 1.0f);
		g->Clear(System::Drawing::Color::White);

		int cf = pictureBox9->Width;
		int ff = pictureBox9->Height;
		int ci = 1;

		try {
			m = cf - ci;
			GraficadorFx obj(m);
			//Busca x mas grande entre los puntos

			double xf = x[n - 1] - 0.00001;
			double xi = x[0] + 0.00001;

			obj.GraficaXY(xi, xf, cf, ff, polinomio);
			int j = 1;
			for (int k = 0; k < m - 1; k++) {
				g->DrawLine(plumaAzul, obj.C[k], obj.F[k], obj.C[j], obj.F[j]);
				j++;
			}

			if ((obj.Fun(xi)*obj.Fun(xf) < 0) || (obj.yi <= 0 && obj.yf >= 0)) {
				obj.y0 = 0;
				obj.f0 = obj.Fil(obj.y0);
				g->DrawLine(plumaNegra, 0, obj.f0, cf, obj.f0);
			}
			if (xi <= 0 && xf >= 0) {
				obj.x0 = 0;
				obj.c0 = obj.Col(obj.x0);
				g->DrawLine(plumaNegra, obj.c0, 0, obj.c0, ff);
			}
		}
		catch (FormatException^ e) {}
	}
	private: System::Void botonLimpiar3_Click(System::Object^  sender, System::EventArgs^  e) {
		verificaBotones3();
		Graphics^ g;
		g = pictureBox9->CreateGraphics();

		dataGridView1->Columns->Clear();
		dataGridView1->Rows->Clear();
		listBox3->Items->Clear();
		g->Clear(System::Drawing::Color::White);
	}
	private: System::Void info3_Click(System::Object^  sender, System::EventArgs^  e) {
		verificaBotones3();
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}

	///////////////////EDO
	/////////////////////////
	private: System::Void limpiar4_Click(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones4();
		cajaT0->Clear();
		cajaT4->Clear();
		cajaE0->Clear();
		cajaN4->Clear();
		cajaFuncion4->Clear();
		listBox4->Items->Clear();
	}
	private: System::Void info4_Click(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones4();
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
	public: void comprobarBotones4(void) {
		if (cajaN4->Text != "" && cajaT0->Text != "" && cajaT4->Text != "" && cajaE0->Text != "" && cajaFuncion4->Text != "") {
			botonResolver4->Enabled = true;
		}
		else    botonResolver4->Enabled = false;
	}
	private: System::Void cajaFuncion4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones4();
	}
private: System::Void cajaT0_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	comprobarBotones4();
}
private: System::Void cajaE0_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	comprobarBotones4();
}
private: System::Void cajaT4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	comprobarBotones4();
}
private: System::Void cajaN4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	comprobarBotones4();
}
private: System::Void botonResolver4_Click(System::Object^  sender, System::EventArgs^  e) {
	comprobarBotones();
	EDO A;
	listBox4->Items->Add("F(e,t)= " + cajaFuncion4->Text);

	listBox4->Items->Add(
		"e(" + cajaT4->Text + ")=" +
		A.RK(Convert::ToDouble(cajaT0->Text), Convert::ToDouble(cajaE0->Text), Convert::ToDouble(cajaT4->Text), Convert::ToDouble(cajaN4->Text), cajaFuncion4->Text)
	);
}
};
}
