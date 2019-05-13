#include "Integral.h"

#pragma once

namespace practica19Num16 {				//Cambiar CLRWindowsForms por nombre del proyecto

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
			ind = 0;
			comprobarBotones();

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

	public:
		int ind;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  cajaXb;

	private: System::Windows::Forms::TextBox^  cajaXa;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  cajaN;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  botonIntegrar;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  botonLimpiar;
	private: System::Windows::Forms::TextBox^  cajaFuncion;


	private: System::Windows::Forms::Label^  label6;

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
			this->cajaFuncion = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cajaN = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cajaXb = (gcnew System::Windows::Forms::TextBox());
			this->cajaXa = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->botonIntegrar = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->botonLimpiar = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->cajaFuncion);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->cajaN);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->cajaXb);
			this->groupBox1->Controls->Add(this->cajaXa);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(179, 216);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entrada";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(30, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 42);
			this->label6->TabIndex = 10;
			this->label6->Text = L"∫";
			// 
			// cajaFuncion
			// 
			this->cajaFuncion->Enabled = false;
			this->cajaFuncion->Location = System::Drawing::Point(60, 132);
			this->cajaFuncion->Name = L"cajaFuncion";
			this->cajaFuncion->Size = System::Drawing::Size(88, 20);
			this->cajaFuncion->TabIndex = 2;
			this->cajaFuncion->Text = L"sin(x)";
			this->cajaFuncion->Click += gcnew System::EventHandler(this, &MyForm::cajaFuncion_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(132, 65);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Instrucciones:\r\n1. Funcion: sin(x)\r\n2. xa = 0\r\n3.xb = 2*pi = 6.283185307\r\n4. Ingr"
				L"ese n.";
			// 
			// cajaN
			// 
			this->cajaN->Location = System::Drawing::Point(59, 190);
			this->cajaN->Name = L"cajaN";
			this->cajaN->Size = System::Drawing::Size(56, 20);
			this->cajaN->TabIndex = 3;
			this->cajaN->Text = L"512";
			this->cajaN->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaN_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(152, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"dx";
			// 
			// cajaXb
			// 
			this->cajaXb->Location = System::Drawing::Point(26, 96);
			this->cajaXb->Name = L"cajaXb";
			this->cajaXb->Size = System::Drawing::Size(36, 20);
			this->cajaXb->TabIndex = 1;
			this->cajaXb->Text = L"6.283185307";
			this->cajaXb->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaXb_TextChanged);
			// 
			// cajaXa
			// 
			this->cajaXa->Location = System::Drawing::Point(26, 163);
			this->cajaXa->Name = L"cajaXa";
			this->cajaXa->Size = System::Drawing::Size(36, 20);
			this->cajaXa->TabIndex = 0;
			this->cajaXa->Text = L"0";
			this->cajaXa->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaXa_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"xb";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"xa";
			// 
			// botonIntegrar
			// 
			this->botonIntegrar->Location = System::Drawing::Point(20, 20);
			this->botonIntegrar->Name = L"botonIntegrar";
			this->botonIntegrar->Size = System::Drawing::Size(146, 23);
			this->botonIntegrar->TabIndex = 4;
			this->botonIntegrar->Text = L"Integrar (Simpson 1/3)";
			this->botonIntegrar->UseVisualStyleBackColor = true;
			this->botonIntegrar->Click += gcnew System::EventHandler(this, &MyForm::botonIntegrar_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->botonIntegrar);
			this->groupBox2->Location = System::Drawing::Point(13, 236);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(179, 90);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Proceso";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(20, 50);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Info";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->botonLimpiar);
			this->groupBox3->Controls->Add(this->listBox1);
			this->groupBox3->Location = System::Drawing::Point(198, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(273, 313);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Salida";
			// 
			// botonLimpiar
			// 
			this->botonLimpiar->Location = System::Drawing::Point(52, 277);
			this->botonLimpiar->Name = L"botonLimpiar";
			this->botonLimpiar->Size = System::Drawing::Size(146, 23);
			this->botonLimpiar->TabIndex = 6;
			this->botonLimpiar->Text = L"Limpiar";
			this->botonLimpiar->UseVisualStyleBackColor = true;
			this->botonLimpiar->Click += gcnew System::EventHandler(this, &MyForm::botonLimpiar_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->Location = System::Drawing::Point(12, 20);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(255, 251);
			this->listBox1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 336);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Practica 19. Integral por metodo de Simpson 1/3";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}

	private: System::Void botonIntegrar_Click(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
		Integral A;
		listBox1->Items->Add(
			"integral(" + cajaFuncion->Text + ", " + cajaXa->Text + ", " + cajaXb->Text + ")= " +
			A.Simpson(Convert::ToDouble(cajaXa->Text), Convert::ToDouble(cajaXb->Text), Convert::ToDouble(cajaN->Text), cajaFuncion->Text)
		);
	}
	public: void comprobarBotones(void) {
		if (cajaN->Text != "" && cajaXa->Text != "" && cajaXb->Text != "" && cajaFuncion->Text != "") {
			botonIntegrar->Enabled = true;
		}
		else    botonIntegrar->Enabled = false;
	}
	private: System::Void cajaXa_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
	}
	private: System::Void cajaXb_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
	}
	private: System::Void cajaN_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones();
	}
	private: System::Void botonLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {
		cajaXa->Clear();
		cajaXb->Clear();
		cajaN->Clear();
		cajaFuncion->Clear();
		listBox1->Items->Clear();
	}
	private: System::Void cajaFuncion_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ind == 0);
		else;
		ind++;
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
