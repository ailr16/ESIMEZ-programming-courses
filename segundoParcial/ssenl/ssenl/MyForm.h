#include <complex>
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include "ssenl.h"
#include "ssel.h"
#pragma once

using info::lundin::math::ExpressionParser;
double funcion(std::string fn, int numEc, double *b);
void generarJF(std::string** matStr, double ** a, int numEc, double *b);
void Newton(double Er, int ni, double *x, std::string**matStr, double **a, int numEc, double *b);

namespace ssenl {				//Cambiar CLRWindowsForms por nombre del proyecto

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
	protected:
	private: System::Windows::Forms::Label^  label1;


	public:	int n, m;
			double **a;
			double *z;
			double *b;
			std::string **matStr;
	private: System::Windows::Forms::DataGridView^  matriz;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  botonLee;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::DataGridView^  matriz2;
	private: System::Windows::Forms::Button^  botonEvaluar;
	private: System::Windows::Forms::RadioButton^  ec3;

	private: System::Windows::Forms::RadioButton^  ec2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  caja3;
	private: System::Windows::Forms::TextBox^  caja2;
	private: System::Windows::Forms::TextBox^  caja1;
	private: System::Windows::Forms::ListBox^  listaResultados;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  cajaIteraciones;
	private: System::Windows::Forms::Label^  ecasvac;
	private: System::Windows::Forms::TextBox^  cajaError;
	private: System::Windows::Forms::Button^  botonInfo;
	private: System::Windows::Forms::Label^  label8;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cajaIteraciones = (gcnew System::Windows::Forms::TextBox());
			this->ecasvac = (gcnew System::Windows::Forms::Label());
			this->cajaError = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->caja3 = (gcnew System::Windows::Forms::TextBox());
			this->caja2 = (gcnew System::Windows::Forms::TextBox());
			this->caja1 = (gcnew System::Windows::Forms::TextBox());
			this->ec3 = (gcnew System::Windows::Forms::RadioButton());
			this->ec2 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->matriz = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->botonEvaluar = (gcnew System::Windows::Forms::Button());
			this->botonLee = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->listaResultados = (gcnew System::Windows::Forms::ListBox());
			this->matriz2 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->botonInfo = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matriz))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matriz2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->cajaIteraciones);
			this->groupBox1->Controls->Add(this->ecasvac);
			this->groupBox1->Controls->Add(this->cajaError);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->caja3);
			this->groupBox1->Controls->Add(this->caja2);
			this->groupBox1->Controls->Add(this->caja1);
			this->groupBox1->Controls->Add(this->ec3);
			this->groupBox1->Controls->Add(this->ec2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->matriz);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(408, 303);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entrada";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(275, 185);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Iteraciones";
			// 
			// cajaIteraciones
			// 
			this->cajaIteraciones->Location = System::Drawing::Point(340, 182);
			this->cajaIteraciones->Name = L"cajaIteraciones";
			this->cajaIteraciones->Size = System::Drawing::Size(62, 20);
			this->cajaIteraciones->TabIndex = 13;
			// 
			// ecasvac
			// 
			this->ecasvac->AutoSize = true;
			this->ecasvac->Location = System::Drawing::Point(286, 158);
			this->ecasvac->Name = L"ecasvac";
			this->ecasvac->Size = System::Drawing::Size(29, 13);
			this->ecasvac->TabIndex = 12;
			this->ecasvac->Text = L"Error";
			// 
			// cajaError
			// 
			this->cajaError->Location = System::Drawing::Point(321, 155);
			this->cajaError->Name = L"cajaError";
			this->cajaError->Size = System::Drawing::Size(81, 20);
			this->cajaError->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(297, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Valores iniciales";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(297, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"x3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(297, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"x2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(297, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"x1";
			// 
			// caja3
			// 
			this->caja3->Location = System::Drawing::Point(321, 107);
			this->caja3->Name = L"caja3";
			this->caja3->Size = System::Drawing::Size(81, 20);
			this->caja3->TabIndex = 6;
			// 
			// caja2
			// 
			this->caja2->Location = System::Drawing::Point(321, 80);
			this->caja2->Name = L"caja2";
			this->caja2->Size = System::Drawing::Size(81, 20);
			this->caja2->TabIndex = 5;
			// 
			// caja1
			// 
			this->caja1->Location = System::Drawing::Point(321, 52);
			this->caja1->Name = L"caja1";
			this->caja1->Size = System::Drawing::Size(81, 20);
			this->caja1->TabIndex = 4;
			// 
			// ec3
			// 
			this->ec3->AutoSize = true;
			this->ec3->Location = System::Drawing::Point(166, 278);
			this->ec3->Name = L"ec3";
			this->ec3->Size = System::Drawing::Size(31, 17);
			this->ec3->TabIndex = 1;
			this->ec3->TabStop = true;
			this->ec3->Text = L"3";
			this->ec3->UseVisualStyleBackColor = true;
			// 
			// ec2
			// 
			this->ec2->AutoSize = true;
			this->ec2->Location = System::Drawing::Point(166, 261);
			this->ec2->Name = L"ec2";
			this->ec2->Size = System::Drawing::Size(31, 17);
			this->ec2->TabIndex = 0;
			this->ec2->TabStop = true;
			this->ec2->Text = L"2";
			this->ec2->UseVisualStyleBackColor = true;
			this->ec2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ec2_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(73, 263);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Numero de\r\necuaciones";
			// 
			// matriz
			// 
			this->matriz->AllowUserToAddRows = false;
			this->matriz->AllowUserToDeleteRows = false;
			this->matriz->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->matriz->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->matriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matriz->Location = System::Drawing::Point(7, 20);
			this->matriz->Name = L"matriz";
			this->matriz->Size = System::Drawing::Size(262, 238);
			this->matriz->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->botonEvaluar);
			this->groupBox2->Controls->Add(this->botonLee);
			this->groupBox2->Location = System::Drawing::Point(427, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(153, 303);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Proceso";
			// 
			// botonEvaluar
			// 
			this->botonEvaluar->Location = System::Drawing::Point(7, 49);
			this->botonEvaluar->Name = L"botonEvaluar";
			this->botonEvaluar->Size = System::Drawing::Size(140, 23);
			this->botonEvaluar->TabIndex = 1;
			this->botonEvaluar->Text = L"Resolver";
			this->botonEvaluar->UseVisualStyleBackColor = true;
			this->botonEvaluar->Click += gcnew System::EventHandler(this, &MyForm::botonEvaluar_Click);
			// 
			// botonLee
			// 
			this->botonLee->Location = System::Drawing::Point(6, 20);
			this->botonLee->Name = L"botonLee";
			this->botonLee->Size = System::Drawing::Size(141, 23);
			this->botonLee->TabIndex = 0;
			this->botonLee->Text = L"Leer matriz";
			this->botonLee->UseVisualStyleBackColor = true;
			this->botonLee->Click += gcnew System::EventHandler(this, &MyForm::botonLee_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->botonInfo);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->listaResultados);
			this->groupBox3->Controls->Add(this->matriz2);
			this->groupBox3->Location = System::Drawing::Point(587, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(474, 303);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Salida";
			// 
			// listaResultados
			// 
			this->listaResultados->FormattingEnabled = true;
			this->listaResultados->Location = System::Drawing::Point(265, 76);
			this->listaResultados->Name = L"listaResultados";
			this->listaResultados->Size = System::Drawing::Size(195, 199);
			this->listaResultados->TabIndex = 1;
			// 
			// matriz2
			// 
			this->matriz2->AllowUserToAddRows = false;
			this->matriz2->AllowUserToDeleteRows = false;
			this->matriz2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->matriz2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->matriz2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matriz2->Location = System::Drawing::Point(7, 76);
			this->matriz2->Name = L"matriz2";
			this->matriz2->Size = System::Drawing::Size(240, 196);
			this->matriz2->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Matriz ingresada";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(265, 57);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 13);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Resultados";
			// 
			// botonInfo
			// 
			this->botonInfo->Location = System::Drawing::Point(374, 19);
			this->botonInfo->Name = L"botonInfo";
			this->botonInfo->Size = System::Drawing::Size(75, 23);
			this->botonInfo->TabIndex = 4;
			this->botonInfo->Text = L"Info";
			this->botonInfo->UseVisualStyleBackColor = true;
			this->botonInfo->Click += gcnew System::EventHandler(this, &MyForm::botonInfo_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1058, 360);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Solucionador de Sistemas de Ecuaciones No Lineales";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matriz))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matriz2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void botonLee_Click(System::Object^  sender, System::EventArgs^  e) {
		leer();
		compruebaDatos();
	}
	public:void leer(void) {
		double lec, r, im;
		String^ s;
		String^ st;

		msclr::interop::marshal_context context;

		for (int i = 0; i < m; i++) {				//Lee matriz y la guarda en un arreglo
			for (int j = 0; j < n; j++) {
				s = Convert::ToString(matriz->Rows[i]->Cells[j]->Value);
				matStr[i][j] = context.marshal_as<std::string>(s);
			}
		}

		matriz2->Columns->Clear();					//Crea la segunda matriz
		matriz2->Rows->Clear();
		for (int i = 1; i <= n; i++) {
			System::String^ s;
			System::String^ si;

			si = Convert::ToString(i);
			if (i <= m)		s = "Z" + si;
			else      s = "Resultado";
			matriz2->Columns->Add("Matriz2", s);
		}
		for (int i = 1; i <= m; i++) matriz2->Rows->Add();

		for (int i = 0; i < m; i++) {				//Imprime los valores en la segunda matriz
			for (int j = 0; j < n; j++) {
				st = gcnew String(matStr[i][j].c_str());
				matriz2->Rows[i]->Cells[j]->Value = st;
			}
		}
	}
	private: System::Void botonEvaluar_Click(System::Object^  sender, System::EventArgs^  e) {
		ssenlClase sistema(m, z);
		
		if (ec2->Checked) {
			if (caja1->Text != "" && caja2->Text != "") {
				b[0] = Convert::ToDouble(caja1->Text);
				b[1] = Convert::ToDouble(caja2->Text);
			}

			Newton(Convert::ToDouble(cajaError->Text), Convert::ToDouble(cajaIteraciones->Text), z, matStr, a, 2, b);

			for (int i = 0; i < m; i++) {
				listaResultados->Items->Add("x" + i + "= " + Convert::ToString(z[i]));
			}
		}
		else if (ec3->Checked) {
			if (caja1->Text != "" && caja2->Text != "" && caja3->Text != "") {
				b[0] = Convert::ToDouble(caja1->Text);
				b[1] = Convert::ToDouble(caja2->Text);
				b[2] = Convert::ToDouble(caja3->Text);
			}
			Newton(Convert::ToDouble(cajaError->Text), Convert::ToDouble(cajaIteraciones->Text), z, matStr, a, 3, b);

			for (int i = 0; i < m; i++) {
				listaResultados->Items->Add("x" + i + "= " + Convert::ToString(z[i]));
			}
		}
	}
	private:void compruebaDatos(void){
		if (ec2->Checked) {
			caja1->Enabled = true;
			caja2->Enabled = true;
			caja3->Enabled = false;
		}
		else if (ec3->Checked) {
			caja1->Enabled = true;
			caja2->Enabled = true;
			caja3->Enabled = true;
		}
	}
	private: System::Void ec2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		compruebaDatos();
		try {
			if (ec2->Checked) {
				m = 2;
				n = m + 1;

				z = new double[m];
				a = new double*[m];
				b = new double[m];
				matStr = new std::string*[m];
				for (int i = 0; i < m; i++)		a[i] = new double[n];
				for (int i = 0; i < m; i++)		matStr[i] = new std::string[n];

				matriz->Columns->Clear();
				matriz->Rows->Clear();

				for (int i = 1; i <= n; i++) {
					System::String^ s;
					System::String^ si;

					si = Convert::ToString(i);
					if (i <= m)		s = "Z" + si;
					else      s = "Resultado";
					matriz->Columns->Add("Matriz", s);
				}
				for (int i = 1; i <= m; i++) matriz->Rows->Add();
			}
			else if (ec3->Checked) {
				m = 3;
				n = m + 1;

				z = new double[m];
				a = new double*[m];
				matStr = new std::string*[m];
				for (int i = 0; i < m; i++)		a[i] = new double[n];
				for (int i = 0; i < m; i++)		matStr[i] = new std::string[n];

				matriz->Columns->Clear();
				matriz->Rows->Clear();

				for (int i = 1; i <= n; i++) {
					System::String^ s;
					System::String^ si;

					si = Convert::ToString(i);
					if (i <= m)		s = "Z" + si;
					else      s = "Resultado";
					matriz->Columns->Add("Matriz", s);
				}
				for (int i = 1; i <= m; i++) matriz->Rows->Add();
			}
		}
		catch (FormatException^ e) {}
	}
	private: System::Void botonInfo_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
};
}
double funcion(std::string fn, int numEc, double *b) {
	String^ st;
	ExpressionParser^ par = gcnew ExpressionParser();
	if (numEc == 2) {
		try {
			par->Values->Add("x", b[0]);
			par->Values->Add("y", b[1]);
			st = gcnew String(fn.c_str());
			return par->Parse(st);
		}
		catch(FormatException^e){}
	}
	if (numEc == 3) {
		try {
			par->Values->Add("x", b[0]);
			par->Values->Add("y", b[1]);
			par->Values->Add("z", b[2]);
			st = gcnew String(fn.c_str());
			return par->Parse(st);
		}
		catch(FormatException^e){}
	}
}
void generarJF(std::string** matStr, double ** a, int numEc, double *b) {
	int m = numEc;
	int n = m + 1;
	if (numEc == 2) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = funcion(matStr[i][j], 2, b);
			}
		}
	}
	else if (numEc == 3){
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = funcion(matStr[i][j], 3, b);
			}
		}
	}
}
void Newton(double Er, int ni, double *x, std::string**matStr, double **a, int numEc,  double *b) {
	int bn;
	ssel<double> sistema(numEc);
	double * q;
	q = new double[numEc];
	double * h;
	h = new double[numEc];

	for (int i = 0; i < numEc; i++) {
		q[i] = b[i];
	}

	bn = 0;
	for (int k = 1; k <= ni; k++) {
		generarJF(matStr, a, numEc, b);
		sistema.modificaMatriz(a);
		sistema.GaussJordan();
		h = sistema.regresaMatrizResultados();
		for (int i = 0; i < numEc; i++) {
			x[i] = q[i] + h[i];
			if (x[i] - q[i] < Er) {
				b++;
			}
		}
		if (bn == numEc) {}
	}
}