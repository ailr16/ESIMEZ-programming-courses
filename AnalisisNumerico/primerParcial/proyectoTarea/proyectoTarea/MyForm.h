#include "senl.h"

#pragma once

namespace proyectoTarea {				//Cambiar CLRWindowsForms por nombre del proyecto

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









	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  cajaDenominador;

	private: System::Windows::Forms::TextBox^  cajaNumerador;




	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  cajaXf;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  cajaXi;

	private: System::Windows::Forms::Button^  botonLimpiar;

	private: System::Windows::Forms::Button^  botonCero;
	private: System::Windows::Forms::Button^  botonPolo;


	private: System::Windows::Forms::ListBox^  salida;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  cajaIteraciones;
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
			this->botonInfo = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cajaIteraciones = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cajaXf = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cajaXi = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cajaDenominador = (gcnew System::Windows::Forms::TextBox());
			this->cajaNumerador = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->botonLimpiar = (gcnew System::Windows::Forms::Button());
			this->botonCero = (gcnew System::Windows::Forms::Button());
			this->botonPolo = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->salida = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->botonInfo);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->cajaIteraciones);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->cajaXf);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->cajaXi);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->cajaDenominador);
			this->groupBox1->Controls->Add(this->cajaNumerador);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(234, 339);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entrada";
			// 
			// botonInfo
			// 
			this->botonInfo->Location = System::Drawing::Point(12, 310);
			this->botonInfo->Name = L"botonInfo";
			this->botonInfo->Size = System::Drawing::Size(194, 23);
			this->botonInfo->TabIndex = 14;
			this->botonInfo->Text = L"Informacion";
			this->botonInfo->UseVisualStyleBackColor = true;
			this->botonInfo->Click += gcnew System::EventHandler(this, &MyForm::botonInfo_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(42, 271);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"n Iteraciones";
			// 
			// cajaIteraciones
			// 
			this->cajaIteraciones->Location = System::Drawing::Point(116, 268);
			this->cajaIteraciones->Name = L"cajaIteraciones";
			this->cajaIteraciones->Size = System::Drawing::Size(100, 20);
			this->cajaIteraciones->TabIndex = 12;
			this->cajaIteraciones->Text = L"32";
			this->cajaIteraciones->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaIteraciones_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(55, 228);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"sf";
			// 
			// cajaXf
			// 
			this->cajaXf->Location = System::Drawing::Point(76, 225);
			this->cajaXf->Name = L"cajaXf";
			this->cajaXf->Size = System::Drawing::Size(100, 20);
			this->cajaXf->TabIndex = 10;
			this->cajaXf->Text = L"2";
			this->cajaXf->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaXf_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(56, 201);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"si";
			// 
			// cajaXi
			// 
			this->cajaXi->Location = System::Drawing::Point(76, 198);
			this->cajaXi->Name = L"cajaXi";
			this->cajaXi->Size = System::Drawing::Size(100, 20);
			this->cajaXi->TabIndex = 8;
			this->cajaXi->Text = L"0.5";
			this->cajaXi->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaXi_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(173, 65);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Hallar polos y ceros de una función\r\nde transferencia tras aplicar la \r\nTransform"
				L"ada de Laplace\r\n(ingresar una función en el dominio\r\nde Laplace (s)).";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"H(s) = ";
			// 
			// cajaDenominador
			// 
			this->cajaDenominador->Location = System::Drawing::Point(76, 150);
			this->cajaDenominador->Name = L"cajaDenominador";
			this->cajaDenominador->Size = System::Drawing::Size(130, 20);
			this->cajaDenominador->TabIndex = 2;
			this->cajaDenominador->Text = L"sin(exp(s))-1";
			this->cajaDenominador->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaDenominador_TextChanged);
			// 
			// cajaNumerador
			// 
			this->cajaNumerador->Location = System::Drawing::Point(76, 121);
			this->cajaNumerador->Name = L"cajaNumerador";
			this->cajaNumerador->Size = System::Drawing::Size(130, 20);
			this->cajaNumerador->TabIndex = 1;
			this->cajaNumerador->Text = L"s^s-2";
			this->cajaNumerador->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaNumerador_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(68, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"-----------------------------------------------";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Funcion de transferencia:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->botonLimpiar);
			this->groupBox2->Controls->Add(this->botonCero);
			this->groupBox2->Controls->Add(this->botonPolo);
			this->groupBox2->Location = System::Drawing::Point(254, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(158, 339);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Proceso";
			// 
			// botonLimpiar
			// 
			this->botonLimpiar->Location = System::Drawing::Point(7, 196);
			this->botonLimpiar->Name = L"botonLimpiar";
			this->botonLimpiar->Size = System::Drawing::Size(145, 47);
			this->botonLimpiar->TabIndex = 2;
			this->botonLimpiar->Text = L"Limpiar campos y resultados";
			this->botonLimpiar->UseVisualStyleBackColor = true;
			this->botonLimpiar->Click += gcnew System::EventHandler(this, &MyForm::botonLimpiar_Click);
			// 
			// botonCero
			// 
			this->botonCero->Location = System::Drawing::Point(6, 79);
			this->botonCero->Name = L"botonCero";
			this->botonCero->Size = System::Drawing::Size(145, 47);
			this->botonCero->TabIndex = 1;
			this->botonCero->Text = L"Calcular Cero\r\nen el Intervalo";
			this->botonCero->UseVisualStyleBackColor = true;
			this->botonCero->Click += gcnew System::EventHandler(this, &MyForm::botonCero_Click);
			// 
			// botonPolo
			// 
			this->botonPolo->Location = System::Drawing::Point(6, 140);
			this->botonPolo->Name = L"botonPolo";
			this->botonPolo->Size = System::Drawing::Size(145, 47);
			this->botonPolo->TabIndex = 0;
			this->botonPolo->Text = L"Calcular Polo\r\nen el Intervalo\r\n";
			this->botonPolo->UseVisualStyleBackColor = true;
			this->botonPolo->Click += gcnew System::EventHandler(this, &MyForm::botonPolo_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->salida);
			this->groupBox3->Location = System::Drawing::Point(419, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(380, 339);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Salida";
			// 
			// salida
			// 
			this->salida->FormattingEnabled = true;
			this->salida->Location = System::Drawing::Point(7, 20);
			this->salida->Name = L"salida";
			this->salida->Size = System::Drawing::Size(367, 303);
			this->salida->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(811, 364);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"proyectoTarea";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void botonLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {
		cajaDenominador->Clear();
		cajaNumerador->Clear();
		cajaXi->Clear();
		cajaXf->Clear();
		cajaIteraciones->Clear();
		salida->Items->Clear();
	}
	private: System::Void botonCero_Click(System::Object^  sender, System::EventArgs^  e) {
		senl obj(Convert::ToInt32(cajaIteraciones->Text));
		double s;
		try {
			obj.secante(Convert::ToDouble(cajaXi->Text), Convert::ToDouble(cajaXf->Text), 0.000001, s, cajaNumerador->Text);
			salida->Items->Add("En el intervalo [" + Convert::ToDouble(cajaXi->Text) + " , " + Convert::ToDouble(cajaXf->Text) + "], existe un cero en s= " + s);
		}
		catch (FormatException^ e) {
			salida->Items->Add("Error");
		}
	}
	private: System::Void botonPolo_Click(System::Object^  sender, System::EventArgs^  e) {
		senl obj(Convert::ToInt32(cajaIteraciones->Text));
		double s;

		try {
			obj.secante(Convert::ToDouble(cajaXi->Text), Convert::ToDouble(cajaXf->Text), 0.000001, s, cajaDenominador->Text);
			salida->Items->Add("En el intervalo [" + Convert::ToDouble(cajaXi->Text) + " , " + Convert::ToDouble(cajaXf->Text) + "], existe un polo en s= " + s);
		}
		catch (FormatException^ e) {
			salida->Items->Add("Error");
		}
	}
	private: System::Void botonInfo_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
	private: System::Void cajaNumerador_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cajaDenominador->Text != "" && cajaNumerador->Text != "" && cajaIteraciones->Text != "" && cajaXf->Text != "" && cajaXi->Text != "") {
			botonCero->Enabled = true;
			botonPolo->Enabled = true;
		}
		else {
			botonCero->Enabled = !true;
			botonPolo->Enabled = !true;
		}
	}
	private: System::Void cajaDenominador_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cajaDenominador->Text != "" && cajaNumerador->Text != "" && cajaIteraciones->Text != "" && cajaXf->Text != "" && cajaXi->Text != "") {
			botonCero->Enabled = true;
			botonPolo->Enabled = true;
		}
		else {
			botonCero->Enabled = !true;
			botonPolo->Enabled = !true;
		}
	}
	private: System::Void cajaXi_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cajaDenominador->Text != "" && cajaNumerador->Text != "" && cajaIteraciones->Text != "" && cajaXf->Text != "" && cajaXi->Text != "") {
			botonCero->Enabled = true;
			botonPolo->Enabled = true;
		}
		else {
			botonCero->Enabled = !true;
			botonPolo->Enabled = !true;
		}
	}
	private: System::Void cajaXf_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cajaDenominador->Text != "" && cajaNumerador->Text != "" && cajaIteraciones->Text != "" && cajaXf->Text != "" && cajaXi->Text != "") {
			botonCero->Enabled = true;
			botonPolo->Enabled = true;
		}
		else {
			botonCero->Enabled = !true;
			botonPolo->Enabled = !true;
		}
	}
	private: System::Void cajaIteraciones_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cajaDenominador->Text != "" && cajaNumerador->Text != "" && cajaIteraciones->Text != "" && cajaXf->Text != "" && cajaXi->Text != "") {
			botonCero->Enabled = true;
			botonPolo->Enabled = true;
		}
		else {
			botonCero->Enabled = !true;
			botonPolo->Enabled = !true;
		}
	}
};
}
