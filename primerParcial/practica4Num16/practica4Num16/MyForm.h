#include "senl.h"
#include "GraficadorFx.h"
#pragma once

namespace practica4Num16 {				//Cambiar CLRWindowsForms por nombre del proyecto

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
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  cajaXf;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  cajaXi;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  botonResolver;
	private: System::Windows::Forms::Button^  botonGraficar;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  botonLimpiar;
	private: System::Windows::Forms::ListBox^  resultados;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  botonGraficar2;
	private: System::Windows::Forms::Label^  label8;
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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cajaIteraciones = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cajaXf = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cajaXi = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->botonGraficar2 = (gcnew System::Windows::Forms::Button());
			this->botonLimpiar = (gcnew System::Windows::Forms::Button());
			this->botonResolver = (gcnew System::Windows::Forms::Button());
			this->botonGraficar = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->resultados = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->botonInfo = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->botonInfo);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->cajaIteraciones);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->cajaXf);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->cajaXi);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 339);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entrada";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 89);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Iteraciones";
			// 
			// cajaIteraciones
			// 
			this->cajaIteraciones->Location = System::Drawing::Point(73, 86);
			this->cajaIteraciones->Name = L"cajaIteraciones";
			this->cajaIteraciones->Size = System::Drawing::Size(109, 20);
			this->cajaIteraciones->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(142, 184);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"= 0";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(44, 181);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(96, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"exp(-x)*cos(x) ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(142, 149);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"= 0";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(44, 146);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(96, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"x*exp(-x)+tan(x) ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Ecuaciones a resolver:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 184);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"g(x) =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"f(x) =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"xf";
			// 
			// cajaXf
			// 
			this->cajaXf->Location = System::Drawing::Point(28, 59);
			this->cajaXf->Name = L"cajaXf";
			this->cajaXf->Size = System::Drawing::Size(154, 20);
			this->cajaXf->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"xi";
			// 
			// cajaXi
			// 
			this->cajaXi->Location = System::Drawing::Point(28, 32);
			this->cajaXi->Name = L"cajaXi";
			this->cajaXi->Size = System::Drawing::Size(154, 20);
			this->cajaXi->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->botonGraficar2);
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
			// botonGraficar2
			// 
			this->botonGraficar2->Location = System::Drawing::Point(7, 51);
			this->botonGraficar2->Name = L"botonGraficar2";
			this->botonGraficar2->Size = System::Drawing::Size(164, 23);
			this->botonGraficar2->TabIndex = 6;
			this->botonGraficar2->Text = L"Graficar g(x)";
			this->botonGraficar2->UseVisualStyleBackColor = true;
			this->botonGraficar2->Click += gcnew System::EventHandler(this, &MyForm::botonGraficar2_Click);
			// 
			// botonLimpiar
			// 
			this->botonLimpiar->Location = System::Drawing::Point(7, 296);
			this->botonLimpiar->Name = L"botonLimpiar";
			this->botonLimpiar->Size = System::Drawing::Size(164, 37);
			this->botonLimpiar->TabIndex = 8;
			this->botonLimpiar->Text = L"Limpiar";
			this->botonLimpiar->UseVisualStyleBackColor = true;
			this->botonLimpiar->Click += gcnew System::EventHandler(this, &MyForm::botonLimpiar_Click);
			// 
			// botonResolver
			// 
			this->botonResolver->Location = System::Drawing::Point(6, 94);
			this->botonResolver->Name = L"botonResolver";
			this->botonResolver->Size = System::Drawing::Size(165, 23);
			this->botonResolver->TabIndex = 7;
			this->botonResolver->Text = L"Resolver";
			this->botonResolver->UseVisualStyleBackColor = true;
			this->botonResolver->Click += gcnew System::EventHandler(this, &MyForm::botonResolver_Click);
			// 
			// botonGraficar
			// 
			this->botonGraficar->Location = System::Drawing::Point(7, 24);
			this->botonGraficar->Name = L"botonGraficar";
			this->botonGraficar->Size = System::Drawing::Size(164, 23);
			this->botonGraficar->TabIndex = 5;
			this->botonGraficar->Text = L"Graficar f(x)";
			this->botonGraficar->UseVisualStyleBackColor = true;
			this->botonGraficar->Click += gcnew System::EventHandler(this, &MyForm::botonGraficar_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->resultados);
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Location = System::Drawing::Point(409, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(484, 339);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Salida";
			// 
			// resultados
			// 
			this->resultados->FormattingEnabled = true;
			this->resultados->Location = System::Drawing::Point(238, 24);
			this->resultados->Name = L"resultados";
			this->resultados->Size = System::Drawing::Size(240, 303);
			this->resultados->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(7, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(224, 309);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// botonInfo
			// 
			this->botonInfo->Location = System::Drawing::Point(7, 309);
			this->botonInfo->Name = L"botonInfo";
			this->botonInfo->Size = System::Drawing::Size(175, 23);
			this->botonInfo->TabIndex = 13;
			this->botonInfo->Text = L"Informacion";
			this->botonInfo->UseVisualStyleBackColor = true;
			this->botonInfo->Click += gcnew System::EventHandler(this, &MyForm::botonInfo_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(905, 364);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"practica4Num16";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ g = e->Graphics;
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
	}
	private: System::Void botonLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g;
		g = pictureBox1->CreateGraphics();

		cajaXi->Text = "";
		cajaXf->Text = "";
		cajaIteraciones->Text = "";
		resultados->Items->Clear();

		g->Clear(System::Drawing::Color::White);
	}
	private: System::Void botonGraficar_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g;
		g = pictureBox1->CreateGraphics();
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
		Pen^ plumaAzul = gcnew Pen(Color::DarkBlue, 1.0f);
		Pen^ plumaGris = gcnew Pen(Color::Gray, 1.0f);
		Pen^ plumaRoja = gcnew Pen(Color::Red, 1.0f);
		g->Clear(System::Drawing::Color::White);
		
		int cf = pictureBox1->Width;
		int ff = pictureBox1->Height;
		int ci = 1, n;
		double xi, xf;
		
		try {
			if (cajaXi->Text != "" && cajaXf->Text != "") {
				n = cf - ci;
				GraficadorFx obj(n);
				xi = Convert::ToDouble(cajaXi->Text);
				xf = Convert::ToDouble(cajaXf->Text);

				obj.GraficaXY(xi, xf, cf, ff, textBox1->Text);
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
			else resultados->Items->Add("Error");
		}
		catch (FormatException^ e) {
			resultados->Items->Add("Error");
		}
	}
	private: System::Void botonGraficar2_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g;
		g = pictureBox1->CreateGraphics();
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
		Pen^ plumaAzul = gcnew Pen(Color::DarkBlue, 1.0f);
		Pen^ plumaGris = gcnew Pen(Color::Gray, 1.0f);
		Pen^ plumaRoja = gcnew Pen(Color::Red, 1.0f);
		g->Clear(System::Drawing::Color::White);

		int cf = pictureBox1->Width;
		int ff = pictureBox1->Height;
		int ci = 1, n;
		double xi, xf;


		try {
			if (cajaXi->Text != "" && cajaXf->Text != "") {
				n = cf - ci;
				GraficadorFx obj(n);
				xi = Convert::ToDouble(cajaXi->Text);
				xf = Convert::ToDouble(cajaXf->Text);

				obj.GraficaXY(xi, xf, cf, ff, textBox2->Text);
				int j = 1;
				for (int k = 0; k < n - 1; k++) {
					g->DrawLine(plumaRoja, obj.C[k], obj.F[k], obj.C[j], obj.F[j]);
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
			else resultados->Items->Add("Error");
		}
		catch (FormatException^ e) {
			resultados->Items->Add("Error");
		}
	}
	private: System::Void botonResolver_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			int n = Convert::ToInt32(cajaIteraciones->Text);
			senl ec(n);
			double x1, x2;
			ec.biseccion(Convert::ToDouble(cajaXi->Text), Convert::ToDouble(cajaXf->Text), 0.00000001, x1, textBox1->Text);
			resultados->Items->Add("Solucion f(x):\t x = " + x1);
			ec.biseccion(Convert::ToDouble(cajaXi->Text), Convert::ToDouble(cajaXf->Text), 0.00000001, x2, textBox2->Text);
			resultados->Items->Add("Solucion g(x):\t x = " + x2);
		}
		catch (FormatException^ e) {
			resultados->Items->Add("Error");
		}
	}
	private: System::Void botonInfo_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
};
}
