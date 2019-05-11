#include "Integral.h"
#include "GraficadorFx.h"

#pragma once
using info::lundin::math::ExpressionParser;

namespace trapecioCLRGraficLundin {				//Cambiar CLRWindowsForms por nombre del proyecto

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

	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->botonLimpiar = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
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
			// cajaFuncion
			// 
			this->cajaFuncion->Location = System::Drawing::Point(55, 101);
			this->cajaFuncion->Name = L"cajaFuncion";
			this->cajaFuncion->Size = System::Drawing::Size(100, 20);
			this->cajaFuncion->TabIndex = 9;
			this->cajaFuncion->Text = L"Escriba funcion";
			this->cajaFuncion->Click += gcnew System::EventHandler(this, &MyForm::cajaFuncion_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(164, 65);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Instrucciones:\r\n1. Escriba una funcion.\r\n2. Ingrese xa (valor minimo de x).\r\n3. I"
				L"ngrese xb (valor maximo de x).\r\n4. Ingrese n.";
			// 
			// cajaN
			// 
			this->cajaN->Location = System::Drawing::Point(55, 190);
			this->cajaN->Name = L"cajaN";
			this->cajaN->Size = System::Drawing::Size(100, 20);
			this->cajaN->TabIndex = 7;
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Funcion";
			// 
			// cajaXb
			// 
			this->cajaXb->Location = System::Drawing::Point(55, 164);
			this->cajaXb->Name = L"cajaXb";
			this->cajaXb->Size = System::Drawing::Size(100, 20);
			this->cajaXb->TabIndex = 4;
			this->cajaXb->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaXb_TextChanged);
			// 
			// cajaXa
			// 
			this->cajaXa->Location = System::Drawing::Point(55, 138);
			this->cajaXa->Name = L"cajaXa";
			this->cajaXa->Size = System::Drawing::Size(100, 20);
			this->cajaXa->TabIndex = 3;
			this->cajaXa->TextChanged += gcnew System::EventHandler(this, &MyForm::cajaXa_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"xb";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 141);
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
			this->botonIntegrar->TabIndex = 0;
			this->botonIntegrar->Text = L"Integrar (trapecio)";
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
			this->button2->TabIndex = 1;
			this->button2->Text = L"Info";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Controls->Add(this->botonLimpiar);
			this->groupBox3->Controls->Add(this->listBox1);
			this->groupBox3->Location = System::Drawing::Point(198, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(704, 313);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Salida";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(279, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(419, 281);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// botonLimpiar
			// 
			this->botonLimpiar->Location = System::Drawing::Point(52, 277);
			this->botonLimpiar->Name = L"botonLimpiar";
			this->botonLimpiar->Size = System::Drawing::Size(146, 23);
			this->botonLimpiar->TabIndex = 2;
			this->botonLimpiar->Text = L"Limpiar";
			this->botonLimpiar->UseVisualStyleBackColor = true;
			this->botonLimpiar->Click += gcnew System::EventHandler(this, &MyForm::botonLimpiar_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(7, 20);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(255, 251);
			this->listBox1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(914, 336);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Integral. Trapecio";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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

		int cf = pictureBox1->Width;
		int ff = pictureBox1->Height;
		int ci = 1;
		Graphics^ g;
		g = pictureBox1->CreateGraphics();
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
		Pen^ plumaAzul = gcnew Pen(Color::DarkBlue, 1.0f);
		Pen^ plumaGris = gcnew Pen(Color::Gray, 1.0f);
		g->Clear(System::Drawing::Color::White);

		int n = cf - ci;
		GraficadorFx obj(n);
		double xi = Convert::ToDouble(cajaXa->Text);
		double xf = Convert::ToDouble(cajaXb->Text);

		obj.GraficaXY(xi, xf, cf, ff, cajaFuncion->Text);
		int j = 1;
		for (int k = 0; k < n - 1; k++) {
			g->DrawLine(plumaAzul, obj.C[k], obj.F[k], obj.C[j], obj.F[j]);
			j++;
		}

		int divisionVertical = (int)(cf / fabs(xf - xi));
		int divisionHorizontal = (int)(ff / fabs(obj.yf - obj.yi));

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

		listBox1->Items->Add(
			A.trapecio(Convert::ToDouble(cajaXa->Text), Convert::ToDouble(cajaXb->Text), Convert::ToDouble(cajaN->Text), cajaFuncion->Text)
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
		Graphics^ g;
		g = pictureBox1->CreateGraphics();
		cajaXa->Clear();
		cajaXb->Clear();
		cajaN->Clear();
		cajaFuncion->Clear();
		listBox1->Items->Clear();
		g->Clear(System::Drawing::Color::White);
	}
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ g = e->Graphics;
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
	}
	private: System::Void cajaFuncion_Click(System::Object^  sender, System::EventArgs^  e) {
		if(ind == 0)	cajaFuncion->Clear();
		else;
		ind++;
	}
};
}
