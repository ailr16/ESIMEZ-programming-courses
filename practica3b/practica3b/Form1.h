#pragma once
#include <math.h>

namespace practica3b {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tB1;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btCalcular;
	private: System::Windows::Forms::ListBox^  lB1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;



	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tB1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btCalcular = (gcnew System::Windows::Forms::Button());
			this->lB1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tB1
			// 
			this->tB1->Location = System::Drawing::Point(30, 13);
			this->tB1->Name = L"tB1";
			this->tB1->Size = System::Drawing::Size(100, 20);
			this->tB1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"N";
			// 
			// btCalcular
			// 
			this->btCalcular->Location = System::Drawing::Point(12, 102);
			this->btCalcular->Name = L"btCalcular";
			this->btCalcular->Size = System::Drawing::Size(246, 27);
			this->btCalcular->TabIndex = 2;
			this->btCalcular->Text = L"Calcular para 32 bit";
			this->btCalcular->UseVisualStyleBackColor = true;
			this->btCalcular->Click += gcnew System::EventHandler(this, &Form1::btCalcular_Click);
			// 
			// lB1
			// 
			this->lB1->FormattingEnabled = true;
			this->lB1->Location = System::Drawing::Point(148, 12);
			this->lB1->Name = L"lB1";
			this->lB1->Size = System::Drawing::Size(347, 82);
			this->lB1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 55);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Limpiar Resultados";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(264, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(231, 27);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Calcular para 64 bit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(507, 143);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lB1);
			this->Controls->Add(this->btCalcular);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tB1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btCalcular_Click(System::Object^  sender, System::EventArgs^  e) {
		float E;
		int N;
		
		N = Convert::ToInt32(tB1->Text);
		E = pow(2.0, 1-N);
		lB1->Items->Add("32 bit: " + E);
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	lB1->Items->Clear();
	tB1->Text = "";
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	double E;
	int N;

	N = Convert::ToInt32(tB1->Text);
	E = pow(2.0, 1 - N);
	lB1->Items->Add("64 bit: " + E);
}
};
}
