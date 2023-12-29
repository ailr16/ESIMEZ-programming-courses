#pragma once

namespace lanzadorAplicaciones {

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
			checkBox1->Checked = true;
			checkBox2->Checked = false;
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

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::RadioButton^  radioButton16;
	private: System::Windows::Forms::RadioButton^  radioButton15;
	private: System::Windows::Forms::RadioButton^  radioButton14;
	private: System::Windows::Forms::RadioButton^  radioButton13;
	private: System::Windows::Forms::RadioButton^  radioButton12;
	private: System::Windows::Forms::RadioButton^  radioButton11;
	private: System::Windows::Forms::RadioButton^  radioButton10;
	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton17;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton17);
			this->groupBox1->Controls->Add(this->radioButton16);
			this->groupBox1->Controls->Add(this->radioButton15);
			this->groupBox1->Controls->Add(this->radioButton14);
			this->groupBox1->Controls->Add(this->radioButton13);
			this->groupBox1->Controls->Add(this->radioButton12);
			this->groupBox1->Controls->Add(this->radioButton11);
			this->groupBox1->Controls->Add(this->radioButton10);
			this->groupBox1->Controls->Add(this->radioButton9);
			this->groupBox1->Controls->Add(this->radioButton8);
			this->groupBox1->Controls->Add(this->radioButton7);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(623, 288);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Menu";
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Location = System::Drawing::Point(420, 147);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(131, 17);
			this->radioButton16->TabIndex = 20;
			this->radioButton16->TabStop = true;
			this->radioButton16->Text = L"Tratamiento de puntos";
			this->radioButton16->UseVisualStyleBackColor = true;
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(420, 123);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(206, 17);
			this->radioButton15->TabIndex = 19;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L"SSEL con ordenamiento de elementos";
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(197, 225);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(113, 17);
			this->radioButton14->TabIndex = 18;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"SSEL (en consola)";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(197, 201);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(121, 17);
			this->radioButton13->TabIndex = 17;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"SSENL (en consola)";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(197, 177);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(107, 17);
			this->radioButton12->TabIndex = 16;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"SSENL Windows";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(197, 153);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(52, 17);
			this->radioButton11->TabIndex = 15;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"SSEL";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(197, 129);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(141, 17);
			this->radioButton10->TabIndex = 14;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Metodo de Gauss-Seidel";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(197, 105);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(110, 17);
			this->radioButton9->TabIndex = 13;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Metodo de Jacobi";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(197, 81);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(144, 17);
			this->radioButton8->TabIndex = 12;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Metodo de Gauss-Jordan";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(197, 57);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(109, 17);
			this->radioButton7->TabIndex = 11;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Metodo de Gauss";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(197, 22);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(128, 17);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->Text = L"Practicas (laboratorio)";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(39, 182);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Info";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(179, 259);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Abrir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(420, 99);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(122, 17);
			this->radioButton6->TabIndex = 7;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"SSENL (con Lundin)";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(420, 75);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(151, 17);
			this->radioButton5->TabIndex = 6;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"SSEL (numeros complejos)";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(18, 146);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(79, 17);
			this->radioButton4->TabIndex = 5;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Practica 11";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(18, 123);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(79, 17);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Practica 10";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(18, 99);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(73, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Practica 9";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(18, 75);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(73, 17);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Practica 8";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(420, 22);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(73, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Proyectos";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(18, 22);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(134, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Practicas (individuales)";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->Location = System::Drawing::Point(420, 201);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(106, 17);
			this->radioButton17->TabIndex = 21;
			this->radioButton17->TabStop = true;
			this->radioButton17->Text = L"Proyecto EXTRA";
			this->radioButton17->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 312);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Lanzador Aplicaciones";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox1->Checked) {
			checkBox2->Checked = false;
			checkBox3->Checked = false;
			radioButton1->Enabled = !false;
			radioButton2->Enabled = !false;
			radioButton3->Enabled = !false;
			radioButton4->Enabled = !false;
			radioButton5->Enabled = false;
			radioButton6->Enabled = false;
			radioButton7->Enabled = false;
			radioButton8->Enabled = false;
			radioButton9->Enabled = false;
			radioButton10->Enabled = false;
			radioButton11->Enabled = false;
			radioButton12->Enabled = false;
			radioButton13->Enabled = false;
			radioButton14->Enabled = false;
			radioButton15->Enabled = false;
			radioButton16->Enabled = false;
			radioButton17->Enabled = false;
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox2->Checked) {
			checkBox1->Checked = false;
			checkBox3->Checked = false;
			radioButton1->Enabled = false;
			radioButton2->Enabled = false;
			radioButton3->Enabled = false;
			radioButton4->Enabled = false;
			radioButton5->Enabled = !false;
			radioButton6->Enabled = !false;
			radioButton7->Enabled = false;
			radioButton8->Enabled = false;
			radioButton9->Enabled = false;
			radioButton10->Enabled = false;
			radioButton11->Enabled = false;
			radioButton12->Enabled = false;
			radioButton13->Enabled = false;
			radioButton14->Enabled = false;
			radioButton15->Enabled = !false;
			radioButton16->Enabled = !false;
			radioButton17->Enabled = !false;
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (radioButton1->Checked) System::Diagnostics::Process::Start("practica8Num16.exe");
		else if (radioButton2->Checked) System::Diagnostics::Process::Start("practica9Num16.exe");
		else if (radioButton3->Checked) System::Diagnostics::Process::Start("practica10Num16.exe");
		else if (radioButton4->Checked) System::Diagnostics::Process::Start("practica11Num16.exe");
		else if (radioButton5->Checked) System::Diagnostics::Process::Start("practicaSselWindows.exe");
		else if (radioButton6->Checked) System::Diagnostics::Process::Start("ssenl.exe");
		else if (radioButton7->Checked) System::Diagnostics::Process::Start("practicaGauss.exe");
		else if (radioButton8->Checked) System::Diagnostics::Process::Start("practicaGaussJordan.exe");
		else if (radioButton9->Checked) System::Diagnostics::Process::Start("practicaJacobi.exe");
		else if (radioButton10->Checked) System::Diagnostics::Process::Start("practicaGaussSeidel.exe");
		else if (radioButton11->Checked) System::Diagnostics::Process::Start("practicaSsel.exe");
		else if (radioButton12->Checked) System::Diagnostics::Process::Start("ssenl1.exe");
		else if (radioButton13->Checked) System::Diagnostics::Process::Start("ssenlConsola.exe");
		else if (radioButton14->Checked) System::Diagnostics::Process::Start("practicaSsel.exe");
		else if (radioButton15->Checked) System::Diagnostics::Process::Start("ssel1.exe");
		else if (radioButton16->Checked) System::Diagnostics::Process::Start("tratamientoDePuntos.exe");
		else if (radioButton17->Checked) System::Diagnostics::Process::Start("proyectoExtra.exe");
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Diagnostics::Process::Start("lozanoRamirez.exe");
}
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox3->Checked) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		radioButton1->Enabled = false;
		radioButton2->Enabled = false;
		radioButton3->Enabled = false;
		radioButton4->Enabled = false;
		radioButton5->Enabled = false;
		radioButton6->Enabled = false;
		radioButton7->Enabled = !false;
		radioButton8->Enabled = !false;
		radioButton9->Enabled = !false;
		radioButton10->Enabled = !false;
		radioButton11->Enabled = !false;
		radioButton12->Enabled = !false;
		radioButton13->Enabled = !false;
		radioButton14->Enabled = !false;
		radioButton15->Enabled = false;
		radioButton16->Enabled = false;
		radioButton17->Enabled = false;
	}
}
};
}
