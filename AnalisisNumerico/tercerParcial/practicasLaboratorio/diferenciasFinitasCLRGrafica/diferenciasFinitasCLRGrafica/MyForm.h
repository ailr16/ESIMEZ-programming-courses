#include <math.h>
#include <iostream>
#include "GraficadorFx.h"
#include "tratamientoPuntos.h"
#include <string>

#pragma once

namespace diferenciasFinitasCLRGrafica {				//Cambiar CLRWindowsForms por nombre del proyecto

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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  botonLeer;
	protected:

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  cajaPuntos;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  botonLimpiar;
	private: System::Windows::Forms::ListBox^  listBox1;
	public:	int n;
			int m;
			double *x;
			double *y;
			double *z;
			double **V;
			double **Vt;
			double **S;
			double **St;
			String^ polinomio;

	private: System::Windows::Forms::Button^  botonGraficar;

	private: System::Windows::Forms::Button^  botonInfo;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  cajaInterpolar;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cajaInterpolar = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->botonLeer = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cajaPuntos = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->botonInfo = (gcnew System::Windows::Forms::Button());
			this->botonGraficar = (gcnew System::Windows::Forms::Button());
			this->botonLimpiar = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cajaInterpolar);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->botonLeer);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->cajaPuntos);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(249, 336);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entrada";
			// 
			// cajaInterpolar
			// 
			this->cajaInterpolar->Location = System::Drawing::Point(117, 50);
			this->cajaInterpolar->Name = L"cajaInterpolar";
			this->cajaInterpolar->Size = System::Drawing::Size(100, 20);
			this->cajaInterpolar->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Valor a interpolar";
			// 
			// botonLeer
			// 
			this->botonLeer->Location = System::Drawing::Point(82, 299);
			this->botonLeer->Name = L"botonLeer";
			this->botonLeer->Size = System::Drawing::Size(75, 23);
			this->botonLeer->TabIndex = 2;
			this->botonLeer->Text = L"Leer puntos";
			this->botonLeer->UseVisualStyleBackColor = true;
			this->botonLeer->Click += gcnew System::EventHandler(this, &MyForm::botonLeer_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 73);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(237, 220);
			this->dataGridView1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Numero de puntos";
			// 
			// cajaPuntos
			// 
			this->cajaPuntos->Location = System::Drawing::Point(117, 24);
			this->cajaPuntos->Name = L"cajaPuntos";
			this->cajaPuntos->Size = System::Drawing::Size(100, 20);
			this->cajaPuntos->TabIndex = 0;
			this->cajaPuntos->Text = L"0";
			this->cajaPuntos->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaPuntos_TextChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->botonInfo);
			this->groupBox2->Controls->Add(this->botonGraficar);
			this->groupBox2->Controls->Add(this->botonLimpiar);
			this->groupBox2->Location = System::Drawing::Point(269, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 336);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Proceso";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 50);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 29);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Metodo de Diferencias Divididas";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// botonInfo
			// 
			this->botonInfo->Location = System::Drawing::Point(58, 240);
			this->botonInfo->Name = L"botonInfo";
			this->botonInfo->Size = System::Drawing::Size(75, 23);
			this->botonInfo->TabIndex = 3;
			this->botonInfo->Text = L"Info";
			this->botonInfo->UseVisualStyleBackColor = true;
			this->botonInfo->Click += gcnew System::EventHandler(this, &MyForm::botonInfo_Click);
			// 
			// botonGraficar
			// 
			this->botonGraficar->Location = System::Drawing::Point(7, 269);
			this->botonGraficar->Name = L"botonGraficar";
			this->botonGraficar->Size = System::Drawing::Size(187, 23);
			this->botonGraficar->TabIndex = 2;
			this->botonGraficar->Text = L"Graficar";
			this->botonGraficar->UseVisualStyleBackColor = true;
			this->botonGraficar->Click += gcnew System::EventHandler(this, &MyForm::botonGraficar_Click);
			// 
			// botonLimpiar
			// 
			this->botonLimpiar->Location = System::Drawing::Point(7, 299);
			this->botonLimpiar->Name = L"botonLimpiar";
			this->botonLimpiar->Size = System::Drawing::Size(187, 31);
			this->botonLimpiar->TabIndex = 0;
			this->botonLimpiar->Text = L"Limpiar";
			this->botonLimpiar->UseVisualStyleBackColor = true;
			this->botonLimpiar->Click += gcnew System::EventHandler(this, &MyForm::botonLimpiar_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Controls->Add(this->listBox1);
			this->groupBox3->Location = System::Drawing::Point(476, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(796, 336);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Salida";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(427, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(363, 302);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1284, 361);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Diferencias finitas con Graficador";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void cajaPuntos_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		try {
			dataGridView1->Columns->Clear();
			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Add("Matriz", "x");
			dataGridView1->Columns->Add("Matriz", "y");
			n = Convert::ToInt32(cajaPuntos->Text);
			//delete x;	delete y;	delete V;	delete Vt;	delete S;	delete St;	delete z;
			//x = new double[n];
			//y = new double[n];
			//z = new double[m];
			//V = new double*[m];
			//Vt = new double*[n];
			//S = new double*[m];
			//St = new double*[m];

			//for (int i = 0; i < m; i++) V[i] = new double[n];
			//for (int i = 0; i < n; i++) Vt[i] = new double[m];
			//for (int i = 0; i < m; i++) S[i] = new double[m];
			//for (int i = 0; i < m; i++) St[i] = new double[m + 1];

			for (int k = 0; k < n; k++) dataGridView1->Rows->Add();
		}
		catch (FormatException ^e) {}
	}
	private: System::Void botonLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g;
		g = pictureBox1->CreateGraphics();

		dataGridView1->Columns->Clear();
		dataGridView1->Rows->Clear();
		listBox1->Items->Clear();
		g->Clear(System::Drawing::Color::White);
	}
	private: System::Void botonLeer_Click(System::Object^  sender, System::EventArgs^  e) {
		delete x;	delete y;
		x = new double[n];
		y = new double[n];

		for (int i = 0; i < n; i++) {
			x[i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);
			y[i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
		}
		listBox1->Items->Add("x\ty");
		for (int i = 0; i < n; i++) {
			listBox1->Items->Add(x[i] + "\t" + y[i]);
		}
	}
	private: System::Void botonGraficar_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g;
		g = pictureBox1->CreateGraphics();
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
		Pen^ plumaAzul = gcnew Pen(Color::DarkBlue, 1.0f);
		Pen^ plumaGris = gcnew Pen(Color::Gray, 1.0f);
		g->Clear(System::Drawing::Color::White);

		int cf = pictureBox1->Width;
		int ff = pictureBox1->Height;
		int ci = 1;

		try {
			m = cf - ci;
			GraficadorFx obj(m);
			//Busca x mas grande entre los puntos
			double xmx = x[0];
			for (int i = 0; i < m; i++) if (xmx < x[i])	xmx = x[i];
			double xf = xmx;
			xmx = x[0];
			for (int i = 0; i < m; i++) if (x[i] < xmx)	xmx = x[i];
			double xi = xmx;

			obj.GraficaXY(x[0] + 0.0001, x[n - 1] - 0.0001, cf, ff, polinomio);
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

	private: System::Void botonInfo_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		double resultadoInterpolacion;
		std::string pol;
		tratamientoPuntos tp(n);
		tp.modificaArregloX(x);
		tp.modificaArregloY(y);
		polinomio = tp.diferenciasFinitasCLR(Convert::ToDouble(cajaInterpolar->Text), resultadoInterpolacion);
		listBox1->Items->Add("Interpolacion: f(" + cajaInterpolar->Text + ")=   " + resultadoInterpolacion);
		listBox1->Items->Add("Polinomio: f(x)=  " + polinomio);
	}
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ g = e->Graphics;
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
	}
	};
}

