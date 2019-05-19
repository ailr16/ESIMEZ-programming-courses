#include <math.h>
#include <iostream>
#include "GraficadorFx.h"
#include "Derivada.h"
#include "tratamientoPuntos.h"
#include <string>

using info::lundin::math::ExpressionParser;

#pragma once

namespace examenDerivada {				//Cambiar CLRWindowsForms por nombre del proyecto

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


	protected:
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
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  botonLeer;

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  botonInfo;
	private: System::Windows::Forms::Button^  botonGraficar;
	private: System::Windows::Forms::Button^  botonLimpiar;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;








	public:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->botonLeer = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->botonInfo = (gcnew System::Windows::Forms::Button());
			this->botonGraficar = (gcnew System::Windows::Forms::Button());
			this->botonLimpiar = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1283, 383);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1275, 357);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Descricpion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 1;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(691, 24);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(496, 312);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1275, 357);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Solucion";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Controls->Add(this->listBox1);
			this->groupBox3->Location = System::Drawing::Point(469, 15);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(796, 336);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Salida";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(427, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(363, 302);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->Location = System::Drawing::Point(7, 23);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(414, 303);
			this->listBox1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->botonLeer);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(6, 15);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(249, 336);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entrada";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(232, 91);
			this->label6->TabIndex = 11;
			this->label6->Text = L"1. Ingresar funcion de voltaje v(t)\r\n2. Ingresar instante en el que se desea cono"
				L"cer\r\nla corriente.\r\n3. Ingresar valor del capacitor.\r\n4. Generar puntos.\r\n5. Res"
				L"olver.\r\n6. Graficar.\r\n";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"nF", L"uF", L"mF", L"F" });
			this->comboBox1->Location = System::Drawing::Point(166, 200);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(44, 21);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(120, 200);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(39, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"20";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Valor del capacitor: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"v(t)=";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(118, 168);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(39, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(96, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"t=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(57, 138);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"2.06*sin(2000t-0.6656)+0.901*sin(4000t-2.3995) ";
			// 
			// botonLeer
			// 
			this->botonLeer->Location = System::Drawing::Point(69, 233);
			this->botonLeer->Name = L"botonLeer";
			this->botonLeer->Size = System::Drawing::Size(112, 23);
			this->botonLeer->TabIndex = 2;
			this->botonLeer->Text = L"Generar puntos";
			this->botonLeer->UseVisualStyleBackColor = true;
			this->botonLeer->Click += gcnew System::EventHandler(this, &MyForm::botonLeer_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 122);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Funcion";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->botonInfo);
			this->groupBox2->Controls->Add(this->botonGraficar);
			this->groupBox2->Controls->Add(this->botonLimpiar);
			this->groupBox2->Location = System::Drawing::Point(262, 15);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 336);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Proceso";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 50);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 29);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Resolver";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// botonInfo
			// 
			this->botonInfo->Location = System::Drawing::Point(58, 240);
			this->botonInfo->Name = L"botonInfo";
			this->botonInfo->Size = System::Drawing::Size(75, 23);
			this->botonInfo->TabIndex = 3;
			this->botonInfo->Text = L"Info";
			this->botonInfo->UseVisualStyleBackColor = true;
			this->botonInfo->Click += gcnew System::EventHandler(this, &MyForm::botonInfo_Click_1);
			// 
			// botonGraficar
			// 
			this->botonGraficar->Location = System::Drawing::Point(7, 269);
			this->botonGraficar->Name = L"botonGraficar";
			this->botonGraficar->Size = System::Drawing::Size(187, 23);
			this->botonGraficar->TabIndex = 2;
			this->botonGraficar->Text = L"Graficar";
			this->botonGraficar->UseVisualStyleBackColor = true;
			this->botonGraficar->Click += gcnew System::EventHandler(this, &MyForm::botonGraficar_Click_1);
			// 
			// botonLimpiar
			// 
			this->botonLimpiar->Location = System::Drawing::Point(7, 299);
			this->botonLimpiar->Name = L"botonLimpiar";
			this->botonLimpiar->Size = System::Drawing::Size(187, 31);
			this->botonLimpiar->TabIndex = 0;
			this->botonLimpiar->Text = L"Limpiar";
			this->botonLimpiar->UseVisualStyleBackColor = true;
			this->botonLimpiar->Click += gcnew System::EventHandler(this, &MyForm::botonLimpiar_Click_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(19, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(535, 336);
			this->label7->TabIndex = 2;
			this->label7->Text = resources->GetString(L"label7.Text");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1304, 403);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Proyecto Derivada: Corriente en un capacitor en el dominio del tiempo";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void cajaPuntos_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void botonLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void botonLeer_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void botonGraficar_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void botonInfo_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ g = e->Graphics;
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
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
		listBox1->Items->Add("");
		listBox1->Items->Add("Polinomio: f(x)=" + polinomio);
		listBox1->Items->Add("Recta tangente: y(x)=  " + ecuacionRecta);
		listBox1->Items->Add("");
		if (selected == 0) {
			listBox1->Items->Add("Valor del capacitor:" + textBox3->Text + "nF");
			capacitor = Convert::ToDouble(textBox3->Text) * pow(10, -9);
		}
		else if (selected == 1) {
			listBox1->Items->Add("Valor del capacitor:" + textBox3->Text + "uF");
			capacitor = Convert::ToDouble(textBox3->Text) * pow(10, -6);
		}
		else if (selected == 2) {
			listBox1->Items->Add("Valor del capacitor:" + textBox3->Text + "mF");
			capacitor = Convert::ToDouble(textBox3->Text) * pow(10, -3);
		}
		else if (selected == 3) {
			listBox1->Items->Add("Valor del capacitor:" + textBox3->Text + "F");
			capacitor = Convert::ToDouble(textBox3->Text);
		}
		listBox1->Items->Add("Corriente en el capacitor:");
		listBox1->Items->Add("ic(" + d1.regresaAlgunValorDeX(0) + ")=   " + capacitor * par->Parse(ecuacionRecta) + "[A]");
	}
	private: System::Void cajaPuntos_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
		try {
		}
		catch (FormatException ^e) {}
	}

	private: System::Void botonLeer_Click_1(System::Object^  sender, System::EventArgs^  e) {
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
			listBox1->Items->Add(x[i] + "\t" + y[i]);
		}
	}
	private: System::Void botonInfo_Click_1(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
	private: System::Void botonGraficar_Click_1(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g;
		g = pictureBox1->CreateGraphics();
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
		Pen^ plumaAzul = gcnew Pen(Color::DarkBlue, 1.0f);
		Pen^ plumaGris = gcnew Pen(Color::Gray, 1.0f);
		Pen^ plumaRoja = gcnew Pen(Color::Red, 1.0f);
		g->Clear(System::Drawing::Color::White);

		int cf = pictureBox1->Width;
		int ff = pictureBox1->Height;
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
	private: System::Void botonLimpiar_Click_1(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g;
		g = pictureBox1->CreateGraphics();

		listBox1->Items->Clear();
		g->Clear(System::Drawing::Color::White);
	}
	private:
		double FunT(double t, System::String^ fn) {
			ExpressionParser^ par = gcnew ExpressionParser();
			par->Values->Add("t", t);
			return par->Parse(fn);
		}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		selected = comboBox1->SelectedIndex;
	}
	};
}