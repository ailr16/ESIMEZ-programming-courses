#pragma once
#include <iostream>
#include <math.h>
#include "GraficadorFx.h"

using namespace std;
using info::lundin::math::ExpressionParser;


namespace graficador {				//Cambiar CLRWindowsForms por nombre del proyecto

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
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  cajaXi;

			 //Variables para tabular y graficar
	private: double xi, xf, n, p, ti, tf;
	private: double *x, *y;
	private: int cf, ff, yi, yf, w, h, sel;
	private: int *xn, *yn;


	private: System::Windows::Forms::ListBox^  tabla;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  cajaXf;


	private: System::Windows::Forms::Button^  botonLimpiar;
	private: System::Windows::Forms::Button^  botonGraficar;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  cajaFuncion;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  cajaPolar;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  cajaTf;
	private: System::Windows::Forms::TextBox^  cajaTi;
	private: System::Windows::Forms::RadioButton^  seleccionPolar;

	private: System::Windows::Forms::RadioButton^  seleccionRectangular;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->seleccionPolar = (gcnew System::Windows::Forms::RadioButton());
			this->seleccionRectangular = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cajaTf = (gcnew System::Windows::Forms::TextBox());
			this->cajaTi = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cajaPolar = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cajaFuncion = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cajaXf = (gcnew System::Windows::Forms::TextBox());
			this->cajaXi = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->botonGraficar = (gcnew System::Windows::Forms::Button());
			this->botonLimpiar = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabla = (gcnew System::Windows::Forms::ListBox());
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
			this->groupBox1->Controls->Add(this->seleccionPolar);
			this->groupBox1->Controls->Add(this->seleccionRectangular);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->cajaTf);
			this->groupBox1->Controls->Add(this->cajaTi);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->cajaPolar);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->cajaFuncion);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->cajaXf);
			this->groupBox1->Controls->Add(this->cajaXi);
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// seleccionPolar
			// 
			resources->ApplyResources(this->seleccionPolar, L"seleccionPolar");
			this->seleccionPolar->Name = L"seleccionPolar";
			this->seleccionPolar->TabStop = true;
			this->seleccionPolar->UseVisualStyleBackColor = true;
			// 
			// seleccionRectangular
			// 
			resources->ApplyResources(this->seleccionRectangular, L"seleccionRectangular");
			this->seleccionRectangular->Name = L"seleccionRectangular";
			this->seleccionRectangular->TabStop = true;
			this->seleccionRectangular->UseVisualStyleBackColor = true;
			this->seleccionRectangular->CheckedChanged += gcnew System::EventHandler(this, &MyForm::seleccionRectangular_CheckedChanged);
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			// 
			// cajaTf
			// 
			resources->ApplyResources(this->cajaTf, L"cajaTf");
			this->cajaTf->Name = L"cajaTf";
			// 
			// cajaTi
			// 
			resources->ApplyResources(this->cajaTi, L"cajaTi");
			this->cajaTi->Name = L"cajaTi";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// cajaPolar
			// 
			resources->ApplyResources(this->cajaPolar, L"cajaPolar");
			this->cajaPolar->Name = L"cajaPolar";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// cajaFuncion
			// 
			resources->ApplyResources(this->cajaFuncion, L"cajaFuncion");
			this->cajaFuncion->Name = L"cajaFuncion";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// cajaXf
			// 
			resources->ApplyResources(this->cajaXf, L"cajaXf");
			this->cajaXf->Name = L"cajaXf";
			// 
			// cajaXi
			// 
			resources->ApplyResources(this->cajaXi, L"cajaXi");
			this->cajaXi->Name = L"cajaXi";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->botonGraficar);
			this->groupBox2->Controls->Add(this->botonLimpiar);
			resources->ApplyResources(this->groupBox2, L"groupBox2");
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->TabStop = false;
			// 
			// botonGraficar
			// 
			resources->ApplyResources(this->botonGraficar, L"botonGraficar");
			this->botonGraficar->Name = L"botonGraficar";
			this->botonGraficar->UseVisualStyleBackColor = true;
			this->botonGraficar->Click += gcnew System::EventHandler(this, &MyForm::botonGraficar_Click);
			// 
			// botonLimpiar
			// 
			resources->ApplyResources(this->botonLimpiar, L"botonLimpiar");
			this->botonLimpiar->Name = L"botonLimpiar";
			this->botonLimpiar->UseVisualStyleBackColor = true;
			this->botonLimpiar->Click += gcnew System::EventHandler(this, &MyForm::botonLimpiar_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->tabla);
			resources->ApplyResources(this->groupBox3, L"groupBox3");
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->TabStop = false;
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// tabla
			// 
			this->tabla->FormattingEnabled = true;
			resources->ApplyResources(this->tabla, L"tabla");
			this->tabla->Name = L"tabla";
			// 
			// botonInfo
			// 
			resources->ApplyResources(this->botonInfo, L"botonInfo");
			this->botonInfo->Name = L"botonInfo";
			this->botonInfo->UseVisualStyleBackColor = true;
			this->botonInfo->Click += gcnew System::EventHandler(this, &MyForm::botonInfo_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	

	private: System::Void botonLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g;
		g = pictureBox1->CreateGraphics();

		cajaXi->Text = "";
		cajaXf->Text = "";
		cajaFuncion->Text = "";
		cajaTi->Text = "";
		cajaTf->Text = "";
		cajaPolar->Text = "";
		tabla->Items->Clear();

		g->Clear(System::Drawing::Color::White);
	}

	
	private: System::Void botonGraficar_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g;
		g = pictureBox1->CreateGraphics();
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
		Pen^ plumaAzul = gcnew Pen(Color::DarkBlue, 1.0f);
		Pen^ plumaGris = gcnew Pen(Color::Gray, 1.0f);
		g->Clear(System::Drawing::Color::White);
		tabla->Items->Clear();

		cf = pictureBox1->Width;
		ff = pictureBox1->Height;
		int ci = 1;

		double divisionHorizontal, divisionVertical;

		try {
			if (sel == 1) {
				if (cajaXi->Text != "" && cajaXf->Text != "" && cajaFuncion->Text != "") {
					n = cf - ci;
					GraficadorFx obj(n);
					xi = Convert::ToDouble(cajaXi->Text);
					xf = Convert::ToDouble(cajaXf->Text);

					obj.GraficaXY(xi, xf, cf, ff, cajaFuncion->Text);
					int j = 1;
					for (int k = 0; k < n - 1; k++) {
						tabla->Items->Add("x= " + obj.X[k] + "\ty= " + obj.Y[k]);
						g->DrawLine(plumaAzul, obj.C[k], obj.F[k], obj.C[j], obj.F[j]);
						j++;
					}

					divisionVertical = (int)(cf / abs(xf - xi));
					divisionHorizontal = (int)(ff / abs(obj.yf - obj.yi));

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
					for (int k = 0; k < cf; k += divisionVertical) g->DrawLine(plumaGris, k, 0, k, ff);
					for (int k = 0; k < ff; k += divisionHorizontal) g->DrawLine(plumaGris, 0, k, cf, k);
				}
				else tabla->Items->Add("Error");
			}

			if (sel == 2) {
				if (cajaTi->Text != "" && cajaTf->Text != "" && cajaPolar->Text != "") {
					n = cf - ci;
					GraficadorFx obj(n);
					ti = Convert::ToDouble(cajaTi->Text);
					tf = Convert::ToDouble(cajaTf->Text);

					obj.GraficaPolar(ti, tf, cf, ff, cajaPolar->Text);
					int j = 1;
					for (int k = 0; k < n - 1; k++) {
						tabla->Items->Add("t= " + obj.T[k] + "\tr= " + obj.R[k]);
						g->DrawLine(plumaAzul, obj.C[k], obj.F[k], obj.C[j], obj.F[j]);
						j++;
					}
				}
				else tabla->Items->Add("Error");
			}				
		}
		catch (FormatException^ e) {
			tabla->Items->Add("Error");
		}
	}

	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ g = e->Graphics;
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
	}

private: System::Void seleccionRectangular_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (seleccionRectangular->Checked) {
		cajaPolar->Enabled = false;
		cajaTi->Enabled = false;
		cajaTf->Enabled = false;
		cajaFuncion->Enabled = !false;
		cajaXi->Enabled = !false;
		cajaXf->Enabled = !false;
		sel = 1;

	}
	if (seleccionPolar->Checked) {
		cajaFuncion->Enabled = false;
		cajaXi->Enabled = false;
		cajaXf->Enabled = false;
		cajaPolar->Enabled = !false;
		cajaTi->Enabled = !false;
		cajaTf->Enabled = !false;
		sel = 2;
	}
}
private: System::Void botonInfo_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Diagnostics::Process::Start("lozanoRamirez.exe");
}
};
}
