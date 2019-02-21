#include <math.h>
#include "Complejo.h"

using::info::lundin::math::ExpressionParser;

#pragma once

namespace calculadora {				//Cambiar CLRWindowsForms por nombre del proyecto

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
		}
	public: bool complejoAExiste;
			bool complejoBExiste;

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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::ListBox^  cajaSalida;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  botonDivide;

	private: System::Windows::Forms::Button^  botonMultiplica;

	private: System::Windows::Forms::Button^  botonResta;

	private: System::Windows::Forms::Button^  botonSuma;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  cajaB;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  cajaA;
	private: System::Windows::Forms::Button^  botonLimpiar;
	private: System::Windows::Forms::Button^  botonPotencia;
	private: System::Windows::Forms::Button^  botonRaiz;
	private: System::Windows::Forms::Button^  botonExp;
	private: System::Windows::Forms::Button^  botonLog;
	private: System::Windows::Forms::Button^  botonLn;
	private: System::Windows::Forms::Button^  botonSeno;
	private: System::Windows::Forms::Button^  botonTangente;
	private: System::Windows::Forms::Button^  botonCoseno;
	private: System::Windows::Forms::Button^  botonTangenteH;
	private: System::Windows::Forms::Button^  botonCosenoH;
	private: System::Windows::Forms::Button^  botonSenoH;
	private: System::Windows::Forms::Button^  botonInversa;
	private: System::Windows::Forms::Button^  botonFactorial;
	private: System::Windows::Forms::Button^  boton10;
	private: System::Windows::Forms::Button^  botonTabular;
	private: System::Windows::Forms::Button^  botonEvaluar;
	private: System::Windows::Forms::TextBox^  cajaPasos;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  cajaFuncion;
	private: System::Windows::Forms::Button^  botonAbrirGraficador;
	private: System::Windows::Forms::Button^  botonInformacion;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::ListBox^  cajaZSalida;


	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  cajaRealA;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  cajaImaginariaB;
	private: System::Windows::Forms::TextBox^  cajaRealB;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  cajaImaginariaA;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  botonZSuma;
	private: System::Windows::Forms::Button^  botonZResta;
	private: System::Windows::Forms::Button^  botonZDivide;
	private: System::Windows::Forms::Button^  botonZMultiplica;
	private: System::Windows::Forms::Button^  botonZLimpiar;
	private: System::Windows::Forms::Button^  botonZInfo;
	private: System::Windows::Forms::Button^  botonZSeno;
	private: System::Windows::Forms::Button^  botonZCoseno;
	private: System::Windows::Forms::Button^  botonZTangente;
	private: System::Windows::Forms::Button^  botonZCuadrado;




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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->cajaSalida = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->botonAbrirGraficador = (gcnew System::Windows::Forms::Button());
			this->botonTabular = (gcnew System::Windows::Forms::Button());
			this->botonLimpiar = (gcnew System::Windows::Forms::Button());
			this->botonEvaluar = (gcnew System::Windows::Forms::Button());
			this->boton10 = (gcnew System::Windows::Forms::Button());
			this->botonInversa = (gcnew System::Windows::Forms::Button());
			this->botonFactorial = (gcnew System::Windows::Forms::Button());
			this->botonTangenteH = (gcnew System::Windows::Forms::Button());
			this->botonCosenoH = (gcnew System::Windows::Forms::Button());
			this->botonSenoH = (gcnew System::Windows::Forms::Button());
			this->botonTangente = (gcnew System::Windows::Forms::Button());
			this->botonCoseno = (gcnew System::Windows::Forms::Button());
			this->botonSeno = (gcnew System::Windows::Forms::Button());
			this->botonLog = (gcnew System::Windows::Forms::Button());
			this->botonLn = (gcnew System::Windows::Forms::Button());
			this->botonExp = (gcnew System::Windows::Forms::Button());
			this->botonRaiz = (gcnew System::Windows::Forms::Button());
			this->botonPotencia = (gcnew System::Windows::Forms::Button());
			this->botonDivide = (gcnew System::Windows::Forms::Button());
			this->botonMultiplica = (gcnew System::Windows::Forms::Button());
			this->botonResta = (gcnew System::Windows::Forms::Button());
			this->botonSuma = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->botonInformacion = (gcnew System::Windows::Forms::Button());
			this->cajaPasos = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cajaFuncion = (gcnew System::Windows::Forms::TextBox());
			this->cajaB = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cajaA = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->cajaZSalida = (gcnew System::Windows::Forms::ListBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->botonZCuadrado = (gcnew System::Windows::Forms::Button());
			this->botonZTangente = (gcnew System::Windows::Forms::Button());
			this->botonZCoseno = (gcnew System::Windows::Forms::Button());
			this->botonZSeno = (gcnew System::Windows::Forms::Button());
			this->botonZLimpiar = (gcnew System::Windows::Forms::Button());
			this->botonZSuma = (gcnew System::Windows::Forms::Button());
			this->botonZResta = (gcnew System::Windows::Forms::Button());
			this->botonZDivide = (gcnew System::Windows::Forms::Button());
			this->botonZMultiplica = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->botonZInfo = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->cajaImaginariaB = (gcnew System::Windows::Forms::TextBox());
			this->cajaRealB = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cajaImaginariaA = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cajaRealA = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(13, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(857, 355);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(849, 329);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Reales";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->cajaSalida);
			this->groupBox3->Location = System::Drawing::Point(449, 7);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(394, 316);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Salida";
			// 
			// cajaSalida
			// 
			this->cajaSalida->FormattingEnabled = true;
			this->cajaSalida->Location = System::Drawing::Point(7, 20);
			this->cajaSalida->Name = L"cajaSalida";
			this->cajaSalida->Size = System::Drawing::Size(381, 290);
			this->cajaSalida->TabIndex = 26;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->botonAbrirGraficador);
			this->groupBox2->Controls->Add(this->botonTabular);
			this->groupBox2->Controls->Add(this->botonLimpiar);
			this->groupBox2->Controls->Add(this->botonEvaluar);
			this->groupBox2->Controls->Add(this->boton10);
			this->groupBox2->Controls->Add(this->botonInversa);
			this->groupBox2->Controls->Add(this->botonFactorial);
			this->groupBox2->Controls->Add(this->botonTangenteH);
			this->groupBox2->Controls->Add(this->botonCosenoH);
			this->groupBox2->Controls->Add(this->botonSenoH);
			this->groupBox2->Controls->Add(this->botonTangente);
			this->groupBox2->Controls->Add(this->botonCoseno);
			this->groupBox2->Controls->Add(this->botonSeno);
			this->groupBox2->Controls->Add(this->botonLog);
			this->groupBox2->Controls->Add(this->botonLn);
			this->groupBox2->Controls->Add(this->botonExp);
			this->groupBox2->Controls->Add(this->botonRaiz);
			this->groupBox2->Controls->Add(this->botonPotencia);
			this->groupBox2->Controls->Add(this->botonDivide);
			this->groupBox2->Controls->Add(this->botonMultiplica);
			this->groupBox2->Controls->Add(this->botonResta);
			this->groupBox2->Controls->Add(this->botonSuma);
			this->groupBox2->Location = System::Drawing::Point(211, 7);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(232, 316);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Proceso";
			// 
			// botonAbrirGraficador
			// 
			this->botonAbrirGraficador->Location = System::Drawing::Point(6, 251);
			this->botonAbrirGraficador->Name = L"botonAbrirGraficador";
			this->botonAbrirGraficador->Size = System::Drawing::Size(220, 23);
			this->botonAbrirGraficador->TabIndex = 24;
			this->botonAbrirGraficador->Text = L"Abrir Graficador";
			this->botonAbrirGraficador->UseVisualStyleBackColor = true;
			this->botonAbrirGraficador->Click += gcnew System::EventHandler(this, &MyForm::botonAbrirGraficador_Click);
			// 
			// botonTabular
			// 
			this->botonTabular->Location = System::Drawing::Point(146, 159);
			this->botonTabular->Name = L"botonTabular";
			this->botonTabular->Size = System::Drawing::Size(86, 86);
			this->botonTabular->TabIndex = 19;
			this->botonTabular->Text = L"Tabular funcion\r\n[f(A), f(B)]";
			this->botonTabular->UseVisualStyleBackColor = true;
			this->botonTabular->Click += gcnew System::EventHandler(this, &MyForm::botonTabular_Click);
			// 
			// botonLimpiar
			// 
			this->botonLimpiar->Location = System::Drawing::Point(6, 277);
			this->botonLimpiar->Name = L"botonLimpiar";
			this->botonLimpiar->Size = System::Drawing::Size(220, 33);
			this->botonLimpiar->TabIndex = 25;
			this->botonLimpiar->Text = L"Limpiar";
			this->botonLimpiar->UseVisualStyleBackColor = true;
			this->botonLimpiar->Click += gcnew System::EventHandler(this, &MyForm::botonLimpiar_Click);
			// 
			// botonEvaluar
			// 
			this->botonEvaluar->Location = System::Drawing::Point(146, 102);
			this->botonEvaluar->Name = L"botonEvaluar";
			this->botonEvaluar->Size = System::Drawing::Size(86, 51);
			this->botonEvaluar->TabIndex = 14;
			this->botonEvaluar->Text = L"Evaluar funcion f(A)";
			this->botonEvaluar->UseVisualStyleBackColor = true;
			this->botonEvaluar->Click += gcnew System::EventHandler(this, &MyForm::botonEvaluar_Click);
			// 
			// boton10
			// 
			this->boton10->Location = System::Drawing::Point(76, 130);
			this->boton10->Name = L"boton10";
			this->boton10->Size = System::Drawing::Size(64, 23);
			this->boton10->TabIndex = 16;
			this->boton10->Text = L"10^A";
			this->boton10->UseVisualStyleBackColor = true;
			this->boton10->Click += gcnew System::EventHandler(this, &MyForm::boton10_Click);
			// 
			// botonInversa
			// 
			this->botonInversa->Location = System::Drawing::Point(176, 59);
			this->botonInversa->Name = L"botonInversa";
			this->botonInversa->Size = System::Drawing::Size(50, 32);
			this->botonInversa->TabIndex = 11;
			this->botonInversa->Text = L"A^-1";
			this->botonInversa->UseVisualStyleBackColor = true;
			this->botonInversa->Click += gcnew System::EventHandler(this, &MyForm::botonInversa_Click);
			// 
			// botonFactorial
			// 
			this->botonFactorial->Location = System::Drawing::Point(122, 59);
			this->botonFactorial->Name = L"botonFactorial";
			this->botonFactorial->Size = System::Drawing::Size(50, 32);
			this->botonFactorial->TabIndex = 10;
			this->botonFactorial->Text = L"A!";
			this->botonFactorial->UseVisualStyleBackColor = true;
			this->botonFactorial->Click += gcnew System::EventHandler(this, &MyForm::botonFactorial_Click);
			// 
			// botonTangenteH
			// 
			this->botonTangenteH->Location = System::Drawing::Point(76, 222);
			this->botonTangenteH->Name = L"botonTangenteH";
			this->botonTangenteH->Size = System::Drawing::Size(64, 23);
			this->botonTangenteH->TabIndex = 23;
			this->botonTangenteH->Text = L"tanh(A)";
			this->botonTangenteH->UseVisualStyleBackColor = true;
			this->botonTangenteH->Click += gcnew System::EventHandler(this, &MyForm::botonTangenteH_Click);
			// 
			// botonCosenoH
			// 
			this->botonCosenoH->Location = System::Drawing::Point(76, 193);
			this->botonCosenoH->Name = L"botonCosenoH";
			this->botonCosenoH->Size = System::Drawing::Size(64, 23);
			this->botonCosenoH->TabIndex = 21;
			this->botonCosenoH->Text = L"cosh(A)";
			this->botonCosenoH->UseVisualStyleBackColor = true;
			this->botonCosenoH->Click += gcnew System::EventHandler(this, &MyForm::botonCosenoH_Click);
			// 
			// botonSenoH
			// 
			this->botonSenoH->Location = System::Drawing::Point(76, 163);
			this->botonSenoH->Name = L"botonSenoH";
			this->botonSenoH->Size = System::Drawing::Size(64, 23);
			this->botonSenoH->TabIndex = 18;
			this->botonSenoH->Text = L"sinh(A)";
			this->botonSenoH->UseVisualStyleBackColor = true;
			this->botonSenoH->Click += gcnew System::EventHandler(this, &MyForm::botonSenoH_Click);
			// 
			// botonTangente
			// 
			this->botonTangente->Location = System::Drawing::Point(6, 222);
			this->botonTangente->Name = L"botonTangente";
			this->botonTangente->Size = System::Drawing::Size(64, 23);
			this->botonTangente->TabIndex = 22;
			this->botonTangente->Text = L"tan(A)";
			this->botonTangente->UseVisualStyleBackColor = true;
			this->botonTangente->Click += gcnew System::EventHandler(this, &MyForm::botonTangente_Click);
			// 
			// botonCoseno
			// 
			this->botonCoseno->Location = System::Drawing::Point(6, 193);
			this->botonCoseno->Name = L"botonCoseno";
			this->botonCoseno->Size = System::Drawing::Size(64, 23);
			this->botonCoseno->TabIndex = 20;
			this->botonCoseno->Text = L"cos(A)";
			this->botonCoseno->UseVisualStyleBackColor = true;
			this->botonCoseno->Click += gcnew System::EventHandler(this, &MyForm::botonCoseno_Click);
			// 
			// botonSeno
			// 
			this->botonSeno->Location = System::Drawing::Point(6, 163);
			this->botonSeno->Name = L"botonSeno";
			this->botonSeno->Size = System::Drawing::Size(64, 23);
			this->botonSeno->TabIndex = 17;
			this->botonSeno->Text = L"sin(A)";
			this->botonSeno->UseVisualStyleBackColor = true;
			this->botonSeno->Click += gcnew System::EventHandler(this, &MyForm::botonSeno_Click);
			// 
			// botonLog
			// 
			this->botonLog->Location = System::Drawing::Point(6, 130);
			this->botonLog->Name = L"botonLog";
			this->botonLog->Size = System::Drawing::Size(64, 23);
			this->botonLog->TabIndex = 15;
			this->botonLog->Text = L"log10(A)";
			this->botonLog->UseVisualStyleBackColor = true;
			this->botonLog->Click += gcnew System::EventHandler(this, &MyForm::botonLog_Click);
			// 
			// botonLn
			// 
			this->botonLn->Location = System::Drawing::Point(76, 101);
			this->botonLn->Name = L"botonLn";
			this->botonLn->Size = System::Drawing::Size(64, 23);
			this->botonLn->TabIndex = 13;
			this->botonLn->Text = L"ln(A)";
			this->botonLn->UseVisualStyleBackColor = true;
			this->botonLn->Click += gcnew System::EventHandler(this, &MyForm::botonLn_Click);
			// 
			// botonExp
			// 
			this->botonExp->Location = System::Drawing::Point(6, 101);
			this->botonExp->Name = L"botonExp";
			this->botonExp->Size = System::Drawing::Size(64, 23);
			this->botonExp->TabIndex = 12;
			this->botonExp->Text = L"e^A";
			this->botonExp->UseVisualStyleBackColor = true;
			this->botonExp->Click += gcnew System::EventHandler(this, &MyForm::botonExp_Click);
			// 
			// botonRaiz
			// 
			this->botonRaiz->Location = System::Drawing::Point(176, 19);
			this->botonRaiz->Name = L"botonRaiz";
			this->botonRaiz->Size = System::Drawing::Size(50, 32);
			this->botonRaiz->TabIndex = 8;
			this->botonRaiz->Text = L"B√A";
			this->botonRaiz->UseVisualStyleBackColor = true;
			this->botonRaiz->Click += gcnew System::EventHandler(this, &MyForm::botonRaiz_Click);
			// 
			// botonPotencia
			// 
			this->botonPotencia->Location = System::Drawing::Point(122, 19);
			this->botonPotencia->Name = L"botonPotencia";
			this->botonPotencia->Size = System::Drawing::Size(50, 32);
			this->botonPotencia->TabIndex = 7;
			this->botonPotencia->Text = L"A^B";
			this->botonPotencia->UseVisualStyleBackColor = true;
			this->botonPotencia->Click += gcnew System::EventHandler(this, &MyForm::botonPotencia_Click);
			// 
			// botonDivide
			// 
			this->botonDivide->Location = System::Drawing::Point(44, 19);
			this->botonDivide->Name = L"botonDivide";
			this->botonDivide->Size = System::Drawing::Size(32, 32);
			this->botonDivide->TabIndex = 5;
			this->botonDivide->Text = L"/";
			this->botonDivide->UseVisualStyleBackColor = true;
			this->botonDivide->Click += gcnew System::EventHandler(this, &MyForm::botonDivide_Click);
			// 
			// botonMultiplica
			// 
			this->botonMultiplica->Location = System::Drawing::Point(6, 19);
			this->botonMultiplica->Name = L"botonMultiplica";
			this->botonMultiplica->Size = System::Drawing::Size(32, 32);
			this->botonMultiplica->TabIndex = 4;
			this->botonMultiplica->Text = L"x";
			this->botonMultiplica->UseVisualStyleBackColor = true;
			this->botonMultiplica->Click += gcnew System::EventHandler(this, &MyForm::botonMultiplica_Click);
			// 
			// botonResta
			// 
			this->botonResta->Location = System::Drawing::Point(6, 57);
			this->botonResta->Name = L"botonResta";
			this->botonResta->Size = System::Drawing::Size(70, 34);
			this->botonResta->TabIndex = 9;
			this->botonResta->Text = L"-";
			this->botonResta->UseVisualStyleBackColor = true;
			this->botonResta->Click += gcnew System::EventHandler(this, &MyForm::botonResta_Click);
			// 
			// botonSuma
			// 
			this->botonSuma->Location = System::Drawing::Point(82, 19);
			this->botonSuma->Name = L"botonSuma";
			this->botonSuma->Size = System::Drawing::Size(28, 72);
			this->botonSuma->TabIndex = 6;
			this->botonSuma->Text = L"+";
			this->botonSuma->UseVisualStyleBackColor = true;
			this->botonSuma->Click += gcnew System::EventHandler(this, &MyForm::botonSuma_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->botonInformacion);
			this->groupBox1->Controls->Add(this->cajaPasos);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->cajaFuncion);
			this->groupBox1->Controls->Add(this->cajaB);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->cajaA);
			this->groupBox1->Location = System::Drawing::Point(4, 7);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 316);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entrada";
			// 
			// botonInformacion
			// 
			this->botonInformacion->Location = System::Drawing::Point(9, 286);
			this->botonInformacion->Name = L"botonInformacion";
			this->botonInformacion->Size = System::Drawing::Size(175, 23);
			this->botonInformacion->TabIndex = 27;
			this->botonInformacion->Text = L"Informacion";
			this->botonInformacion->UseVisualStyleBackColor = true;
			this->botonInformacion->Click += gcnew System::EventHandler(this, &MyForm::botonInformacion_Click);
			// 
			// cajaPasos
			// 
			this->cajaPasos->Location = System::Drawing::Point(69, 134);
			this->cajaPasos->Name = L"cajaPasos";
			this->cajaPasos->Size = System::Drawing::Size(115, 20);
			this->cajaPasos->TabIndex = 3;
			this->cajaPasos->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaPasos_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(27, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Pasos";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"y=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(66, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Funcion f(x):";
			// 
			// cajaFuncion
			// 
			this->cajaFuncion->Location = System::Drawing::Point(26, 107);
			this->cajaFuncion->Name = L"cajaFuncion";
			this->cajaFuncion->Size = System::Drawing::Size(158, 20);
			this->cajaFuncion->TabIndex = 2;
			this->cajaFuncion->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaFuncion_TextChanged);
			// 
			// cajaB
			// 
			this->cajaB->Location = System::Drawing::Point(26, 47);
			this->cajaB->Name = L"cajaB";
			this->cajaB->Size = System::Drawing::Size(158, 20);
			this->cajaB->TabIndex = 1;
			this->cajaB->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaB_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"B";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"A";
			// 
			// cajaA
			// 
			this->cajaA->Location = System::Drawing::Point(26, 20);
			this->cajaA->Name = L"cajaA";
			this->cajaA->Size = System::Drawing::Size(158, 20);
			this->cajaA->TabIndex = 0;
			this->cajaA->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaA_TextChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage2->Controls->Add(this->groupBox6);
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(849, 329);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Complejos";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->cajaZSalida);
			this->groupBox6->Location = System::Drawing::Point(449, 7);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(394, 316);
			this->groupBox6->TabIndex = 2;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Salida";
			// 
			// cajaZSalida
			// 
			this->cajaZSalida->FormattingEnabled = true;
			this->cajaZSalida->Location = System::Drawing::Point(7, 20);
			this->cajaZSalida->Name = L"cajaZSalida";
			this->cajaZSalida->Size = System::Drawing::Size(381, 290);
			this->cajaZSalida->TabIndex = 0;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->botonZCuadrado);
			this->groupBox5->Controls->Add(this->botonZTangente);
			this->groupBox5->Controls->Add(this->botonZCoseno);
			this->groupBox5->Controls->Add(this->botonZSeno);
			this->groupBox5->Controls->Add(this->botonZLimpiar);
			this->groupBox5->Controls->Add(this->botonZSuma);
			this->groupBox5->Controls->Add(this->botonZResta);
			this->groupBox5->Controls->Add(this->botonZDivide);
			this->groupBox5->Controls->Add(this->botonZMultiplica);
			this->groupBox5->Location = System::Drawing::Point(210, 7);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(232, 316);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Proceso";
			// 
			// botonZCuadrado
			// 
			this->botonZCuadrado->Location = System::Drawing::Point(120, 20);
			this->botonZCuadrado->Name = L"botonZCuadrado";
			this->botonZCuadrado->Size = System::Drawing::Size(106, 23);
			this->botonZCuadrado->TabIndex = 8;
			this->botonZCuadrado->Text = L"A^2";
			this->botonZCuadrado->UseVisualStyleBackColor = true;
			this->botonZCuadrado->Click += gcnew System::EventHandler(this, &MyForm::botonZCuadrado_Click);
			// 
			// botonZTangente
			// 
			this->botonZTangente->Location = System::Drawing::Point(7, 168);
			this->botonZTangente->Name = L"botonZTangente";
			this->botonZTangente->Size = System::Drawing::Size(75, 23);
			this->botonZTangente->TabIndex = 7;
			this->botonZTangente->Text = L"tan(A)";
			this->botonZTangente->UseVisualStyleBackColor = true;
			this->botonZTangente->Click += gcnew System::EventHandler(this, &MyForm::botonZTangente_Click);
			// 
			// botonZCoseno
			// 
			this->botonZCoseno->Location = System::Drawing::Point(8, 138);
			this->botonZCoseno->Name = L"botonZCoseno";
			this->botonZCoseno->Size = System::Drawing::Size(75, 23);
			this->botonZCoseno->TabIndex = 6;
			this->botonZCoseno->Text = L"cos(A)";
			this->botonZCoseno->UseVisualStyleBackColor = true;
			this->botonZCoseno->Click += gcnew System::EventHandler(this, &MyForm::botonZCoseno_Click);
			// 
			// botonZSeno
			// 
			this->botonZSeno->Location = System::Drawing::Point(7, 108);
			this->botonZSeno->Name = L"botonZSeno";
			this->botonZSeno->Size = System::Drawing::Size(75, 23);
			this->botonZSeno->TabIndex = 5;
			this->botonZSeno->Text = L"sin(A)";
			this->botonZSeno->UseVisualStyleBackColor = true;
			this->botonZSeno->Click += gcnew System::EventHandler(this, &MyForm::botonZSeno_Click);
			// 
			// botonZLimpiar
			// 
			this->botonZLimpiar->Location = System::Drawing::Point(7, 274);
			this->botonZLimpiar->Name = L"botonZLimpiar";
			this->botonZLimpiar->Size = System::Drawing::Size(219, 35);
			this->botonZLimpiar->TabIndex = 4;
			this->botonZLimpiar->Text = L"Limpiar";
			this->botonZLimpiar->UseVisualStyleBackColor = true;
			this->botonZLimpiar->Click += gcnew System::EventHandler(this, &MyForm::botonZLimpiar_Click);
			// 
			// botonZSuma
			// 
			this->botonZSuma->Location = System::Drawing::Point(85, 20);
			this->botonZSuma->Name = L"botonZSuma";
			this->botonZSuma->Size = System::Drawing::Size(28, 72);
			this->botonZSuma->TabIndex = 3;
			this->botonZSuma->Text = L"+";
			this->botonZSuma->UseVisualStyleBackColor = true;
			this->botonZSuma->Click += gcnew System::EventHandler(this, &MyForm::botonZSuma_Click);
			// 
			// botonZResta
			// 
			this->botonZResta->Location = System::Drawing::Point(8, 58);
			this->botonZResta->Name = L"botonZResta";
			this->botonZResta->Size = System::Drawing::Size(70, 34);
			this->botonZResta->TabIndex = 2;
			this->botonZResta->Text = L"-";
			this->botonZResta->UseVisualStyleBackColor = true;
			this->botonZResta->Click += gcnew System::EventHandler(this, &MyForm::botonZResta_Click);
			// 
			// botonZDivide
			// 
			this->botonZDivide->Location = System::Drawing::Point(46, 20);
			this->botonZDivide->Name = L"botonZDivide";
			this->botonZDivide->Size = System::Drawing::Size(32, 32);
			this->botonZDivide->TabIndex = 1;
			this->botonZDivide->Text = L"/";
			this->botonZDivide->UseVisualStyleBackColor = true;
			this->botonZDivide->Click += gcnew System::EventHandler(this, &MyForm::botonZDivide_Click);
			// 
			// botonZMultiplica
			// 
			this->botonZMultiplica->Location = System::Drawing::Point(7, 20);
			this->botonZMultiplica->Name = L"botonZMultiplica";
			this->botonZMultiplica->Size = System::Drawing::Size(32, 32);
			this->botonZMultiplica->TabIndex = 0;
			this->botonZMultiplica->Text = L"x";
			this->botonZMultiplica->UseVisualStyleBackColor = true;
			this->botonZMultiplica->Click += gcnew System::EventHandler(this, &MyForm::botonZMultiplica_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->botonZInfo);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->cajaImaginariaB);
			this->groupBox4->Controls->Add(this->cajaRealB);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->cajaImaginariaA);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->cajaRealA);
			this->groupBox4->Location = System::Drawing::Point(4, 7);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 316);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Entrada";
			// 
			// botonZInfo
			// 
			this->botonZInfo->Location = System::Drawing::Point(12, 286);
			this->botonZInfo->Name = L"botonZInfo";
			this->botonZInfo->Size = System::Drawing::Size(175, 23);
			this->botonZInfo->TabIndex = 28;
			this->botonZInfo->Text = L"Informacion";
			this->botonZInfo->UseVisualStyleBackColor = true;
			this->botonZInfo->Click += gcnew System::EventHandler(this, &MyForm::botonZInfo_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(179, 81);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(9, 13);
			this->label13->TabIndex = 11;
			this->label13->Text = L"i";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(179, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(9, 13);
			this->label12->TabIndex = 10;
			this->label12->Text = L"i";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(104, 60);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Parte Imaginaria";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(29, 60);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Parte Real";
			// 
			// cajaImaginariaB
			// 
			this->cajaImaginariaB->Location = System::Drawing::Point(107, 74);
			this->cajaImaginariaB->Name = L"cajaImaginariaB";
			this->cajaImaginariaB->Size = System::Drawing::Size(72, 20);
			this->cajaImaginariaB->TabIndex = 7;
			this->cajaImaginariaB->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaImaginariaB_TextChanged);
			// 
			// cajaRealB
			// 
			this->cajaRealB->Location = System::Drawing::Point(29, 74);
			this->cajaRealB->Name = L"cajaRealB";
			this->cajaRealB->Size = System::Drawing::Size(72, 20);
			this->cajaRealB->TabIndex = 6;
			this->cajaRealB->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaRealB_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 74);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(17, 13);
			this->label9->TabIndex = 5;
			this->label9->Text = L"B:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(104, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Parte Imaginaria";
			// 
			// cajaImaginariaA
			// 
			this->cajaImaginariaA->Location = System::Drawing::Point(107, 33);
			this->cajaImaginariaA->Name = L"cajaImaginariaA";
			this->cajaImaginariaA->Size = System::Drawing::Size(72, 20);
			this->cajaImaginariaA->TabIndex = 3;
			this->cajaImaginariaA->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaImaginariaA_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(29, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Parte Real";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"A:";
			// 
			// cajaRealA
			// 
			this->cajaRealA->Location = System::Drawing::Point(29, 33);
			this->cajaRealA->Name = L"cajaRealA";
			this->cajaRealA->Size = System::Drawing::Size(72, 20);
			this->cajaRealA->TabIndex = 0;
			this->cajaRealA->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaRealA_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 371);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Calculadora";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void botonLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {
		cajaSalida->Items->Clear();
		cajaA->Text = "";
		cajaB->Text = "";
		cajaFuncion->Text = "";
		cajaPasos->Text = "";
	}
	private: System::Void cajaA_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cajaA->Text == "" && cajaB->Text == "") {
			botonSuma->Enabled = false;
			botonResta->Enabled = false;
			botonMultiplica->Enabled = false;
			botonDivide->Enabled = false;
			botonPotencia->Enabled = false;
			botonRaiz->Enabled = false;
			botonFactorial->Enabled = false;
			botonInversa->Enabled = false;
			botonExp->Enabled = false;
			botonLn->Enabled = false;
			botonLog->Enabled = false;
			boton10->Enabled = false;
			botonSeno->Enabled = false;
			botonCoseno->Enabled = false;
			botonTangente->Enabled = false;
			botonSenoH->Enabled = false;
			botonCosenoH->Enabled = false;
			botonTangenteH->Enabled = false;
			botonEvaluar->Enabled = false;
			botonTabular->Enabled = false;
		}
		else if (cajaA->Text != "" && cajaB->Text == "") {
			botonSuma->Enabled = false;
			botonResta->Enabled = false;
			botonMultiplica->Enabled = false;
			botonDivide->Enabled = false;
			botonPotencia->Enabled = false;
			botonRaiz->Enabled = false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = false;
			botonTabular->Enabled = false;
		}
		else if (cajaA->Text != "" && cajaB->Text != "") {
			botonSuma->Enabled = !false;
			botonResta->Enabled = !false;
			botonMultiplica->Enabled = !false;
			botonDivide->Enabled = !false;
			botonPotencia->Enabled = !false;
			botonRaiz->Enabled = !false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = false;
			botonTabular->Enabled = false;
		}
		if (cajaA->Text != "" && cajaFuncion->Text != "") {
			botonSuma->Enabled = false;
			botonResta->Enabled = false;
			botonMultiplica->Enabled = false;
			botonDivide->Enabled = false;
			botonPotencia->Enabled = false;
			botonRaiz->Enabled = false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = false;
		}
		if (cajaA->Text != "" && cajaB->Text != "" && cajaFuncion->Text != "" && cajaPasos->Text != "") {
			botonSuma->Enabled = !false;
			botonResta->Enabled = !false;
			botonMultiplica->Enabled = !false;
			botonDivide->Enabled = !false;
			botonPotencia->Enabled = !false;
			botonRaiz->Enabled = !false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = !false;
		}
		else {
			botonSuma->Enabled = !false;
			botonResta->Enabled = !false;
			botonMultiplica->Enabled = !false;
			botonDivide->Enabled = !false;
			botonPotencia->Enabled = !false;
			botonRaiz->Enabled = !false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = false;
		}
	}
	private: System::Void cajaB_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cajaA->Text == "" && cajaB->Text == "") {
			botonSuma->Enabled = false;
			botonResta->Enabled = false;
			botonMultiplica->Enabled = false;
			botonDivide->Enabled = false;
			botonPotencia->Enabled = false;
			botonRaiz->Enabled = false;
			botonFactorial->Enabled = false;
			botonInversa->Enabled = false;
			botonExp->Enabled = false;
			botonLn->Enabled = false;
			botonLog->Enabled = false;
			boton10->Enabled = false;
			botonSeno->Enabled = false;
			botonCoseno->Enabled = false;
			botonTangente->Enabled = false;
			botonSenoH->Enabled = false;
			botonCosenoH->Enabled = false;
			botonTangenteH->Enabled = false;
			botonEvaluar->Enabled = false;
			botonTabular->Enabled = false;
		}
		else if (cajaA->Text != "" && cajaB->Text == "") {
			botonSuma->Enabled = false;
			botonResta->Enabled = false;
			botonMultiplica->Enabled = false;
			botonDivide->Enabled = false;
			botonPotencia->Enabled = false;
			botonRaiz->Enabled = false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = false;
		}
		else if (cajaA->Text != "" && cajaB->Text != "") {
			botonSuma->Enabled = !false;
			botonResta->Enabled = !false;
			botonMultiplica->Enabled = !false;
			botonDivide->Enabled = !false;
			botonPotencia->Enabled = !false;
			botonRaiz->Enabled = !false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = !false;
		}
		if (cajaA->Text != "" && cajaFuncion->Text != "") {
			botonSuma->Enabled = false;
			botonResta->Enabled = false;
			botonMultiplica->Enabled = false;
			botonDivide->Enabled = false;
			botonPotencia->Enabled = false;
			botonRaiz->Enabled = false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = false;
		}
		if (cajaA->Text != "" && cajaB->Text != "" && cajaFuncion->Text != "" && cajaPasos->Text != "") {
			botonSuma->Enabled = !false;
			botonResta->Enabled = !false;
			botonMultiplica->Enabled = !false;
			botonDivide->Enabled = !false;
			botonPotencia->Enabled = !false;
			botonRaiz->Enabled = !false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = !false;
		}
		else {
			botonSuma->Enabled = !false;
			botonResta->Enabled = !false;
			botonMultiplica->Enabled = !false;
			botonDivide->Enabled = !false;
			botonPotencia->Enabled = !false;
			botonRaiz->Enabled = !false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = false;
		}
	}
	private: System::Void cajaFuncion_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cajaA->Text == "" && cajaB->Text == "") {
			botonSuma->Enabled = false;
			botonResta->Enabled = false;
			botonMultiplica->Enabled = false;
			botonDivide->Enabled = false;
			botonPotencia->Enabled = false;
			botonRaiz->Enabled = false;
			botonFactorial->Enabled = false;
			botonInversa->Enabled = false;
			botonExp->Enabled = false;
			botonLn->Enabled = false;
			botonLog->Enabled = false;
			boton10->Enabled = false;
			botonSeno->Enabled = false;
			botonCoseno->Enabled = false;
			botonTangente->Enabled = false;
			botonSenoH->Enabled = false;
			botonCosenoH->Enabled = false;
			botonTangenteH->Enabled = false;
			botonEvaluar->Enabled = false;
			botonTabular->Enabled = false;
		}
		else if (cajaA->Text != "" && cajaB->Text == "") {
			botonSuma->Enabled = false;
			botonResta->Enabled = false;
			botonMultiplica->Enabled = false;
			botonDivide->Enabled = false;
			botonPotencia->Enabled = false;
			botonRaiz->Enabled = false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = false;
		}
		else if (cajaA->Text != "" && cajaB->Text != "") {
			botonSuma->Enabled = !false;
			botonResta->Enabled = !false;
			botonMultiplica->Enabled = !false;
			botonDivide->Enabled = !false;
			botonPotencia->Enabled = !false;
			botonRaiz->Enabled = !false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = !false;
		}
		if (cajaA->Text != "" && cajaFuncion->Text != "") {
			botonSuma->Enabled = false;
			botonResta->Enabled = false;
			botonMultiplica->Enabled = false;
			botonDivide->Enabled = false;
			botonPotencia->Enabled = false;
			botonRaiz->Enabled = false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = false;
		}
		if (cajaA->Text != "" && cajaB->Text != "" && cajaFuncion->Text != "" && cajaPasos->Text != "") {
			botonSuma->Enabled = !false;
			botonResta->Enabled = !false;
			botonMultiplica->Enabled = !false;
			botonDivide->Enabled = !false;
			botonPotencia->Enabled = !false;
			botonRaiz->Enabled = !false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = !false;
		}
		else {
			botonSuma->Enabled = !false;
			botonResta->Enabled = !false;
			botonMultiplica->Enabled = !false;
			botonDivide->Enabled = !false;
			botonPotencia->Enabled = !false;
			botonRaiz->Enabled = !false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = false;
		}
	}
	private: System::Void cajaPasos_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cajaA->Text == "" && cajaB->Text == "") {
			botonSuma->Enabled = false;
			botonResta->Enabled = false;
			botonMultiplica->Enabled = false;
			botonDivide->Enabled = false;
			botonPotencia->Enabled = false;
			botonRaiz->Enabled = false;
			botonFactorial->Enabled = false;
			botonInversa->Enabled = false;
			botonExp->Enabled = false;
			botonLn->Enabled = false;
			botonLog->Enabled = false;
			boton10->Enabled = false;
			botonSeno->Enabled = false;
			botonCoseno->Enabled = false;
			botonTangente->Enabled = false;
			botonSenoH->Enabled = false;
			botonCosenoH->Enabled = false;
			botonTangenteH->Enabled = false;
			botonEvaluar->Enabled = false;
			botonTabular->Enabled = false;
		}
		else if (cajaA->Text != "" && cajaB->Text == "") {
			botonSuma->Enabled = false;
			botonResta->Enabled = false;
			botonMultiplica->Enabled = false;
			botonDivide->Enabled = false;
			botonPotencia->Enabled = false;
			botonRaiz->Enabled = false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = false;
		}
		else if (cajaA->Text != "" && cajaB->Text != "") {
			botonSuma->Enabled = !false;
			botonResta->Enabled = !false;
			botonMultiplica->Enabled = !false;
			botonDivide->Enabled = !false;
			botonPotencia->Enabled = !false;
			botonRaiz->Enabled = !false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = !false;
		}
		if (cajaA->Text != "" && cajaFuncion->Text != "") {
			botonSuma->Enabled = false;
			botonResta->Enabled = false;
			botonMultiplica->Enabled = false;
			botonDivide->Enabled = false;
			botonPotencia->Enabled = false;
			botonRaiz->Enabled = false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = false;
		}
		if (cajaA->Text != "" && cajaB->Text != "" && cajaFuncion->Text != "" && cajaPasos->Text != "") {
			botonSuma->Enabled = !false;
			botonResta->Enabled = !false;
			botonMultiplica->Enabled = !false;
			botonDivide->Enabled = !false;
			botonPotencia->Enabled = !false;
			botonRaiz->Enabled = !false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = !false;
		}
		else {
			botonSuma->Enabled = !false;
			botonResta->Enabled = !false;
			botonMultiplica->Enabled = !false;
			botonDivide->Enabled = !false;
			botonPotencia->Enabled = !false;
			botonRaiz->Enabled = !false;
			botonFactorial->Enabled = !false;
			botonInversa->Enabled = !false;
			botonExp->Enabled = !false;
			botonLn->Enabled = !false;
			botonLog->Enabled = !false;
			boton10->Enabled = !false;
			botonSeno->Enabled = !false;
			botonCoseno->Enabled = !false;
			botonTangente->Enabled = !false;
			botonSenoH->Enabled = !false;
			botonCosenoH->Enabled = !false;
			botonTangenteH->Enabled = !false;
			botonEvaluar->Enabled = !false;
			botonTabular->Enabled = false;
		}
	}
	private: System::Void botonSuma_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add(cajaA->Text + " + " + cajaB->Text + " = " + (Convert::ToDouble(this->cajaA->Text) + Convert::ToDouble(this->cajaB->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonResta_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add(cajaA->Text + " - " + cajaB->Text + " = " + (Convert::ToDouble(this->cajaA->Text) - Convert::ToDouble(this->cajaB->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonMultiplica_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add(cajaA->Text + " * " + cajaB->Text + " = " + (Convert::ToDouble(this->cajaA->Text) * Convert::ToDouble(this->cajaB->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonDivide_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add(cajaA->Text + " / " + cajaB->Text + " = " + (Convert::ToDouble(this->cajaA->Text) / Convert::ToDouble(this->cajaB->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonPotencia_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add(cajaA->Text + " ^ " + cajaB->Text + " = " + pow(Convert::ToDouble(cajaA->Text), Convert::ToDouble(cajaB->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonRaiz_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add("Raiz " + cajaB->Text + " de " + cajaA->Text + " = " + pow(Convert::ToDouble(cajaA->Text), 1.0 / Convert::ToDouble(cajaB->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonExp_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add("e^" + cajaA->Text + " = " + exp(Convert::ToDouble(cajaA->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonLn_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add("ln(" + cajaA->Text + ") = " + log(Convert::ToDouble(cajaA->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonLog_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add("log10(" + cajaA->Text + ") = " + log10(Convert::ToDouble(cajaA->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonSeno_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add("sin(" + cajaA->Text + ") = " + sin(Convert::ToDouble(cajaA->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonCoseno_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add("cos(" + cajaA->Text + ") = " + cos(Convert::ToDouble(cajaA->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonTangente_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add("tan(" + cajaA->Text + ") = " + tan(Convert::ToDouble(cajaA->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonSenoH_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add("sinh(" + cajaA->Text + ") = " + sinh(Convert::ToDouble(cajaA->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonCosenoH_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add("cosh(" + cajaA->Text + ") = " + cosh(Convert::ToDouble(cajaA->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonTangenteH_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add("tanh(" + cajaA->Text + ") = " + tanh(Convert::ToDouble(cajaA->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonFactorial_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			int n = Convert::ToInt32(cajaA->Text);
			long double f = 1;
			for (int i = 1; i <= n; i++) f = f * i;
			cajaSalida->Items->Add(cajaA->Text + "! = " + f);
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonInversa_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add(cajaA->Text + "^-1 = " + 1 / Convert::ToDouble(cajaA->Text));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void boton10_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			cajaSalida->Items->Add("10^ " + cajaA->Text + " = " + pow(10.0, Convert::ToDouble(cajaA->Text)));
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonEvaluar_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			ExpressionParser^ par = gcnew ExpressionParser();
			par->Values->Add("x", Convert::ToDouble(cajaA->Text));
			cajaSalida->Items->Add("y = f(x) = " + cajaFuncion->Text + " (en x = " + cajaA->Text + ") = " + par->Parse(cajaFuncion->Text));
		}
		catch (FormatException^e) {
			cajaSalida->Items->Add("Error");
		}
	}
	private: System::Void botonTabular_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			ExpressionParser^ par = gcnew ExpressionParser();
			double *X, *Y;
			double i = Convert::ToDouble(cajaA->Text);
			double f = Convert::ToDouble(cajaB->Text);
			double p = Convert::ToDouble(cajaPasos->Text);


			System::String^ fn = cajaFuncion->Text;


			int m = fabs(f - i) / p;
			X = new double[m];
			Y = new double[m];

			int j = 0;
			double x;
			for (x = i; x <= f; x = x + p) {
				X[j] = x;
				Y[j] = FunX(x, fn);
				j++;
			}
			cajaSalida->Items->Add("Tabulacion f(x) = " + cajaFuncion->Text + "   desde " + cajaA->Text + " hasta " + cajaB->Text + " con paso de " + cajaPasos->Text);
			for (int n = 0; n <= m; n++) {
				cajaSalida->Items->Add("x = " + X[n] + "\ty = " + Y[n]);
			}
			cajaSalida->Items->Add("");
		}
		catch (FormatException^ e) {
			cajaSalida->Items->Add("Error");
		}
	}
	public: double FunX(double x, System::String^ fn) {
			ExpressionParser^ par = gcnew ExpressionParser();
			par->Values->Add("x", x);
			return par->Parse(fn);
	}
	private: System::Void botonAbrirGraficador_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("graficador.exe");
	}
	private: System::Void botonInformacion_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}

	//Calculadora numeros complejos
	 private: System::Void botonZLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {
		cajaRealA->Text = "";
		cajaRealB->Text = "";
		cajaImaginariaA->Text = "";
		cajaImaginariaB->Text = "";
		cajaZSalida->Items->Clear();
	}
	private: System::Void botonZInfo_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
	private: System::Void botonZSuma_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			Complejo A(Convert::ToDouble(cajaRealA->Text), Convert::ToDouble(cajaImaginariaA->Text)),
					 B(Convert::ToDouble(cajaRealB->Text), Convert::ToDouble(cajaImaginariaB->Text)),
					 C;
			C = A + B;
			cajaZSalida->Items->Add("(" + A.dameTuReal() + " + " + A.dameTuImaginario() + "i) " + " + " + "(" + B.dameTuReal() +  " + " + B.dameTuImaginario() + "i) " + " = " + C.dameTuReal() + " + " + C.dameTuImaginario() + "i");
		}
		catch(FormatException^ e) {
			cajaZSalida->Items->Add("Error");
		}
	}
	private: System::Void botonZResta_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			Complejo A(Convert::ToDouble(cajaRealA->Text), Convert::ToDouble(cajaImaginariaA->Text)),
				B(Convert::ToDouble(cajaRealB->Text), Convert::ToDouble(cajaImaginariaB->Text)),
				C;
			C = A - B;
			cajaZSalida->Items->Add("(" + A.dameTuReal() + " + " + A.dameTuImaginario() + "i) " + " - " + "(" + B.dameTuReal() + " + " + B.dameTuImaginario() + "i) " + " = " + C.dameTuReal() + " + " + C.dameTuImaginario() + "i");
		}
		catch (FormatException^ e) {
			cajaZSalida->Items->Add("Error");
		}
	}
	private: System::Void botonZMultiplica_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			Complejo A(Convert::ToDouble(cajaRealA->Text), Convert::ToDouble(cajaImaginariaA->Text)),
				B(Convert::ToDouble(cajaRealB->Text), Convert::ToDouble(cajaImaginariaB->Text)),
				C;
			C = A * B;
			cajaZSalida->Items->Add("(" + A.dameTuReal() + " + " + A.dameTuImaginario() + "i) " + " * " + "(" + B.dameTuReal() + " + " + B.dameTuImaginario() + "i) " + " = " + C.dameTuReal() + " + " + C.dameTuImaginario() + "i");
		}
		catch (FormatException^ e) {
			cajaZSalida->Items->Add("Error");
		}
	}
	private: System::Void botonZDivide_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			Complejo A(Convert::ToDouble(cajaRealA->Text), Convert::ToDouble(cajaImaginariaA->Text)),
				B(Convert::ToDouble(cajaRealB->Text), Convert::ToDouble(cajaImaginariaB->Text)),
				C;
			C = A / B;
			cajaZSalida->Items->Add("(" + A.dameTuReal() + " + " + A.dameTuImaginario() + "i) " + " / " + "(" + B.dameTuReal() + " + " + B.dameTuImaginario() + "i) " + " = " + C.dameTuReal() + " + " + C.dameTuImaginario() + "i");
		}
		catch (FormatException^ e) {
			cajaZSalida->Items->Add("Error");
		}
	}
	private: System::Void botonZSeno_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			Complejo A(Convert::ToDouble(cajaRealA->Text), Convert::ToDouble(cajaImaginariaA->Text)),
					 B;
			B = senoC(A);
			cajaZSalida->Items->Add("sin(" + A.dameTuReal() + " + " + A.dameTuImaginario() + "i) = " + B.dameTuReal() + " + " + B.dameTuImaginario() + "i ");
		}
		catch (FormatException^ e) {
			cajaZSalida->Items->Add("Error");
		}
	}
	private: System::Void botonZCoseno_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			Complejo A(Convert::ToDouble(cajaRealA->Text), Convert::ToDouble(cajaImaginariaA->Text)),
				B;
			B = cosenoC(A);
			cajaZSalida->Items->Add("sin(" + A.dameTuReal() + " + " + A.dameTuImaginario() + "i) = " + B.dameTuReal() + " + " + B.dameTuImaginario() + "i ");
		}
		catch (FormatException^ e) {
			cajaZSalida->Items->Add("Error");
		}
	}
	private: System::Void botonZTangente_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			Complejo A(Convert::ToDouble(cajaRealA->Text), Convert::ToDouble(cajaImaginariaA->Text)),
				B;
			B = tangenteC(A);
			cajaZSalida->Items->Add("sin(" + A.dameTuReal() + " + " + A.dameTuImaginario() + "i) = " + B.dameTuReal() + " + " + B.dameTuImaginario() + "i ");
		}
		catch (FormatException^ e) {
			cajaZSalida->Items->Add("Error");
		}
	}
	private: System::Void botonZCuadrado_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			Complejo A(Convert::ToDouble(cajaRealA->Text), Convert::ToDouble(cajaImaginariaA->Text)),
				B;
			B = cuadradoC(A);
			cajaZSalida->Items->Add("sin(" + A.dameTuReal() + " + " + A.dameTuImaginario() + "i) = " + B.dameTuReal() + " + " + B.dameTuImaginario() + "i ");
		}
		catch (FormatException^ e) {
			cajaZSalida->Items->Add("Error");
		}
	}
	private: System::Void cajaRealA_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cajaRealA->Text != "" || cajaImaginariaA->Text != "")	complejoAExiste = true;
		else complejoAExiste = false;
		if (cajaRealB->Text != "" || cajaImaginariaB->Text != "")	complejoBExiste = true;
		else complejoBExiste = false;

		if (complejoAExiste == true && complejoBExiste == true) {
			botonZSuma->Enabled = true;
			botonZResta->Enabled = true;
			botonZMultiplica->Enabled = true;
			botonZDivide->Enabled = true;
			botonZSeno->Enabled = true;
			botonZCoseno->Enabled = true;
			botonZTangente->Enabled = true;
			botonZCuadrado->Enabled = true;
		}
		else if (complejoAExiste == true && complejoBExiste == false) {
			botonZSuma->Enabled = !true;
			botonZResta->Enabled = !true;
			botonZMultiplica->Enabled = !true;
			botonZDivide->Enabled = !true;
			botonZSeno->Enabled = true;
			botonZCoseno->Enabled = true;
			botonZTangente->Enabled = true;
			botonZCuadrado->Enabled = true;
		}
	}
	private: System::Void cajaImaginariaA_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cajaRealA->Text != "" || cajaImaginariaA->Text != "")	complejoAExiste = true;
		else complejoAExiste = false;
		if (cajaRealB->Text != "" || cajaImaginariaB->Text != "")	complejoBExiste = true;
		else complejoBExiste = false;

		if (complejoAExiste == true && complejoBExiste == true) {
			botonZSuma->Enabled = true;
			botonZResta->Enabled = true;
			botonZMultiplica->Enabled = true;
			botonZDivide->Enabled = true;
			botonZSeno->Enabled = true;
			botonZCoseno->Enabled = true;
			botonZTangente->Enabled = true;
			botonZCuadrado->Enabled = true;
		}
		else if (complejoAExiste == true && complejoBExiste == false) {
			botonZSuma->Enabled = !true;
			botonZResta->Enabled = !true;
			botonZMultiplica->Enabled = !true;
			botonZDivide->Enabled = !true;
			botonZSeno->Enabled = true;
			botonZCoseno->Enabled = true;
			botonZTangente->Enabled = true;
			botonZCuadrado->Enabled = true;
		}
	}
	private: System::Void cajaRealB_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cajaRealA->Text != "" || cajaImaginariaA->Text != "")	complejoAExiste = true;
		else complejoAExiste = false;
		if (cajaRealB->Text != "" || cajaImaginariaB->Text != "")	complejoBExiste = true;
		else complejoBExiste = false;

		if (complejoAExiste == true && complejoBExiste == true) {
			botonZSuma->Enabled = true;
			botonZResta->Enabled = true;
			botonZMultiplica->Enabled = true;
			botonZDivide->Enabled = true;
			botonZSeno->Enabled = true;
			botonZCoseno->Enabled = true;
			botonZTangente->Enabled = true;
			botonZCuadrado->Enabled = true;
		}
		else if (complejoAExiste == true && complejoBExiste == false) {
			botonZSuma->Enabled = !true;
			botonZResta->Enabled = !true;
			botonZMultiplica->Enabled = !true;
			botonZDivide->Enabled = !true;
			botonZSeno->Enabled = true;
			botonZCoseno->Enabled = true;
			botonZTangente->Enabled = true;
			botonZCuadrado->Enabled = true;
		}
	}
	private: System::Void cajaImaginariaB_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cajaRealA->Text != "" || cajaImaginariaA->Text != "")	complejoAExiste = true;
		else complejoAExiste = false;
		if (cajaRealB->Text != "" || cajaImaginariaB->Text != "")	complejoBExiste = true;
		else complejoBExiste = false;

		if (complejoAExiste == true && complejoBExiste == true) {
			botonZSuma->Enabled = true;
			botonZResta->Enabled = true;
			botonZMultiplica->Enabled = true;
			botonZDivide->Enabled = true;
			botonZSeno->Enabled = true;
			botonZCoseno->Enabled = true;
			botonZTangente->Enabled = true;
			botonZCuadrado->Enabled = true;
		}
		else if (complejoAExiste == true && complejoBExiste == false) {
			botonZSuma->Enabled = !true;
			botonZResta->Enabled = !true;
			botonZMultiplica->Enabled = !true;
			botonZDivide->Enabled = !true;
			botonZSeno->Enabled = true;
			botonZCoseno->Enabled = true;
			botonZTangente->Enabled = true;
			botonZCuadrado->Enabled = true;
		}
	}
};
}
