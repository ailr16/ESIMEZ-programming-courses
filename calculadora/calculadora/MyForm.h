#include <math.h>

#pragma once

namespace CLRWindowsForms {				//Cambiar CLRWindowsForms por nombre del proyecto

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
			this->botonLimpiar = (gcnew System::Windows::Forms::Button());
			this->botonDivide = (gcnew System::Windows::Forms::Button());
			this->botonMultiplica = (gcnew System::Windows::Forms::Button());
			this->botonResta = (gcnew System::Windows::Forms::Button());
			this->botonSuma = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cajaB = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cajaA = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->boton10 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(13, 13);
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
			this->cajaSalida->Size = System::Drawing::Size(412, 264);
			this->cajaSalida->TabIndex = 0;
			// 
			// groupBox2
			// 
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
			this->groupBox2->Controls->Add(this->botonLimpiar);
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
			// botonInversa
			// 
			this->botonInversa->Location = System::Drawing::Point(176, 60);
			this->botonInversa->Name = L"botonInversa";
			this->botonInversa->Size = System::Drawing::Size(50, 32);
			this->botonInversa->TabIndex = 17;
			this->botonInversa->Text = L"A^-1";
			this->botonInversa->UseVisualStyleBackColor = true;
			this->botonInversa->Click += gcnew System::EventHandler(this, &MyForm::botonInversa_Click);
			// 
			// botonFactorial
			// 
			this->botonFactorial->Location = System::Drawing::Point(122, 60);
			this->botonFactorial->Name = L"botonFactorial";
			this->botonFactorial->Size = System::Drawing::Size(50, 32);
			this->botonFactorial->TabIndex = 16;
			this->botonFactorial->Text = L"A!";
			this->botonFactorial->UseVisualStyleBackColor = true;
			this->botonFactorial->Click += gcnew System::EventHandler(this, &MyForm::botonFactorial_Click);
			// 
			// botonTangenteH
			// 
			this->botonTangenteH->Location = System::Drawing::Point(87, 225);
			this->botonTangenteH->Name = L"botonTangenteH";
			this->botonTangenteH->Size = System::Drawing::Size(75, 23);
			this->botonTangenteH->TabIndex = 15;
			this->botonTangenteH->Text = L"tanh(A)";
			this->botonTangenteH->UseVisualStyleBackColor = true;
			this->botonTangenteH->Click += gcnew System::EventHandler(this, &MyForm::botonTangenteH_Click);
			// 
			// botonCosenoH
			// 
			this->botonCosenoH->Location = System::Drawing::Point(87, 196);
			this->botonCosenoH->Name = L"botonCosenoH";
			this->botonCosenoH->Size = System::Drawing::Size(75, 23);
			this->botonCosenoH->TabIndex = 14;
			this->botonCosenoH->Text = L"cosh(A)";
			this->botonCosenoH->UseVisualStyleBackColor = true;
			this->botonCosenoH->Click += gcnew System::EventHandler(this, &MyForm::botonCosenoH_Click);
			// 
			// botonSenoH
			// 
			this->botonSenoH->Location = System::Drawing::Point(87, 165);
			this->botonSenoH->Name = L"botonSenoH";
			this->botonSenoH->Size = System::Drawing::Size(75, 23);
			this->botonSenoH->TabIndex = 13;
			this->botonSenoH->Text = L"sinh(A)";
			this->botonSenoH->UseVisualStyleBackColor = true;
			this->botonSenoH->Click += gcnew System::EventHandler(this, &MyForm::botonSenoH_Click);
			// 
			// botonTangente
			// 
			this->botonTangente->Location = System::Drawing::Point(6, 225);
			this->botonTangente->Name = L"botonTangente";
			this->botonTangente->Size = System::Drawing::Size(75, 23);
			this->botonTangente->TabIndex = 12;
			this->botonTangente->Text = L"tan(A)";
			this->botonTangente->UseVisualStyleBackColor = true;
			this->botonTangente->Click += gcnew System::EventHandler(this, &MyForm::botonTangente_Click);
			// 
			// botonCoseno
			// 
			this->botonCoseno->Location = System::Drawing::Point(6, 196);
			this->botonCoseno->Name = L"botonCoseno";
			this->botonCoseno->Size = System::Drawing::Size(75, 23);
			this->botonCoseno->TabIndex = 11;
			this->botonCoseno->Text = L"cos(A)";
			this->botonCoseno->UseVisualStyleBackColor = true;
			this->botonCoseno->Click += gcnew System::EventHandler(this, &MyForm::botonCoseno_Click);
			// 
			// botonSeno
			// 
			this->botonSeno->Location = System::Drawing::Point(6, 166);
			this->botonSeno->Name = L"botonSeno";
			this->botonSeno->Size = System::Drawing::Size(75, 23);
			this->botonSeno->TabIndex = 10;
			this->botonSeno->Text = L"sin(A)";
			this->botonSeno->UseVisualStyleBackColor = true;
			this->botonSeno->Click += gcnew System::EventHandler(this, &MyForm::botonSeno_Click);
			// 
			// botonLog
			// 
			this->botonLog->Location = System::Drawing::Point(6, 133);
			this->botonLog->Name = L"botonLog";
			this->botonLog->Size = System::Drawing::Size(64, 23);
			this->botonLog->TabIndex = 9;
			this->botonLog->Text = L"log10(A)";
			this->botonLog->UseVisualStyleBackColor = true;
			this->botonLog->Click += gcnew System::EventHandler(this, &MyForm::botonLog_Click);
			// 
			// botonLn
			// 
			this->botonLn->Location = System::Drawing::Point(76, 104);
			this->botonLn->Name = L"botonLn";
			this->botonLn->Size = System::Drawing::Size(64, 23);
			this->botonLn->TabIndex = 8;
			this->botonLn->Text = L"ln(A)";
			this->botonLn->UseVisualStyleBackColor = true;
			this->botonLn->Click += gcnew System::EventHandler(this, &MyForm::botonLn_Click);
			// 
			// botonExp
			// 
			this->botonExp->Location = System::Drawing::Point(6, 104);
			this->botonExp->Name = L"botonExp";
			this->botonExp->Size = System::Drawing::Size(64, 23);
			this->botonExp->TabIndex = 7;
			this->botonExp->Text = L"e^A";
			this->botonExp->UseVisualStyleBackColor = true;
			this->botonExp->Click += gcnew System::EventHandler(this, &MyForm::botonExp_Click);
			// 
			// botonRaiz
			// 
			this->botonRaiz->Location = System::Drawing::Point(176, 20);
			this->botonRaiz->Name = L"botonRaiz";
			this->botonRaiz->Size = System::Drawing::Size(50, 32);
			this->botonRaiz->TabIndex = 6;
			this->botonRaiz->Text = L"B√A";
			this->botonRaiz->UseVisualStyleBackColor = true;
			this->botonRaiz->Click += gcnew System::EventHandler(this, &MyForm::botonRaiz_Click);
			// 
			// botonPotencia
			// 
			this->botonPotencia->Location = System::Drawing::Point(122, 20);
			this->botonPotencia->Name = L"botonPotencia";
			this->botonPotencia->Size = System::Drawing::Size(50, 32);
			this->botonPotencia->TabIndex = 5;
			this->botonPotencia->Text = L"A^B";
			this->botonPotencia->UseVisualStyleBackColor = true;
			this->botonPotencia->Click += gcnew System::EventHandler(this, &MyForm::botonPotencia_Click);
			// 
			// botonLimpiar
			// 
			this->botonLimpiar->Location = System::Drawing::Point(6, 287);
			this->botonLimpiar->Name = L"botonLimpiar";
			this->botonLimpiar->Size = System::Drawing::Size(220, 23);
			this->botonLimpiar->TabIndex = 4;
			this->botonLimpiar->Text = L"Limpiar";
			this->botonLimpiar->UseVisualStyleBackColor = true;
			this->botonLimpiar->Click += gcnew System::EventHandler(this, &MyForm::botonLimpiar_Click);
			// 
			// botonDivide
			// 
			this->botonDivide->Location = System::Drawing::Point(44, 20);
			this->botonDivide->Name = L"botonDivide";
			this->botonDivide->Size = System::Drawing::Size(32, 32);
			this->botonDivide->TabIndex = 3;
			this->botonDivide->Text = L"/";
			this->botonDivide->UseVisualStyleBackColor = true;
			this->botonDivide->Click += gcnew System::EventHandler(this, &MyForm::botonDivide_Click);
			// 
			// botonMultiplica
			// 
			this->botonMultiplica->Location = System::Drawing::Point(6, 20);
			this->botonMultiplica->Name = L"botonMultiplica";
			this->botonMultiplica->Size = System::Drawing::Size(32, 32);
			this->botonMultiplica->TabIndex = 2;
			this->botonMultiplica->Text = L"x";
			this->botonMultiplica->UseVisualStyleBackColor = true;
			this->botonMultiplica->Click += gcnew System::EventHandler(this, &MyForm::botonMultiplica_Click);
			// 
			// botonResta
			// 
			this->botonResta->Location = System::Drawing::Point(6, 58);
			this->botonResta->Name = L"botonResta";
			this->botonResta->Size = System::Drawing::Size(70, 34);
			this->botonResta->TabIndex = 1;
			this->botonResta->Text = L"-";
			this->botonResta->UseVisualStyleBackColor = true;
			this->botonResta->Click += gcnew System::EventHandler(this, &MyForm::botonResta_Click);
			// 
			// botonSuma
			// 
			this->botonSuma->Location = System::Drawing::Point(82, 20);
			this->botonSuma->Name = L"botonSuma";
			this->botonSuma->Size = System::Drawing::Size(28, 72);
			this->botonSuma->TabIndex = 0;
			this->botonSuma->Text = L"+";
			this->botonSuma->UseVisualStyleBackColor = true;
			this->botonSuma->Click += gcnew System::EventHandler(this, &MyForm::botonSuma_Click);
			// 
			// groupBox1
			// 
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
			// cajaB
			// 
			this->cajaB->Location = System::Drawing::Point(26, 47);
			this->cajaB->Name = L"cajaB";
			this->cajaB->Size = System::Drawing::Size(158, 20);
			this->cajaB->TabIndex = 3;
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
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(849, 329);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Complejos";
			// 
			// boton10
			// 
			this->boton10->Location = System::Drawing::Point(76, 133);
			this->boton10->Name = L"boton10";
			this->boton10->Size = System::Drawing::Size(64, 23);
			this->boton10->TabIndex = 18;
			this->boton10->Text = L"10^A";
			this->boton10->UseVisualStyleBackColor = true;
			this->boton10->Click += gcnew System::EventHandler(this, &MyForm::boton10_Click);
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
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void botonLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {
		cajaSalida->Items->Clear();
		cajaA->Text = "";
		cajaB->Text = "";
	}
	private: System::Void cajaA_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cajaA->Text != "" && cajaB->Text == "") {
			botonSuma->Enabled = false;
			botonResta->Enabled = false;
			botonMultiplica->Enabled = false;
			botonDivide->Enabled = false;
			botonPotencia->Enabled = false;
			botonRaiz->Enabled = false;
		}
		else {
			botonSuma->Enabled = true;
			botonResta->Enabled = true;
			botonMultiplica->Enabled = true;
			botonDivide->Enabled = true;
			botonPotencia->Enabled = true;
			botonRaiz->Enabled = true;
		}
	}
	private: System::Void cajaB_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cajaA->Text != "" && cajaB->Text == "") {
			botonSuma->Enabled = false;
			botonResta->Enabled = false;
			botonMultiplica->Enabled = false;
			botonDivide->Enabled = false;
			botonPotencia->Enabled = false;
			botonRaiz->Enabled = false;
		}
		else {
			botonSuma->Enabled = true;
			botonResta->Enabled = true;
			botonMultiplica->Enabled = true;
			botonDivide->Enabled = true;
			botonPotencia->Enabled = true;
			botonRaiz->Enabled = true;
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
};
}
