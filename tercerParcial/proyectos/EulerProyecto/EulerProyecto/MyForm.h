#include <msclr/marshal_cppstd.h>
#include <string>
#include <iostream>
#include <fstream>
#include "Integral.h"
#include "Derivada.h"
#include "GraficadorFx.h"
#include "EDO.h"

#pragma once
using info::lundin::math::ExpressionParser;

namespace EulerProyecto {				//Cambiar CLRWindowsForms por nombre del proyecto

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
			comprobarBotones4();

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
		int ind, selInductor = 0;
	public:	int n, ng, selected;
			int m;
			double *x;
			double *y;
			double *z;
			double **V;
			double **Vt;
			double **S;
			double **St;
			String^ polinomio;
			String^ ecuacionRecta;

	public:
	private: System::Windows::Forms::GroupBox^  groupBox10;
	private: System::Windows::Forms::Button^  limpiar4;
	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::GroupBox^  groupBox11;
	private: System::Windows::Forms::Button^  info4;
	private: System::Windows::Forms::Button^  botonResolver4;
	private: System::Windows::Forms::GroupBox^  groupBox12;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::TextBox^  cajaFuncion4;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  cajaE0;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TextBox^  cajaN4;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  cajaT4;
	private: System::Windows::Forms::TextBox^  cajaT0;
	private: System::Windows::Forms::Label^  cajaT;
	private: System::Windows::Forms::Label^  label31;







	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::Label^  label3;

	public:

































































































































	protected:

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
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->limpiar4 = (gcnew System::Windows::Forms::Button());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->info4 = (gcnew System::Windows::Forms::Button());
			this->botonResolver4 = (gcnew System::Windows::Forms::Button());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->cajaFuncion4 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->cajaE0 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->cajaN4 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->cajaT4 = (gcnew System::Windows::Forms::TextBox());
			this->cajaT0 = (gcnew System::Windows::Forms::TextBox());
			this->cajaT = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->limpiar4);
			this->groupBox10->Controls->Add(this->listBox4);
			this->groupBox10->Location = System::Drawing::Point(874, 12);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(292, 481);
			this->groupBox10->TabIndex = 14;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Salida";
			// 
			// limpiar4
			// 
			this->limpiar4->Location = System::Drawing::Point(79, 441);
			this->limpiar4->Name = L"limpiar4";
			this->limpiar4->Size = System::Drawing::Size(146, 23);
			this->limpiar4->TabIndex = 6;
			this->limpiar4->Text = L"Limpiar";
			this->limpiar4->UseVisualStyleBackColor = true;
			this->limpiar4->Click += gcnew System::EventHandler(this, &MyForm::limpiar4_Click);
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->HorizontalScrollbar = true;
			this->listBox4->Location = System::Drawing::Point(7, 20);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(279, 407);
			this->listBox4->TabIndex = 0;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->info4);
			this->groupBox11->Controls->Add(this->botonResolver4);
			this->groupBox11->Location = System::Drawing::Point(696, 319);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(179, 120);
			this->groupBox11->TabIndex = 13;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Proceso";
			// 
			// info4
			// 
			this->info4->Location = System::Drawing::Point(20, 91);
			this->info4->Name = L"info4";
			this->info4->Size = System::Drawing::Size(146, 23);
			this->info4->TabIndex = 5;
			this->info4->Text = L"Info";
			this->info4->UseVisualStyleBackColor = true;
			this->info4->Click += gcnew System::EventHandler(this, &MyForm::info4_Click);
			// 
			// botonResolver4
			// 
			this->botonResolver4->Location = System::Drawing::Point(20, 20);
			this->botonResolver4->Name = L"botonResolver4";
			this->botonResolver4->Size = System::Drawing::Size(146, 65);
			this->botonResolver4->TabIndex = 5;
			this->botonResolver4->Text = L"Resolver";
			this->botonResolver4->UseVisualStyleBackColor = true;
			this->botonResolver4->Click += gcnew System::EventHandler(this, &MyForm::botonResolver4_Click);
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->label2);
			this->groupBox12->Controls->Add(this->label1);
			this->groupBox12->Controls->Add(this->label35);
			this->groupBox12->Controls->Add(this->cajaFuncion4);
			this->groupBox12->Controls->Add(this->label23);
			this->groupBox12->Controls->Add(this->cajaE0);
			this->groupBox12->Controls->Add(this->label24);
			this->groupBox12->Controls->Add(this->label25);
			this->groupBox12->Controls->Add(this->label26);
			this->groupBox12->Controls->Add(this->label27);
			this->groupBox12->Controls->Add(this->label28);
			this->groupBox12->Controls->Add(this->cajaN4);
			this->groupBox12->Controls->Add(this->label29);
			this->groupBox12->Controls->Add(this->cajaT4);
			this->groupBox12->Controls->Add(this->cajaT0);
			this->groupBox12->Controls->Add(this->cajaT);
			this->groupBox12->Controls->Add(this->label31);
			this->groupBox12->Location = System::Drawing::Point(689, 12);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(179, 301);
			this->groupBox12->TabIndex = 12;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Entrada";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 104);
			this->label2->TabIndex = 21;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 17;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(34, 151);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(134, 13);
			this->label35->TabIndex = 16;
			this->label35->Text = L"*Ingrese como funcion de t";
			// 
			// cajaFuncion4
			// 
			this->cajaFuncion4->Location = System::Drawing::Point(46, 170);
			this->cajaFuncion4->Name = L"cajaFuncion4";
			this->cajaFuncion4->Size = System::Drawing::Size(118, 20);
			this->cajaFuncion4->TabIndex = 15;
			this->cajaFuncion4->Text = L"(0.16-(2.4*((0.879853)^t)*sin(1.826*t))^2)/2.16";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(97, 203);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(19, 13);
			this->label23->TabIndex = 14;
			this->label23->Text = L"e0";
			// 
			// cajaE0
			// 
			this->cajaE0->Location = System::Drawing::Point(117, 200);
			this->cajaE0->Name = L"cajaE0";
			this->cajaE0->Size = System::Drawing::Size(36, 20);
			this->cajaE0->TabIndex = 2;
			this->cajaE0->Text = L"8";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(26, 171);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(18, 20);
			this->label24->TabIndex = 12;
			this->label24->Text = L"=";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(4, 159);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(27, 20);
			this->label25->TabIndex = 11;
			this->label25->Text = L"de";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(5, 182);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(23, 20);
			this->label26->TabIndex = 10;
			this->label26->Text = L"dt";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(3, 162);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(27, 20);
			this->label27->TabIndex = 9;
			this->label27->Text = L"__";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(7, 20);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(0, 13);
			this->label28->TabIndex = 8;
			// 
			// cajaN4
			// 
			this->cajaN4->Location = System::Drawing::Point(53, 253);
			this->cajaN4->Name = L"cajaN4";
			this->cajaN4->Size = System::Drawing::Size(100, 20);
			this->cajaN4->TabIndex = 4;
			this->cajaN4->Text = L"2";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(34, 256);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(13, 13);
			this->label29->TabIndex = 6;
			this->label29->Text = L"n";
			// 
			// cajaT4
			// 
			this->cajaT4->Location = System::Drawing::Point(72, 226);
			this->cajaT4->Name = L"cajaT4";
			this->cajaT4->Size = System::Drawing::Size(36, 20);
			this->cajaT4->TabIndex = 3;
			this->cajaT4->Text = L"32";
			// 
			// cajaT0
			// 
			this->cajaT0->Location = System::Drawing::Point(46, 200);
			this->cajaT0->Name = L"cajaT0";
			this->cajaT0->Size = System::Drawing::Size(36, 20);
			this->cajaT0->TabIndex = 1;
			this->cajaT0->Text = L"0";
			// 
			// cajaT
			// 
			this->cajaT->AutoSize = true;
			this->cajaT->Location = System::Drawing::Point(57, 229);
			this->cajaT->Name = L"cajaT";
			this->cajaT->Size = System::Drawing::Size(10, 13);
			this->cajaT->TabIndex = 2;
			this->cajaT->Text = L"t";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(31, 203);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(16, 13);
			this->label31->TabIndex = 1;
			this->label31->Text = L"t0";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(362, 12);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(314, 416);
			this->label32->TabIndex = 20;
			this->label32->Text = resources->GetString(L"label32.Text");
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(12, 9);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(344, 481);
			this->label22->TabIndex = 19;
			this->label22->Text = resources->GetString(L"label22.Text");
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(15, 92);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(312, 162);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 21;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(411, 299);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(243, 50);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 26;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(411, 250);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(243, 31);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 25;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(455, 159);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(118, 47);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 24;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(447, 42);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(136, 44);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 23;
			this->pictureBox11->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(351, 442);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(405, 45);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Se utilizó este ejemplo para comprobar que existe un error de\r\nmétodo bastante gr"
				L"ande, por lo que se recomienda utilizar el\r\nmétodo de Runge-Kutta.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1183, 498);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->groupBox10);
			this->Controls->Add(this->groupBox11);
			this->Controls->Add(this->groupBox12);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Proyecto EDO Euler. Sistema de control PD.";
			this->groupBox10->ResumeLayout(false);
			this->groupBox11->ResumeLayout(false);
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		///////////////////EDO
		/////////////////////////
	private: System::Void limpiar4_Click(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones4();
		cajaT0->Clear();
		cajaT4->Clear();
		cajaE0->Clear();
		cajaN4->Clear();
		cajaFuncion4->Clear();
		listBox4->Items->Clear();
	}
	private: System::Void info4_Click(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones4();
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
	public: void comprobarBotones4(void) {
		if (cajaN4->Text != "" && cajaT0->Text != "" && cajaT4->Text != "" && cajaE0->Text != "" && cajaFuncion4->Text != "") {
			botonResolver4->Enabled = true;
		}
		else    botonResolver4->Enabled = false;
	}
	private: System::Void cajaFuncion4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones4();
	}
	private: System::Void cajaT0_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones4();
	}
	private: System::Void cajaE0_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones4();
	}
	private: System::Void cajaT4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones4();
	}
	private: System::Void cajaN4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones4();
	}
	private: System::Void botonResolver4_Click(System::Object^  sender, System::EventArgs^  e) {
		comprobarBotones4();
		EDO A;
		listBox4->Items->Add("F(e,t)= " + cajaFuncion4->Text);

		listBox4->Items->Add(
			"e(" + cajaT4->Text + ")=" +
			A.Euler(Convert::ToDouble(cajaT0->Text), Convert::ToDouble(cajaE0->Text), Convert::ToDouble(cajaT4->Text), Convert::ToDouble(cajaN4->Text), cajaFuncion4->Text)
		);
	}
	};
}
