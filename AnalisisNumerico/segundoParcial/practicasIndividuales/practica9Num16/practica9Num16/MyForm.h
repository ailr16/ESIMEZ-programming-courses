#include <complex>
#include "ssel.h"
#pragma once

namespace practica9Num16 {				//Cambiar CLRWindowsForms por nombre del proyecto

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



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  botonMatriz;
	private: System::Windows::Forms::DataGridView^  matriz;


	private: System::Windows::Forms::TextBox^  cajaN;

	private: System::Windows::Forms::Button^  botonGauss;
	private: System::Windows::Forms::Button^  botonLee;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  botonLimpiar;
	private: System::Windows::Forms::Button^  botonInfo;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridView^  matriz2;
	private: System::Windows::Forms::ListBox^  listaResultados;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	public: int m, n;
			double **a;
			double *z;
	private: System::Windows::Forms::Label^  label4;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->botonMatriz = (gcnew System::Windows::Forms::Button());
			this->matriz = (gcnew System::Windows::Forms::DataGridView());
			this->cajaN = (gcnew System::Windows::Forms::TextBox());
			this->botonGauss = (gcnew System::Windows::Forms::Button());
			this->botonLee = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->botonLimpiar = (gcnew System::Windows::Forms::Button());
			this->botonInfo = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->matriz2 = (gcnew System::Windows::Forms::DataGridView());
			this->listaResultados = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matriz))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matriz2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(73, 282);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Numero de ecuaciones";
			// 
			// botonMatriz
			// 
			this->botonMatriz->Location = System::Drawing::Point(268, 269);
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
			this->matriz->Location = System::Drawing::Point(6, 42);
			this->matriz->Name = L"matriz";
			this->matriz->RowHeadersWidth = 24;
			this->matriz->Size = System::Drawing::Size(400, 221);
			this->matriz->TabIndex = 2;
			// 
			// cajaN
			// 
			this->cajaN->Location = System::Drawing::Point(196, 279);
			this->cajaN->Name = L"cajaN";
			this->cajaN->Size = System::Drawing::Size(66, 20);
			this->cajaN->TabIndex = 0;
			this->cajaN->Text = L"4";
			this->cajaN->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaN_TextChanged);
			// 
			// botonGauss
			// 
			this->botonGauss->Location = System::Drawing::Point(7, 72);
			this->botonGauss->Name = L"botonGauss";
			this->botonGauss->Size = System::Drawing::Size(146, 23);
			this->botonGauss->TabIndex = 1;
			this->botonGauss->Text = L"Metodo de Gauss-Jordan";
			this->botonGauss->UseVisualStyleBackColor = true;
			this->botonGauss->Click += gcnew System::EventHandler(this, &MyForm::botonGauss_Click);
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(253, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Resultados";
			// 
			// botonLimpiar
			// 
			this->botonLimpiar->Location = System::Drawing::Point(9, 248);
			this->botonLimpiar->Name = L"botonLimpiar";
			this->botonLimpiar->Size = System::Drawing::Size(146, 36);
			this->botonLimpiar->TabIndex = 6;
			this->botonLimpiar->Text = L"Limpiar";
			this->botonLimpiar->UseVisualStyleBackColor = true;
			this->botonLimpiar->Click += gcnew System::EventHandler(this, &MyForm::botonLimpiar_Click);
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
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->botonGauss);
			this->groupBox2->Controls->Add(this->botonLimpiar);
			this->groupBox2->Controls->Add(this->botonLee);
			this->groupBox2->Location = System::Drawing::Point(440, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(161, 313);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Proceso";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->cajaN);
			this->groupBox1->Controls->Add(this->botonMatriz);
			this->groupBox1->Controls->Add(this->matriz);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(421, 313);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entrada";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(311, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"En la practica se propone resolver un SSEL 4x4 de variable real.";
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
			this->groupBox3->Size = System::Drawing::Size(525, 313);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Salida";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1144, 334);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox3);
			this->Name = L"MyForm";
			this->Text = L"Practica 9 Metodo de Gauss-Jordan";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matriz))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matriz2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void botonMatriz_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			comprobarBotones();
			m = Convert::ToInt32(cajaN->Text);
			n = m + 1;

			z = new double[m];
			a = new double*[m];
			for (int i = 0; i < m; i++) {
				a[i] = new double[n];
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
	public: void comprobarBotones(void) {
		if (cajaN->Text != "") botonMatriz->Enabled = true;
		else botonMatriz->Enabled = false;
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

				real = s;
				r = Convert::ToDouble(real);
				a[i][j] = r;
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
				matriz2->Rows[i]->Cells[j]->Value = Convert::ToString(a[i][j]);
			}
		}
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
		listaResultados->Items->Add("Metodo de Gauss-Jordan");
		try {
			sistema.GaussJordan();
			for (int i = 0; i < m; i++) {
				listaResultados->Items->Add("Z" + i + "= " + Convert::ToString(z[i]));
			}
		}
		catch (FormatException ^e) {}
	}

	private: System::Void cajaError_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
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
	public: void imprimirMatriz(void) {
		for (int i = 0; i < m; i++) {				//Imprime los valores en la segunda matriz
			for (int j = 0; j < n; j++) {
				matriz2->Rows[i]->Cells[j]->Value = Convert::ToString(a[i][j]);
			}
		}
	}
	private: System::Void botonInfo_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
	};
}