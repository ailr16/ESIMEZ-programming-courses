#include "EDO.h"

#pragma once

namespace RungeKuttaCLR {				//Cambiar CLRWindowsForms por nombre del proyecto

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
			//TODO: agregar c�digo de constructor aqu�
			//
			ind = 0;
			comprobarBotones();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::TextBox^  cajaX;
	protected:


	private: System::Windows::Forms::TextBox^  cajaX0;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  cajaN;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  botonIntegrar;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  botonLimpiar;
	private: System::Windows::Forms::TextBox^  cajaY0;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label9;


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->cajaY0 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cajaN = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cajaX = (gcnew System::Windows::Forms::TextBox());
			this->cajaX0 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
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
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->cajaY0);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->cajaN);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->cajaX);
			this->groupBox1->Controls->Add(this->cajaX0);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(179, 216);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entrada";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(99, 140);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"y0";
			// 
			// cajaY0
			// 
			this->cajaY0->Location = System::Drawing::Point(119, 137);
			this->cajaY0->Name = L"cajaY0";
			this->cajaY0->Size = System::Drawing::Size(36, 20);
			this->cajaY0->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(28, 108);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 20);
			this->label8->TabIndex = 12;
			this->label8->Text = L"=";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(6, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(25, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"dy";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(7, 119);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"dx";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(5, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"__";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(155, 78);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Instrucciones:\r\n1. Seleccione una funcion.\r\n2. Ingrese x0 (valor inicial de x).\r\n"
				L"3. Ingrese x (valor final de x).\r\n4. Ingrese y0 (valor inicial de y) \r\n5. Ingres"
				L"e n.";
			// 
			// cajaN
			// 
			this->cajaN->Location = System::Drawing::Point(55, 190);
			this->cajaN->Name = L"cajaN";
			this->cajaN->Size = System::Drawing::Size(100, 20);
			this->cajaN->TabIndex = 4;
			this->cajaN->Text = L"512";
			this->cajaN->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaN_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"n";
			// 
			// cajaX
			// 
			this->cajaX->Location = System::Drawing::Point(74, 163);
			this->cajaX->Name = L"cajaX";
			this->cajaX->Size = System::Drawing::Size(36, 20);
			this->cajaX->TabIndex = 3;
			this->cajaX->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaXb_TextChanged);
			// 
			// cajaX0
			// 
			this->cajaX0->Location = System::Drawing::Point(48, 137);
			this->cajaX0->Name = L"cajaX0";
			this->cajaX0->Size = System::Drawing::Size(36, 20);
			this->cajaX0->TabIndex = 1;
			this->cajaX0->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaXa_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(12, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"x";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"x0";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"x*y", L"x/y", L"x^2/y", L"x/y^2", L"x^3/y^3" });
			this->comboBox1->Location = System::Drawing::Point(48, 107);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(115, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Seleccionar funcion";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// botonIntegrar
			// 
			this->botonIntegrar->Location = System::Drawing::Point(20, 20);
			this->botonIntegrar->Name = L"botonIntegrar";
			this->botonIntegrar->Size = System::Drawing::Size(146, 23);
			this->botonIntegrar->TabIndex = 5;
			this->botonIntegrar->Text = L"Resolver EDO (Runge-Kutta)";
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
			this->groupBox3->Size = System::Drawing::Size(274, 313);
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
			this->listBox1->Location = System::Drawing::Point(7, 20);
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
			this->Text = L"EDO. Runge-Kutta (4� orden)";
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
		EDO A;
		if (ind == 1)	listBox1->Items->Add("Funcion:\tx*y");
		if (ind == 2)	listBox1->Items->Add("Funcion:\tx/y");
		if (ind == 3)	listBox1->Items->Add("Funcion:\tx^2/y");
		if (ind == 4)	listBox1->Items->Add("Funcion:\tx/y^2");
		if (ind == 5)	listBox1->Items->Add("Funcion:\tx^3/y^3");

		listBox1->Items->Add(
			A.RK(Convert::ToDouble(cajaX0->Text), Convert::ToDouble(cajaY0->Text), Convert::ToDouble(cajaX->Text), Convert::ToDouble(cajaN->Text), ind)
		);
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		ind = comboBox1->SelectedIndex + 1;
		comprobarBotones();
	}
	public: void comprobarBotones(void) {
		if (cajaN->Text != "" && cajaX0->Text != "" && cajaX->Text != "" && cajaY0->Text != "" && ind != 0) {
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
		cajaX0->Clear();
		cajaX->Clear();
		cajaY0->Clear();
		cajaN->Clear();
		listBox1->Items->Clear();
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}