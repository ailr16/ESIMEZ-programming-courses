#include <complex>
#include "ssel.h"

#pragma once

namespace practicaSselWindows {				//Cambiar CLRWindowsForms por nombre del proyecto

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
	private: System::Windows::Forms::TextBox^  cajaN;
	protected:

	private: System::Windows::Forms::Button^  botonMatriz;
	private: System::Windows::Forms::DataGridView^  matriz;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  botonLimpiar;
	private: System::Windows::Forms::Button^  botonLee;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridView^  matriz2;

	private: System::Windows::Forms::ListBox^  listaResultados;

	public: int m, n;
			std::complex<double> **a;
			std::complex<double> *z;
	private: System::Windows::Forms::Button^  botonGJ;
	public:
	private: System::Windows::Forms::Button^  botonGauss;
	private: System::Windows::Forms::Button^  botonJacobi;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  cajaError;
	private: System::Windows::Forms::Button^  botonGS;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  cajaIteraciones;
	private: System::Windows::Forms::Button^  botonOrdenar;
	private: System::Windows::Forms::Button^  botonInfo;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cajaIteraciones = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cajaError = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cajaN = (gcnew System::Windows::Forms::TextBox());
			this->botonMatriz = (gcnew System::Windows::Forms::Button());
			this->matriz = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->botonOrdenar = (gcnew System::Windows::Forms::Button());
			this->botonGS = (gcnew System::Windows::Forms::Button());
			this->botonJacobi = (gcnew System::Windows::Forms::Button());
			this->botonGJ = (gcnew System::Windows::Forms::Button());
			this->botonGauss = (gcnew System::Windows::Forms::Button());
			this->botonLimpiar = (gcnew System::Windows::Forms::Button());
			this->botonLee = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->matriz2 = (gcnew System::Windows::Forms::DataGridView());
			this->listaResultados = (gcnew System::Windows::Forms::ListBox());
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
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->cajaIteraciones);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->cajaError);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->cajaN);
			this->groupBox1->Controls->Add(this->botonMatriz);
			this->groupBox1->Controls->Add(this->matriz);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(421, 335);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entrada";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(74, 313);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Iteraciones";
			// 
			// cajaIteraciones
			// 
			this->cajaIteraciones->Location = System::Drawing::Point(139, 309);
			this->cajaIteraciones->Name = L"cajaIteraciones";
			this->cajaIteraciones->Size = System::Drawing::Size(66, 20);
			this->cajaIteraciones->TabIndex = 2;
			this->cajaIteraciones->Text = L"48";
			this->cajaIteraciones->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaIteraciones_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(211, 312);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Error";
			// 
			// cajaError
			// 
			this->cajaError->Location = System::Drawing::Point(246, 309);
			this->cajaError->Name = L"cajaError";
			this->cajaError->Size = System::Drawing::Size(66, 20);
			this->cajaError->TabIndex = 3;
			this->cajaError->Text = L"0.00000001";
			this->cajaError->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaError_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(75, 271);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Numero de ecuaciones";
			// 
			// cajaN
			// 
			this->cajaN->Location = System::Drawing::Point(198, 268);
			this->cajaN->Name = L"cajaN";
			this->cajaN->Size = System::Drawing::Size(66, 20);
			this->cajaN->TabIndex = 0;
			this->cajaN->Text = L"0";
			this->cajaN->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaN_TextChanged);
			// 
			// botonMatriz
			// 
			this->botonMatriz->Location = System::Drawing::Point(270, 258);
			this->botonMatriz->Name = L"botonMatriz";
			this->botonMatriz->Size = System::Drawing::Size(75, 38);
			this->botonMatriz->TabIndex = 1;
			this->botonMatriz->Text = L"Dimensionar matriz";
			this->botonMatriz->UseVisualStyleBackColor = true;
			this->botonMatriz->Click += gcnew System::EventHandler(this, &MyForm::botonMatriz_Click);
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
			this->matriz->RowHeadersWidth = 24;
			this->matriz->Size = System::Drawing::Size(400, 234);
			this->matriz->TabIndex = 2;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->botonOrdenar);
			this->groupBox2->Controls->Add(this->botonGS);
			this->groupBox2->Controls->Add(this->botonJacobi);
			this->groupBox2->Controls->Add(this->botonGJ);
			this->groupBox2->Controls->Add(this->botonGauss);
			this->groupBox2->Controls->Add(this->botonLimpiar);
			this->groupBox2->Controls->Add(this->botonLee);
			this->groupBox2->Location = System::Drawing::Point(440, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(161, 335);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Proceso";
			// 
			// botonOrdenar
			// 
			this->botonOrdenar->Location = System::Drawing::Point(7, 217);
			this->botonOrdenar->Name = L"botonOrdenar";
			this->botonOrdenar->Size = System::Drawing::Size(146, 23);
			this->botonOrdenar->TabIndex = 5;
			this->botonOrdenar->Text = L"Ordenar elementos matriz";
			this->botonOrdenar->UseVisualStyleBackColor = true;
			this->botonOrdenar->Click += gcnew System::EventHandler(this, &MyForm::botonOrdenar_Click);
			// 
			// botonGS
			// 
			this->botonGS->Location = System::Drawing::Point(7, 161);
			this->botonGS->Name = L"botonGS";
			this->botonGS->Size = System::Drawing::Size(146, 23);
			this->botonGS->TabIndex = 4;
			this->botonGS->Text = L"Metodo de Gauss-Seidel";
			this->botonGS->UseVisualStyleBackColor = true;
			this->botonGS->Click += gcnew System::EventHandler(this, &MyForm::botonGS_Click);
			// 
			// botonJacobi
			// 
			this->botonJacobi->Location = System::Drawing::Point(7, 131);
			this->botonJacobi->Name = L"botonJacobi";
			this->botonJacobi->Size = System::Drawing::Size(146, 23);
			this->botonJacobi->TabIndex = 3;
			this->botonJacobi->Text = L"Metodo de Jacobi";
			this->botonJacobi->UseVisualStyleBackColor = true;
			this->botonJacobi->Click += gcnew System::EventHandler(this, &MyForm::botonJacobi_Click);
			// 
			// botonGJ
			// 
			this->botonGJ->Location = System::Drawing::Point(7, 101);
			this->botonGJ->Name = L"botonGJ";
			this->botonGJ->Size = System::Drawing::Size(146, 23);
			this->botonGJ->TabIndex = 2;
			this->botonGJ->Text = L"Metodo de Gauss-Jordan";
			this->botonGJ->UseVisualStyleBackColor = true;
			this->botonGJ->Click += gcnew System::EventHandler(this, &MyForm::botonGJ_Click);
			// 
			// botonGauss
			// 
			this->botonGauss->Location = System::Drawing::Point(7, 72);
			this->botonGauss->Name = L"botonGauss";
			this->botonGauss->Size = System::Drawing::Size(146, 23);
			this->botonGauss->TabIndex = 1;
			this->botonGauss->Text = L"Metodo de Gauss";
			this->botonGauss->UseVisualStyleBackColor = true;
			this->botonGauss->Click += gcnew System::EventHandler(this, &MyForm::botonGauss_Click);
			// 
			// botonLimpiar
			// 
			this->botonLimpiar->Location = System::Drawing::Point(7, 290);
			this->botonLimpiar->Name = L"botonLimpiar";
			this->botonLimpiar->Size = System::Drawing::Size(146, 36);
			this->botonLimpiar->TabIndex = 6;
			this->botonLimpiar->Text = L"Limpiar";
			this->botonLimpiar->UseVisualStyleBackColor = true;
			this->botonLimpiar->Click += gcnew System::EventHandler(this, &MyForm::botonLimpiar_Click);
			// 
			// botonLee
			// 
			this->botonLee->Location = System::Drawing::Point(7, 20);
			this->botonLee->Name = L"botonLee";
			this->botonLee->Size = System::Drawing::Size(146, 23);
			this->botonLee->TabIndex = 0;
			this->botonLee->Text = L"Leer Matriz";
			this->botonLee->UseVisualStyleBackColor = true;
			this->botonLee->Click += gcnew System::EventHandler(this, &MyForm::botonLee_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->botonInfo);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->matriz2);
			this->groupBox3->Controls->Add(this->listaResultados);
			this->groupBox3->Location = System::Drawing::Point(607, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(525, 335);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Salida";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(253, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Resultados";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Matriz ingresada";
			// 
			// matriz2
			// 
			this->matriz2->AllowUserToAddRows = false;
			this->matriz2->AllowUserToDeleteRows = false;
			this->matriz2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->matriz2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->matriz2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matriz2->Location = System::Drawing::Point(6, 72);
			this->matriz2->Name = L"matriz2";
			this->matriz2->RowHeadersWidth = 16;
			this->matriz2->Size = System::Drawing::Size(235, 212);
			this->matriz2->TabIndex = 1;
			// 
			// listaResultados
			// 
			this->listaResultados->FormattingEnabled = true;
			this->listaResultados->Location = System::Drawing::Point(253, 72);
			this->listaResultados->Name = L"listaResultados";
			this->listaResultados->Size = System::Drawing::Size(266, 212);
			this->listaResultados->TabIndex = 0;
			// 
			// botonInfo
			// 
			this->botonInfo->Location = System::Drawing::Point(444, 19);
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
			this->ClientSize = System::Drawing::Size(1144, 360);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Solucionador de Sistemas de Ecuaciones Lineales";
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

	private: System::Void botonMatriz_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			comprobarBotones();
			m = Convert::ToInt32(cajaN->Text);
			n = m + 1;

			z = new std::complex<double>[m];
			a = new std::complex<double>*[m];
			for (int i = 0; i < m; i++) {
				a[i] = new std::complex<double>[n];
			}

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
		catch (FormatException^ e) {}
	}
	private: System::Void botonLee_Click(System::Object^  sender, System::EventArgs^  e) {
		leer();
	}
	private: System::Void botonLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {
		cajaN->Clear();
		matriz->Columns->Clear();
		matriz->Rows->Clear();
		listaResultados->Items->Clear();
		matriz2->Rows->Clear();
		matriz2->Columns->Clear();
		comprobarBotones();
	}
	private: System::Void cajaN_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
	}
	private: System::Void botonGauss_Click(System::Object^  sender, System::EventArgs^  e) {
		leer();
		comprobarBotones();
		ssel sistema(m, a, z);
		listaResultados->Items->Add("Metodo de Gauss");
		try {
			sistema.Gauss();
			for (int i = 0; i < m; i++) {
				listaResultados->Items->Add("Z" + i + "= " + Convert::ToString(z[i].real()) + " + " + Convert::ToString(z[i].imag()) + "i");
			}
		}
		catch(FormatException ^e){}
	}
	private: System::Void botonGJ_Click(System::Object^  sender, System::EventArgs^  e) {
		leer();
		comprobarBotones();
		ssel sistema(m, a, z);
		listaResultados->Items->Add("Metodo de Gauss-Jordan");
		try {
			sistema.GaussJordan();
			for (int i = 0; i < m; i++) {
				listaResultados->Items->Add("Z" + i + "= " + Convert::ToString(z[i].real()) + " + " + Convert::ToString(z[i].imag())+ "i");
			}
		}
		catch(FormatException^ e){}
	}
	private: System::Void botonJacobi_Click(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
		ssel sistema(m, a, z);
		listaResultados->Items->Add("Metodo de Jacobi");
		try {
			sistema.Jacobi(Convert::ToDouble(cajaError->Text), Convert::ToInt32(cajaIteraciones->Text));
			for (int i = 0; i < m; i++) {
				listaResultados->Items->Add("Z" + i + "= " + Convert::ToString(z[i].real()) + " + " + Convert::ToString(z[i].imag()) + "i");
			}
		}
		catch (FormatException^ e) {}
	}
	public:void leer(void) {
		comprobarBotones();
		double lec, r, im;
		String^ s;
		String^ real;
		String^ imaginario;

		for (int i = 0; i < m; i++) {				//Lee matriz y la guarda en un arreglo
			for (int j = 0; j < n; j++) {
				s = Convert::ToString(matriz->Rows[i]->Cells[j]->Value);

				if (s->Contains(",")) {				//Si se escribe un par ordenado
					array<wchar_t> ^id = { ',',2 };
					array<String^> ^lectura;
					lectura = s->Split(id);
					real = lectura[0];
					imaginario = lectura[1];
					r = Convert::ToDouble(real);
					im = Convert::ToDouble(imaginario);
					std::complex<double> zk(r, im);
					a[i][j] = zk;
				}
				else {								//Si solo se ingresa un valor
					real = s;
					r = Convert::ToDouble(real);
					std::complex<double> zk(r, 0);
					a[i][j] = zk;
				}
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
				matriz2->Rows[i]->Cells[j]->Value = Convert::ToString(Convert::ToString(a[i][j].real()) + " + " + Convert::ToString(a[i][j].imag()) + "i");
			}
		}
	}
	public: void imprimirMatriz(void) {
		for (int i = 0; i < m; i++) {				//Imprime los valores en la segunda matriz
			for (int j = 0; j < n; j++) {
				matriz2->Rows[i]->Cells[j]->Value = Convert::ToString(Convert::ToString(a[i][j].real()) + " + " + Convert::ToString(a[i][j].imag()) + "i");
			}
		}
	}
	private: System::Void cajaError_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
	}
	private: System::Void botonGS_Click(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
		ssel sistema(m, a, z);
		listaResultados->Items->Add("Metodo de Gauss-Seidel");
		try {
			sistema.GaussSeidel(Convert::ToDouble(cajaError->Text));
			for (int i = 0; i < m; i++) {
				listaResultados->Items->Add("Z" + i + "= " + Convert::ToString(z[i].real()) + " + " + Convert::ToString(z[i].imag()) + "i");
			}
		}
		catch (FormatException^ e) {}
	}
	public: void comprobarBotones(void) {
		if (cajaError->Text != "" && cajaIteraciones->Text != "") {
			botonJacobi->Enabled = true;
			botonGS->Enabled = true;
		}
		else {
			botonJacobi->Enabled = false;
			botonGS->Enabled = false;
		}
		if (cajaN->Text != "") botonMatriz->Enabled = true;
		else botonMatriz->Enabled = false;
	}
	private: System::Void cajaIteraciones_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
	}
	private: System::Void botonOrdenar_Click(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
		leer();
		ssel sistema(m, a, z);
		sistema.ordenar(0);
		imprimirMatriz();
	}
	private: System::Void botonInfo_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
};
}
