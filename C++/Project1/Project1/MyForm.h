#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>

#include "Punto.h"
#include "Fraccion.h"
#include "Complejo.h"
#include "Rectangulo.h"

//Declaracion Funciones circulo
double calculaRadio(Punto C, Punto P);
double calculaPerimetro(Punto C, Punto P);
double calculaArea(Punto C, Punto P);

namespace Project1 {

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
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox36;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox44;
	private: System::Windows::Forms::TextBox^  textBox43;
	private: System::Windows::Forms::TextBox^  textBox42;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::TextBox^  textBox41;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::TextBox^  textBox49;
private: System::Windows::Forms::TextBox^  textBox48;
private: System::Windows::Forms::TextBox^  textBox47;
private: System::Windows::Forms::TextBox^  textBox46;
private: System::Windows::Forms::TextBox^  textBox45;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::TextBox^  textBox50;

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
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(283, 301);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label39);
			this->tabPage1->Controls->Add(this->label38);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox10);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(275, 265);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Punto";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(202, 16);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(14, 13);
			this->label39->TabIndex = 20;
			this->label39->Text = L"Y";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(104, 16);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(14, 13);
			this->label38->TabIndex = 19;
			this->label38->Text = L"X";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(11, 229);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(242, 23);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Salir";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(134, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Limpia";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(11, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Calcula";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(77, 166);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(176, 20);
			this->textBox10->TabIndex = 15;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(77, 140);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(176, 20);
			this->textBox9->TabIndex = 14;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(161, 114);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(92, 20);
			this->textBox8->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(63, 114);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(92, 20);
			this->textBox7->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(161, 88);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(92, 20);
			this->textBox6->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(63, 88);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(92, 20);
			this->textBox5->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(161, 61);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(92, 20);
			this->textBox4->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(63, 61);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(92, 20);
			this->textBox3->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(161, 32);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(92, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(63, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(92, 20);
			this->textBox1->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 171);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Pendiente";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 141);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Distancia";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"A-B";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"A+B";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"B";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"A";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label37);
			this->tabPage2->Controls->Add(this->label36);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->textBox17);
			this->tabPage2->Controls->Add(this->textBox16);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->textBox14);
			this->tabPage2->Controls->Add(this->textBox13);
			this->tabPage2->Controls->Add(this->textBox12);
			this->tabPage2->Controls->Add(this->textBox11);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(275, 265);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Circulo";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(186, 13);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(14, 13);
			this->label37->TabIndex = 16;
			this->label37->Text = L"Y";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(86, 13);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(14, 13);
			this->label36->TabIndex = 15;
			this->label36->Text = L"X";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(25, 203);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(223, 23);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Salir";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(136, 174);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Limpiar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(25, 174);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Calcula";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(79, 134);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(169, 20);
			this->textBox17->TabIndex = 11;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(79, 108);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(169, 20);
			this->textBox16->TabIndex = 10;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(79, 82);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(169, 20);
			this->textBox15->TabIndex = 9;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(22, 137);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 13);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Perimetro";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(22, 111);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(29, 13);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Area";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(22, 85);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Radio";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(148, 56);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 5;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(42, 56);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 4;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(148, 29);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 3;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(42, 29);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(22, 59);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"P";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"C";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label35);
			this->tabPage3->Controls->Add(this->label34);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->textBox29);
			this->tabPage3->Controls->Add(this->textBox28);
			this->tabPage3->Controls->Add(this->textBox27);
			this->tabPage3->Controls->Add(this->textBox26);
			this->tabPage3->Controls->Add(this->textBox25);
			this->tabPage3->Controls->Add(this->textBox24);
			this->tabPage3->Controls->Add(this->textBox23);
			this->tabPage3->Controls->Add(this->textBox22);
			this->tabPage3->Controls->Add(this->textBox21);
			this->tabPage3->Controls->Add(this->textBox20);
			this->tabPage3->Controls->Add(this->textBox19);
			this->tabPage3->Controls->Add(this->textBox18);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(275, 265);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Fraccion";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(168, 15);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(70, 13);
			this->label35->TabIndex = 22;
			this->label35->Text = L"Denominador";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(74, 15);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(59, 13);
			this->label34->TabIndex = 21;
			this->label34->Text = L"Numerador";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(21, 228);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(233, 23);
			this->button9->TabIndex = 20;
			this->button9->Text = L"Salir";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(139, 199);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(115, 23);
			this->button8->TabIndex = 19;
			this->button8->Text = L"Limpiar";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(21, 199);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(112, 23);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Calcula";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(154, 166);
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->Size = System::Drawing::Size(100, 20);
			this->textBox29->TabIndex = 17;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(49, 166);
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(100, 20);
			this->textBox28->TabIndex = 16;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(154, 140);
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(100, 20);
			this->textBox27->TabIndex = 15;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(49, 140);
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(100, 20);
			this->textBox26->TabIndex = 14;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(154, 113);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(100, 20);
			this->textBox25->TabIndex = 13;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(48, 113);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(100, 20);
			this->textBox24->TabIndex = 12;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(154, 86);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(100, 20);
			this->textBox23->TabIndex = 11;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(48, 87);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(100, 20);
			this->textBox22->TabIndex = 10;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(154, 60);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 20);
			this->textBox21->TabIndex = 9;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(48, 60);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 20);
			this->textBox20->TabIndex = 8;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(154, 34);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 20);
			this->textBox19->TabIndex = 7;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(48, 34);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 20);
			this->textBox18->TabIndex = 6;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(18, 169);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(26, 13);
			this->label17->TabIndex = 5;
			this->label17->Text = L"A/B";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(18, 143);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(25, 13);
			this->label16->TabIndex = 4;
			this->label16->Text = L"A*B";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(18, 116);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(24, 13);
			this->label15->TabIndex = 3;
			this->label15->Text = L"A-B";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(18, 90);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(27, 13);
			this->label14->TabIndex = 2;
			this->label14->Text = L"A+B";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(28, 63);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(14, 13);
			this->label13->TabIndex = 1;
			this->label13->Text = L"B";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(28, 37);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(14, 13);
			this->label12->TabIndex = 0;
			this->label12->Text = L"A";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->textBox50);
			this->tabPage4->Controls->Add(this->label33);
			this->tabPage4->Controls->Add(this->label32);
			this->tabPage4->Controls->Add(this->button12);
			this->tabPage4->Controls->Add(this->button11);
			this->tabPage4->Controls->Add(this->button10);
			this->tabPage4->Controls->Add(this->textBox37);
			this->tabPage4->Controls->Add(this->textBox36);
			this->tabPage4->Controls->Add(this->textBox35);
			this->tabPage4->Controls->Add(this->textBox34);
			this->tabPage4->Controls->Add(this->label23);
			this->tabPage4->Controls->Add(this->label22);
			this->tabPage4->Controls->Add(this->label21);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Controls->Add(this->textBox33);
			this->tabPage4->Controls->Add(this->textBox32);
			this->tabPage4->Controls->Add(this->textBox31);
			this->tabPage4->Controls->Add(this->textBox30);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Controls->Add(this->label18);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(275, 275);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Rectangulo";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(203, 9);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(34, 13);
			this->label33->TabIndex = 18;
			this->label33->Text = L"Altura";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(115, 9);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(31, 13);
			this->label32->TabIndex = 17;
			this->label32->Text = L"Base";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(12, 243);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(248, 23);
			this->button12->TabIndex = 16;
			this->button12->Text = L"Salir";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(139, 214);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(121, 23);
			this->button11->TabIndex = 15;
			this->button11->Text = L"Limpiar";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(12, 214);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(121, 23);
			this->button10->TabIndex = 14;
			this->button10->Text = L"Calcula";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(86, 160);
			this->textBox37->Name = L"textBox37";
			this->textBox37->ReadOnly = true;
			this->textBox37->Size = System::Drawing::Size(174, 20);
			this->textBox37->TabIndex = 13;
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(86, 134);
			this->textBox36->Name = L"textBox36";
			this->textBox36->ReadOnly = true;
			this->textBox36->Size = System::Drawing::Size(174, 20);
			this->textBox36->TabIndex = 12;
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(86, 108);
			this->textBox35->Name = L"textBox35";
			this->textBox35->ReadOnly = true;
			this->textBox35->Size = System::Drawing::Size(174, 20);
			this->textBox35->TabIndex = 11;
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(86, 82);
			this->textBox34->Name = L"textBox34";
			this->textBox34->ReadOnly = true;
			this->textBox34->Size = System::Drawing::Size(174, 20);
			this->textBox34->TabIndex = 10;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(9, 163);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(68, 13);
			this->label23->TabIndex = 9;
			this->label23->Text = L"Perimetro R2";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(31, 137);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(46, 13);
			this->label22->TabIndex = 8;
			this->label22->Text = L"Area R2";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(9, 111);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(68, 13);
			this->label21->TabIndex = 7;
			this->label21->Text = L"Perimetro R1";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(31, 85);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(46, 13);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Area R1";
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(176, 52);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(84, 20);
			this->textBox33->TabIndex = 5;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(86, 52);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(84, 20);
			this->textBox32->TabIndex = 4;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(176, 25);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(84, 20);
			this->textBox31->TabIndex = 3;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(86, 25);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(84, 20);
			this->textBox30->TabIndex = 2;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(9, 55);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(71, 13);
			this->label19->TabIndex = 1;
			this->label19->Text = L"Rectangulo 2";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(9, 28);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(71, 13);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Rectangulo 1";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label41);
			this->tabPage5->Controls->Add(this->label40);
			this->tabPage5->Controls->Add(this->label31);
			this->tabPage5->Controls->Add(this->label30);
			this->tabPage5->Controls->Add(this->button15);
			this->tabPage5->Controls->Add(this->button14);
			this->tabPage5->Controls->Add(this->button13);
			this->tabPage5->Controls->Add(this->textBox49);
			this->tabPage5->Controls->Add(this->textBox48);
			this->tabPage5->Controls->Add(this->textBox47);
			this->tabPage5->Controls->Add(this->textBox46);
			this->tabPage5->Controls->Add(this->textBox45);
			this->tabPage5->Controls->Add(this->textBox44);
			this->tabPage5->Controls->Add(this->textBox43);
			this->tabPage5->Controls->Add(this->textBox42);
			this->tabPage5->Controls->Add(this->label29);
			this->tabPage5->Controls->Add(this->label28);
			this->tabPage5->Controls->Add(this->label27);
			this->tabPage5->Controls->Add(this->label26);
			this->tabPage5->Controls->Add(this->textBox41);
			this->tabPage5->Controls->Add(this->textBox40);
			this->tabPage5->Controls->Add(this->textBox39);
			this->tabPage5->Controls->Add(this->textBox38);
			this->tabPage5->Controls->Add(this->label25);
			this->tabPage5->Controls->Add(this->label24);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(275, 265);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Complejo";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(253, 66);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(9, 13);
			this->label41->TabIndex = 24;
			this->label41->Text = L"i";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(253, 39);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(9, 13);
			this->label40->TabIndex = 23;
			this->label40->Text = L"i";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(187, 17);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(55, 13);
			this->label31->TabIndex = 22;
			this->label31->Text = L"Imaginario";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(104, 17);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(29, 13);
			this->label30->TabIndex = 21;
			this->label30->Text = L"Real";
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(24, 226);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(236, 23);
			this->button15->TabIndex = 20;
			this->button15->Text = L"Salir";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(139, 197);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(121, 23);
			this->button14->TabIndex = 19;
			this->button14->Text = L"Limpiar";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(23, 197);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(110, 23);
			this->button13->TabIndex = 18;
			this->button13->Text = L"Calcula";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// textBox49
			// 
			this->textBox49->Location = System::Drawing::Point(168, 162);
			this->textBox49->Name = L"textBox49";
			this->textBox49->ReadOnly = true;
			this->textBox49->Size = System::Drawing::Size(92, 20);
			this->textBox49->TabIndex = 17;
			// 
			// textBox48
			// 
			this->textBox48->Location = System::Drawing::Point(72, 163);
			this->textBox48->Name = L"textBox48";
			this->textBox48->ReadOnly = true;
			this->textBox48->Size = System::Drawing::Size(91, 20);
			this->textBox48->TabIndex = 16;
			// 
			// textBox47
			// 
			this->textBox47->Location = System::Drawing::Point(168, 136);
			this->textBox47->Name = L"textBox47";
			this->textBox47->ReadOnly = true;
			this->textBox47->Size = System::Drawing::Size(92, 20);
			this->textBox47->TabIndex = 15;
			// 
			// textBox46
			// 
			this->textBox46->Location = System::Drawing::Point(72, 137);
			this->textBox46->Name = L"textBox46";
			this->textBox46->ReadOnly = true;
			this->textBox46->Size = System::Drawing::Size(91, 20);
			this->textBox46->TabIndex = 14;
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(169, 111);
			this->textBox45->Name = L"textBox45";
			this->textBox45->ReadOnly = true;
			this->textBox45->Size = System::Drawing::Size(91, 20);
			this->textBox45->TabIndex = 13;
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(72, 111);
			this->textBox44->Name = L"textBox44";
			this->textBox44->ReadOnly = true;
			this->textBox44->Size = System::Drawing::Size(91, 20);
			this->textBox44->TabIndex = 12;
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(168, 85);
			this->textBox43->Name = L"textBox43";
			this->textBox43->ReadOnly = true;
			this->textBox43->Size = System::Drawing::Size(92, 20);
			this->textBox43->TabIndex = 11;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(72, 85);
			this->textBox42->Name = L"textBox42";
			this->textBox42->ReadOnly = true;
			this->textBox42->Size = System::Drawing::Size(91, 20);
			this->textBox42->TabIndex = 10;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(21, 167);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(44, 13);
			this->label29->TabIndex = 9;
			this->label29->Text = L"Z1 / Z2";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(21, 143);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(43, 13);
			this->label28->TabIndex = 8;
			this->label28->Text = L"Z1 * Z2";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(20, 117);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(42, 13);
			this->label27->TabIndex = 7;
			this->label27->Text = L"Z1 - Z2";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(20, 91);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(45, 13);
			this->label26->TabIndex = 6;
			this->label26->Text = L"Z1 + Z2";
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(169, 59);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(83, 20);
			this->textBox41->TabIndex = 5;
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(72, 59);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(91, 20);
			this->textBox40->TabIndex = 4;
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(169, 33);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(83, 20);
			this->textBox39->TabIndex = 3;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(72, 33);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(91, 20);
			this->textBox38->TabIndex = 2;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(42, 62);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(20, 13);
			this->label25->TabIndex = 1;
			this->label25->Text = L"Z2";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(42, 36);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(20, 13);
			this->label24->TabIndex = 0;
			this->label24->Text = L"Z1";
			// 
			// textBox50
			// 
			this->textBox50->Location = System::Drawing::Point(12, 186);
			this->textBox50->Name = L"textBox50";
			this->textBox50->ReadOnly = true;
			this->textBox50->Size = System::Drawing::Size(248, 20);
			this->textBox50->TabIndex = 19;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 301);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Practica 3";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Pestana punto
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Punto A, B, C, D;

	try {
		if (this->textBox1->Text != "" && this->textBox2->Text != "" && this->textBox3->Text != "" && this->textBox4->Text != "") {
			A.modificaTuX(Convert::ToDouble(this->textBox1->Text));
			A.modificaTuY(Convert::ToDouble(this->textBox2->Text));
			B.modificaTuX(Convert::ToDouble(this->textBox3->Text));
			B.modificaTuY(Convert::ToDouble(this->textBox4->Text));

			C = suma(A, B);
			D = resta(A, B);

			this->textBox5->Text = Convert::ToString(C.dameTuX());	//Suma
			this->textBox6->Text = Convert::ToString(C.dameTuY());
			this->textBox7->Text = Convert::ToString(D.dameTuX());	//Resta
			this->textBox8->Text = Convert::ToString(D.dameTuY());
			this->textBox9->Text = Convert::ToString(distanciaEntre(A, B));	//Distancia
			this->textBox10->Text = Convert::ToString(pendiente(A, B));	//Pendiente
		}
	}

	catch (FormatException^ e) {
		this->textBox5->Text = "Error";
		this->textBox6->Text = "Error";
		this->textBox7->Text = "Error";
		this->textBox8->Text = "Error";
		this->textBox9->Text = "Error";
		this->textBox10->Text = "Error";
	}
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->textBox4->Text = "";
	this->textBox5->Text = "";
	this->textBox6->Text = "";
	this->textBox7->Text = "";
	this->textBox8->Text = "";
	this->textBox9->Text = "";
	this->textBox10->Text = "";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(0);
}

	//Pestana circulo
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox11->Text = "";
	this->textBox12->Text = "";
	this->textBox13->Text = "";
	this->textBox14->Text = "";
	this->textBox15->Text = "";
	this->textBox16->Text = "";
	this->textBox17->Text = "";
}

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(0);
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Punto C, P;

	try {
		if (this->textBox11->Text != "" && this->textBox12->Text != "" && this->textBox13->Text != "" && this->textBox14->Text != "") {
			C.modificaTuX(Convert::ToDouble(this->textBox11->Text));
			C.modificaTuY(Convert::ToDouble(this->textBox12->Text));
			P.modificaTuX(Convert::ToDouble(this->textBox13->Text));
			P.modificaTuY(Convert::ToDouble(this->textBox14->Text));

			this->textBox15->Text = Convert::ToString(calculaRadio(C, P));
			this->textBox16->Text = Convert::ToString(calculaArea(C, P));
			this->textBox17->Text = Convert::ToString(calculaPerimetro(C, P));
		}
	}

	catch (FormatException^ e) {
		this->textBox15->Text = "Error";
		this->textBox16->Text = "Error";
		this->textBox17->Text = "Error";
	}
}
	//Pestana fraccion
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox18->Text = "";
	this->textBox19->Text = "";
	this->textBox20->Text = "";
	this->textBox21->Text = "";
	this->textBox22->Text = "";
	this->textBox23->Text = "";
	this->textBox24->Text = "";
	this->textBox25->Text = "";
	this->textBox26->Text = "";
	this->textBox27->Text = "";
	this->textBox28->Text = "";
	this->textBox29->Text = "";
}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	Fraccion A, B, C, D, E, F;

	try {
		if (this->textBox18->Text != "" && this->textBox19->Text != "" && this->textBox20->Text != "" && this->textBox21->Text != "") {
			A.modificaTuNum(Convert::ToDouble(this->textBox18->Text));
			A.modificaTuDen(Convert::ToDouble(this->textBox19->Text));
			B.modificaTuNum(Convert::ToDouble(this->textBox20->Text));
			B.modificaTuDen(Convert::ToDouble(this->textBox21->Text));

			C = sumaF(A, B);
			D = restaF(A, B);
			E = multiplicaF(A, B);
			F = divideF(A, B);

			this->textBox22->Text = Convert::ToString(C.dameTuNum());
			this->textBox23->Text = Convert::ToString(C.dameTuDen());
			this->textBox24->Text = Convert::ToString(D.dameTuNum());
			this->textBox25->Text = Convert::ToString(D.dameTuDen());
			this->textBox26->Text = Convert::ToString(E.dameTuNum());
			this->textBox27->Text = Convert::ToString(E.dameTuDen());
			this->textBox28->Text = Convert::ToString(F.dameTuNum());
			this->textBox29->Text = Convert::ToString(F.dameTuDen());
		}
	}

	catch (FormatException^ e) {
		this->textBox22->Text = "Error";
		this->textBox23->Text = "Error";
		this->textBox24->Text = "Error";
		this->textBox25->Text = "Error";
		this->textBox26->Text = "Error";
		this->textBox27->Text = "Error";
		this->textBox28->Text = "Error";
		this->textBox29->Text = "Error";
	}
}

private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(0);
}
		 //Pestana rectangulo
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox30->Text = "";
	this->textBox31->Text = "";
	this->textBox32->Text = "";
	this->textBox33->Text = "";
	this->textBox34->Text = "";
	this->textBox35->Text = "";
	this->textBox36->Text = "";
	this->textBox37->Text = "";
	this->textBox50->Text = "";
}

private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(0);
}

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	Rectangulo A, B;

	try {
		if (this->textBox30->Text != "" && this->textBox31->Text != "" && this->textBox32->Text != "" && this->textBox33->Text != "") {
			A.modificaTuBase(Convert::ToDouble(this->textBox30->Text));
			A.modificaTuAltura(Convert::ToDouble(this->textBox31->Text));
			B.modificaTuBase(Convert::ToDouble(this->textBox32->Text));
			B.modificaTuAltura(Convert::ToDouble(this->textBox33->Text));

			this->textBox34->Text = Convert::ToString(calculaArea(A));
			this->textBox35->Text = Convert::ToString(calculaPerimetro(A));
			this->textBox36->Text = Convert::ToString(calculaArea(B));
			this->textBox37->Text = Convert::ToString(calculaPerimetro(B));
			
			if (calculaPerimetro(A) > calculaPerimetro(B))
				this->textBox50->Text = "Rectangulo A es mayor";

			else if (calculaPerimetro(A) < calculaPerimetro(B))
				this->textBox50->Text = "Rectangulo B es mayor";

			else
				this->textBox50->Text = "Los rectangulos son iguales";
		}
	}

	catch (FormatException^ e) {
		this->textBox34->Text = "Error";
		this->textBox35->Text = "Error";
		this->textBox36->Text = "Error";
		this->textBox37->Text = "Error";
		this->textBox50->Text = "Error";
	}
}

		//Pestana complejo
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(0);
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox38->Text = "";
	this->textBox39->Text = "";
	this->textBox40->Text = "";
	this->textBox41->Text = "";
	this->textBox42->Text = "";
	this->textBox43->Text = "";
	this->textBox44->Text = "";
	this->textBox45->Text = "";
	this->textBox46->Text = "";
	this->textBox47->Text = "";
	this->textBox48->Text = "";
	this->textBox49->Text = "";
}

private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	Complejo A, B, C, D, E, F;

	try {
		if (this->textBox38->Text != "" && this->textBox39->Text != "" && this->textBox40->Text != "" && this->textBox41->Text != "") {
			A.modificaTuReal(Convert::ToDouble(this->textBox38->Text));
			A.modificaTuImaginario(Convert::ToDouble(this->textBox39->Text));
			B.modificaTuReal(Convert::ToDouble(this->textBox40->Text));
			B.modificaTuImaginario(Convert::ToDouble(this->textBox41->Text));

			C = sumaC(A, B);
			D = restaC(A, B);
			E = multiplicaC(A, B);
			F = divideC(A, B);

			this->textBox42->Text = Convert::ToString(C.dameTuReal());
			this->textBox43->Text = Convert::ToString(C.dameTuImaginario()) + "i";

			this->textBox44->Text = Convert::ToString(D.dameTuReal());
			this->textBox45->Text = Convert::ToString(D.dameTuImaginario()) + "i";

			this->textBox46->Text = Convert::ToString(E.dameTuReal());
			this->textBox47->Text = Convert::ToString(E.dameTuImaginario()) + "i";

			this->textBox48->Text = Convert::ToString(F.dameTuReal());
			this->textBox49->Text = Convert::ToString(F.dameTuImaginario()) + "i";
		}
	}

	catch (FormatException^ e) {
		this->textBox42->Text = "Error";
		this->textBox43->Text = "Error";
		this->textBox44->Text = "Error";
		this->textBox45->Text = "Error";
		this->textBox46->Text = "Error";
		this->textBox47->Text = "Error";
		this->textBox48->Text = "Error";
		this->textBox49->Text = "Error";
	}
}
};
}

//////////////////FUNCIONES//////////////////////

//Definicion Funciones Circulo
double calculaRadio(Punto C, Punto P) {
	return distanciaEntre(C, P);
}

double calculaPerimetro(Punto C, Punto P) {
	return 2 * distanciaEntre(C, P) * M_PI;
}

double calculaArea(Punto C, Punto P) {
	return pow(distanciaEntre(C, P), 2) * M_PI;
}