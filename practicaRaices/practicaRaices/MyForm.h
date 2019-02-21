#include <math.h>
#include "GraficadorFx.h"
#include "senl.h"

#pragma once

namespace CLRWindowsForms {				//Cambiar CLRWindowsForms por nombre del proyecto

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
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  cajaFuncion;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  cajaXf;
	private: System::Windows::Forms::TextBox^  cajaXi;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  botonGraficar;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  cajaResultado;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  botonResolver;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  cajaIteraciones;
	private: System::Windows::Forms::Button^  botonLimpiar;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cajaFuncion = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cajaXf = (gcnew System::Windows::Forms::TextBox());
			this->cajaXi = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->botonResolver = (gcnew System::Windows::Forms::Button());
			this->botonGraficar = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cajaResultado = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->botonLimpiar = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->cajaIteraciones);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->cajaFuncion);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->cajaXf);
			this->groupBox1->Controls->Add(this->cajaXi);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 339);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entrada";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(-1, 102);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Numero de iteraciones";
			// 
			// cajaIteraciones
			// 
			this->cajaIteraciones->Location = System::Drawing::Point(118, 99);
			this->cajaIteraciones->Name = L"cajaIteraciones";
			this->cajaIteraciones->Size = System::Drawing::Size(76, 20);
			this->cajaIteraciones->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(-1, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"f(x) = ";
			// 
			// cajaFuncion
			// 
			this->cajaFuncion->Location = System::Drawing::Point(33, 73);
			this->cajaFuncion->Name = L"cajaFuncion";
			this->cajaFuncion->Size = System::Drawing::Size(161, 20);
			this->cajaFuncion->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"xf";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"xi";
			// 
			// cajaXf
			// 
			this->cajaXf->Location = System::Drawing::Point(33, 46);
			this->cajaXf->Name = L"cajaXf";
			this->cajaXf->Size = System::Drawing::Size(161, 20);
			this->cajaXf->TabIndex = 1;
			// 
			// cajaXi
			// 
			this->cajaXi->Location = System::Drawing::Point(33, 19);
			this->cajaXi->Name = L"cajaXi";
			this->cajaXi->Size = System::Drawing::Size(161, 20);
			this->cajaXi->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->botonLimpiar);
			this->groupBox2->Controls->Add(this->botonResolver);
			this->groupBox2->Controls->Add(this->botonGraficar);
			this->groupBox2->Location = System::Drawing::Point(220, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(183, 339);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Proceso";
			// 
			// botonResolver
			// 
			this->botonResolver->Location = System::Drawing::Point(6, 49);
			this->botonResolver->Name = L"botonResolver";
			this->botonResolver->Size = System::Drawing::Size(165, 23);
			this->botonResolver->TabIndex = 1;
			this->botonResolver->Text = L"Resolver por Bisección";
			this->botonResolver->UseVisualStyleBackColor = true;
			this->botonResolver->Click += gcnew System::EventHandler(this, &MyForm::botonResolver_Click);
			// 
			// botonGraficar
			// 
			this->botonGraficar->Location = System::Drawing::Point(6, 19);
			this->botonGraficar->Name = L"botonGraficar";
			this->botonGraficar->Size = System::Drawing::Size(165, 23);
			this->botonGraficar->TabIndex = 0;
			this->botonGraficar->Text = L"Graficar";
			this->botonGraficar->UseVisualStyleBackColor = true;
			this->botonGraficar->Click += gcnew System::EventHandler(this, &MyForm::botonGraficar_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->cajaResultado);
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Location = System::Drawing::Point(409, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(498, 339);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Salida";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(334, 44);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"x =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(334, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Resultado";
			// 
			// cajaResultado
			// 
			this->cajaResultado->Enabled = false;
			this->cajaResultado->Location = System::Drawing::Point(361, 41);
			this->cajaResultado->Name = L"cajaResultado";
			this->cajaResultado->Size = System::Drawing::Size(129, 20);
			this->cajaResultado->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(6, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(311, 311);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// botonLimpiar
			// 
			this->botonLimpiar->Location = System::Drawing::Point(7, 288);
			this->botonLimpiar->Name = L"botonLimpiar";
			this->botonLimpiar->Size = System::Drawing::Size(164, 44);
			this->botonLimpiar->TabIndex = 2;
			this->botonLimpiar->Text = L"Limpiar";
			this->botonLimpiar->UseVisualStyleBackColor = true;
			this->botonLimpiar->Click += gcnew System::EventHandler(this, &MyForm::botonLimpiar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(919, 364);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Practica Raices";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void botonGraficar_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g;
		g = pictureBox1->CreateGraphics();
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
		Pen^ plumaAzul = gcnew Pen(Color::DarkBlue, 1.0f);
		Pen^ plumaGris = gcnew Pen(Color::Gray, 1.0f);
		g->Clear(System::Drawing::Color::White);
		
		double xi, xf;
		int cf, ff;
		cf = pictureBox1->Width;
		ff = pictureBox1->Height;
		int ci = 1;

		int n;
		double divisionHorizontal, divisionVertical;

		try {
			n = cf - ci;
			GraficadorFx obj(n);
			xi = Convert::ToDouble(cajaXi->Text);
			xf = Convert::ToDouble(cajaXf->Text);

			obj.GraficaXY(xi, xf, cf, ff, cajaFuncion->Text);
			int j = 1;
			for (int k = 0; k < n - 1; k++) {
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
		catch (FormatException^ e) {
			cajaResultado->Text = "Error";
		}
	}
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ g = e->Graphics;
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
		g->Clear(System::Drawing::Color::White);
	}
	private: System::Void botonResolver_Click(System::Object^  sender, System::EventArgs^  e) {
		double xi, xf;
		int n;
		double divisionHorizontal, divisionVertical;

		double xr = 0;

		try {
			xi = Convert::ToDouble(cajaXi->Text);
			xf = Convert::ToDouble(cajaXf->Text);
			n = Convert::ToDouble(cajaIteraciones->Text);

			senl obj(n);
			obj.biseccion(xi, xf, 0.00001, xr, cajaFuncion->Text);

			cajaResultado->Text = Convert::ToString(xr);
		}
		catch (FormatException^ e) {
			cajaResultado->Text = "Error";
		}
	}
	private: System::Void botonLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g;
		g = pictureBox1->CreateGraphics();
		g->Clear(System::Drawing::Color::White);

		cajaXi->Clear();
		cajaXf->Clear();
		cajaFuncion->Clear();
		cajaIteraciones->Clear();
		cajaResultado->Clear();
	}
};
}
