#include <stdlib.h>

#pragma once

namespace practica2Num16 {				//Cambiar CLRWindowsForms por nombre del proyecto

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
	private: System::Windows::Forms::TextBox^  cajaEntrada;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  botonGraficar;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox;
	private: System::Windows::Forms::Button^  botonLimpiar;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cajaEntrada = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->botonLimpiar = (gcnew System::Windows::Forms::Button());
			this->botonGraficar = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->botonInfo = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->cajaEntrada);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(240, 53);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entrada";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Número de rectangulos n= ";
			// 
			// cajaEntrada
			// 
			this->cajaEntrada->Location = System::Drawing::Point(147, 19);
			this->cajaEntrada->Name = L"cajaEntrada";
			this->cajaEntrada->Size = System::Drawing::Size(87, 20);
			this->cajaEntrada->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->botonLimpiar);
			this->groupBox2->Controls->Add(this->botonGraficar);
			this->groupBox2->Location = System::Drawing::Point(275, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(240, 53);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Proceso";
			// 
			// botonLimpiar
			// 
			this->botonLimpiar->Location = System::Drawing::Point(128, 18);
			this->botonLimpiar->Name = L"botonLimpiar";
			this->botonLimpiar->Size = System::Drawing::Size(106, 23);
			this->botonLimpiar->TabIndex = 1;
			this->botonLimpiar->Text = L"Limpiar";
			this->botonLimpiar->UseVisualStyleBackColor = true;
			this->botonLimpiar->Click += gcnew System::EventHandler(this, &MyForm::botonLimpiar_Click);
			// 
			// botonGraficar
			// 
			this->botonGraficar->Location = System::Drawing::Point(6, 18);
			this->botonGraficar->Name = L"botonGraficar";
			this->botonGraficar->Size = System::Drawing::Size(106, 23);
			this->botonGraficar->TabIndex = 0;
			this->botonGraficar->Text = L"Graficar";
			this->botonGraficar->UseVisualStyleBackColor = true;
			this->botonGraficar->Click += gcnew System::EventHandler(this, &MyForm::botonGraficar_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->botonInfo);
			this->groupBox3->Controls->Add(this->pictureBox);
			this->groupBox3->Location = System::Drawing::Point(13, 72);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(502, 329);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Salida";
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(6, 19);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(490, 275);
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			this->pictureBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox_Paint);
			// 
			// botonInfo
			// 
			this->botonInfo->Location = System::Drawing::Point(192, 301);
			this->botonInfo->Name = L"botonInfo";
			this->botonInfo->Size = System::Drawing::Size(75, 23);
			this->botonInfo->TabIndex = 1;
			this->botonInfo->Text = L"Informacion";
			this->botonInfo->UseVisualStyleBackColor = true;
			this->botonInfo->Click += gcnew System::EventHandler(this, &MyForm::botonInfo_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(527, 413);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ g = e->Graphics;
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
		g->Clear(Color::White);
	}
	private: System::Void botonLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g;
		g = pictureBox->CreateGraphics();
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
		Pen^ plumaAzul = gcnew Pen(Color::DarkBlue, 1.0f);
		Pen^ plumaGris = gcnew Pen(Color::Gray, 1.0f);
		g->Clear(System::Drawing::Color::White);
	}
	private: System::Void botonGraficar_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g;
		g = pictureBox->CreateGraphics();
		Pen^ plumaNegra = gcnew Pen(Color::Black, 1.0f);
		Pen^ plumaAzul = gcnew Pen(Color::DarkBlue, 1.0f);
		Pen^ plumaGris = gcnew Pen(Color::Gray, 1.0f);
		g->Clear(System::Drawing::Color::White);

		int ci = 0, fi = 0;
		int cf = pictureBox->Height;
		int ff = pictureBox->Width;

		try {
			int n = Convert::ToInt32(cajaEntrada->Text);
			int x, y, b, h;

			for (int i = 0; i < n; i++) {
				x = rand() % cf;
				y = rand() % ff;
				b = rand() % cf;
				h = rand() % ff;

				g->DrawRectangle(plumaNegra, x, y, b, h);

			}
		}
		catch (FormatException^e) {

		}

	}
	private: System::Void botonInfo_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
};
}
