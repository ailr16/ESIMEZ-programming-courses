#include <complex>
#include <msclr\marshal_cppstd.h>
#include <iostream>

#pragma once

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
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  botonMatriz;
	private: System::Windows::Forms::TextBox^  cajaN;
	public:	int n, m;
			std::complex<double> **a;
			std::complex<double> *z;
			std::string **matStr;
	private: System::Windows::Forms::DataGridView^  matriz;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  botonLee;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::DataGridView^  matriz2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->botonMatriz = (gcnew System::Windows::Forms::Button());
			this->cajaN = (gcnew System::Windows::Forms::TextBox());
			this->matriz = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->botonLee = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->matriz2 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matriz))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matriz2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->botonMatriz);
			this->groupBox1->Controls->Add(this->cajaN);
			this->groupBox1->Controls->Add(this->matriz);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(335, 335);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entrada";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 271);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Numero de ecuaciones";
			// 
			// botonMatriz
			// 
			this->botonMatriz->Location = System::Drawing::Point(221, 260);
			this->botonMatriz->Name = L"botonMatriz";
			this->botonMatriz->Size = System::Drawing::Size(75, 34);
			this->botonMatriz->TabIndex = 2;
			this->botonMatriz->Text = L"Dimensionar matriz";
			this->botonMatriz->UseVisualStyleBackColor = true;
			this->botonMatriz->Click += gcnew System::EventHandler(this, &MyForm::botonMatriz_Click);
			// 
			// cajaN
			// 
			this->cajaN->Location = System::Drawing::Point(138, 268);
			this->cajaN->Name = L"cajaN";
			this->cajaN->Size = System::Drawing::Size(77, 20);
			this->cajaN->TabIndex = 1;
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
			this->matriz->Size = System::Drawing::Size(322, 238);
			this->matriz->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->botonLee);
			this->groupBox2->Location = System::Drawing::Point(355, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(225, 335);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Proceso";
			// 
			// botonLee
			// 
			this->botonLee->Location = System::Drawing::Point(7, 20);
			this->botonLee->Name = L"botonLee";
			this->botonLee->Size = System::Drawing::Size(212, 23);
			this->botonLee->TabIndex = 0;
			this->botonLee->Text = L"Leer matriz";
			this->botonLee->UseVisualStyleBackColor = true;
			this->botonLee->Click += gcnew System::EventHandler(this, &MyForm::botonLee_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->matriz2);
			this->groupBox3->Location = System::Drawing::Point(587, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(514, 335);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Salida";
			// 
			// matriz2
			// 
			this->matriz2->AllowUserToAddRows = false;
			this->matriz2->AllowUserToDeleteRows = false;
			this->matriz2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->matriz2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->matriz2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matriz2->Location = System::Drawing::Point(6, 62);
			this->matriz2->Name = L"matriz2";
			this->matriz2->Size = System::Drawing::Size(240, 196);
			this->matriz2->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1113, 360);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matriz2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void botonMatriz_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			m = Convert::ToInt32(cajaN->Text);
			n = m + 1;

			z = new std::complex<double>[m];
			a = new std::complex<double>*[m];
			matStr = new std::string*[m];
			for (int i = 0; i < m; i++)		a[i] = new std::complex<double>[n];
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
		catch (FormatException^ e) {}
	}
	private: System::Void botonLee_Click(System::Object^  sender, System::EventArgs^  e) {
		leer();
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
};
}
