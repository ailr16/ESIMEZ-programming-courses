#pragma once

namespace lanzador16 {				//Cambiar CLRWindowsForms por nombre del proyecto

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

	public: int ultimaSeleccion = 0;
			int seleccion = 0;
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
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 52);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ejemplos de clase";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Ejemplo Derivada", L"Ejemplo Diferencias Divididas",
					L"Ejemplo Diferencias Finitas", L"Ejemplo RungeKutta", L"Ejemplo Euler", L"Ejemplo Lagrange", L"Ejemplo Simpson 3/8", L"Ejemplo Simpson 1/3",
					L"Ejemplo Trapecio"
			});
			this->comboBox1->Location = System::Drawing::Point(6, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(188, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Seleccione una opcion";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Location = System::Drawing::Point(13, 71);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 56);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Practicas Laboratorio";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(28) {
				L"Derivada CLR (Windows)", L"Derivada Graficador",
					L"Derivada Consola", L"Diferencias Divididas CLR (Windows)", L"Diferencias Divididas Graficador", L"Diferencias Divididas Consola",
					L"Diferencias Finitas CLR (Windows)", L"Diferencias Finitas Graficador", L"Diferencias Finitas Consola", L"Euler CLR (Windows)",
					L"Euler con Lundin", L"Euler Consola", L"Lagrange CLR (Windows)", L"Lagrange Graficador", L"Lagrange Consola", L"Runge-Kutta CLR (Windows)",
					L"Runge-Kutta con Lundin", L"Runge-Kutta Consola", L"Simpson 3/8 CLR (Windows)", L"Simpson 3/8 con Graficador y Lundin", L"Simpson 3/8 Consola",
					L"Simpson 1/3 CLR (Windows)", L"Simpson 1/3 Consola", L"Simpson 1/3 Graficador con Lundin", L"Trapecio CLR (Windows)", L"Trapecio Graficador con Lundin",
					L"Trapecio Consola", L"Tratamiento de puntos (Minimos cuadrados)"
			});
			this->comboBox2->Location = System::Drawing::Point(6, 19);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(188, 21);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->Text = L"Seleccione una opcion";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->comboBox3);
			this->groupBox3->Location = System::Drawing::Point(13, 133);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 49);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Practicas Individuales";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Practica 13", L"Practica 14", L"Practica 15",
					L"Practica 16", L"Practica 18", L"Practica 19", L"Practica 20"
			});
			this->comboBox3->Location = System::Drawing::Point(6, 19);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(188, 21);
			this->comboBox3->TabIndex = 2;
			this->comboBox3->Text = L"Seleccione una opcion";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->comboBox4);
			this->groupBox4->Location = System::Drawing::Point(13, 188);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 50);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Proyectos";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Derivada", L"Diferencias Divididas", L"Diferencias Divididas con lectura de Archivos",
					L"Diferencias Finitas", L"Diferencias Finitas con lectura de Archivos", L"Euler", L"generadorDeArchivo (para lectura)", L"Lagrange",
					L"Lagrange con lectura de Archivos", L"Runge-Kutta", L"Simpson 1/3", L"Simpson 3/8"
			});
			this->comboBox4->Location = System::Drawing::Point(6, 19);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(188, 21);
			this->comboBox4->TabIndex = 3;
			this->comboBox4->Text = L"Seleccione una opcion";
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->comboBox5);
			this->groupBox5->Location = System::Drawing::Point(13, 244);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(200, 49);
			this->groupBox5->TabIndex = 4;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Examen";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Examen 3° parcial (incluye los cuatro problemas)" });
			this->comboBox5->Location = System::Drawing::Point(6, 19);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(188, 21);
			this->comboBox5->TabIndex = 4;
			this->comboBox5->Text = L"Seleccione una opcion";
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox5_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(278, 32);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(234, 173);
			this->listBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(275, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Descripcion";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(278, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(234, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Ejecutar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(278, 244);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(234, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Firma";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(538, 297);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Lanzador. Lozano Ramirez Angel Ivan. Num 16. 4CM11";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		ultimaSeleccion = 1;
		if (comboBox1->SelectedIndex == 0) {
			seleccion = 10;
			listBox1->Items->Clear();
			listBox1->Items->Add("Ejemplo derivada");
			listBox1->Items->Add("");
			listBox1->Items->Add("Solucion de un ejemplo de derivacion realizado");
			listBox1->Items->Add("en clase.");

		}
		else if (comboBox1->SelectedIndex == 1) {
			seleccion = 11;
			listBox1->Items->Clear();
			listBox1->Items->Add("Ejemplo diferencias Divididas");
			listBox1->Items->Add("");
			listBox1->Items->Add("Solucion de un ejemplo de diferencias");
			listBox1->Items->Add("divididas realizado en clase");
		}
		else if (comboBox1->SelectedIndex == 2) {
			seleccion = 12;
			listBox1->Items->Clear();
			listBox1->Items->Add("Ejemplo diferencias finitas");
			listBox1->Items->Add("");
			listBox1->Items->Add("Solucion de un ejemplo de diferencias");
			listBox1->Items->Add("finitas realizado en clase");
		}
		else if (comboBox1->SelectedIndex == 3) {
			seleccion = 13;
			listBox1->Items->Clear();
			listBox1->Items->Add("Ejemplo EDO Runge-Kutta");
			listBox1->Items->Add("");
			listBox1->Items->Add("Solucion de un ejemplo de ecuacion diferencial");
			listBox1->Items->Add("por Runge-Kutta realizado en clase");
		}
		else if (comboBox1->SelectedIndex == 4) {
			seleccion = 14;
			listBox1->Items->Clear();
			listBox1->Items->Add("Ejemplo EDO Euler");
			listBox1->Items->Add("");
			listBox1->Items->Add("Solucion de un ejemplo de ecuacion diferencial");
			listBox1->Items->Add("por metodo de Euler realizado en clase");
		}
		else if (comboBox1->SelectedIndex == 5) {
			seleccion = 15;
			listBox1->Items->Clear();
			listBox1->Items->Add("Ejemplo Lagrange");
			listBox1->Items->Add("");
			listBox1->Items->Add("Solucion de un ejemplo de polinomio de");
			listBox1->Items->Add("Lagrange realizado en clase");
		}
		else if (comboBox1->SelectedIndex == 6) {
			seleccion = 16;
			listBox1->Items->Clear();
			listBox1->Items->Add("Ejemplo Simpson 3/8");
			listBox1->Items->Add("");
			listBox1->Items->Add("Solucion de un ejemplo de integracion numerica");
			listBox1->Items->Add("por metodo de Simpson 3/8 realizado en clase");
		}
		else if (comboBox1->SelectedIndex == 7) {
			seleccion = 17;
			listBox1->Items->Clear();
			listBox1->Items->Add("Ejemplo Simpson 1/3");
			listBox1->Items->Add("");
			listBox1->Items->Add("Solucion de un ejemplo de integracion numerica");
			listBox1->Items->Add("por metodo de Simpson 1/3 realizado en clase");
		}
		else if (comboBox1->SelectedIndex == 8) {
			seleccion = 18;
			listBox1->Items->Clear();
			listBox1->Items->Add("Ejemplo Trapecio");
			listBox1->Items->Add("");
			listBox1->Items->Add("Solucion de un ejemplo de integracion numerica");
			listBox1->Items->Add("por metodo del trapecio realizado en clase");
		}
		else if (comboBox1->SelectedIndex == 9) {
			seleccion = 19;
		}
	}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	ultimaSeleccion = 2;
	if (comboBox2->SelectedIndex == 0) {
		seleccion = 20;
		listBox1->Items->Clear();
		listBox1->Items->Add("Derivada CLR (Windows)");
		listBox1->Items->Add("");
		listBox1->Items->Add("Solucionador de derivadas en plataforma Windows");
		listBox1->Items->Add("Se ingresan puntos");
	}
	else if (comboBox2->SelectedIndex == 1) {
		seleccion = 21;
		listBox1->Items->Clear();
		listBox1->Items->Add("Derivada Graficador");
		listBox1->Items->Add("");
		listBox1->Items->Add("Solucionador de derivadas en plataforma Windows");
		listBox1->Items->Add("Se ingresan puntos");
		listBox1->Items->Add("Permite graficar");
	}
	else if (comboBox2->SelectedIndex == 2) {
		seleccion = 22;
		listBox1->Items->Clear();
		listBox1->Items->Add("Derivada Consola");
		listBox1->Items->Add("");
		listBox1->Items->Add("Solucionador de derivadas en CMD");
		listBox1->Items->Add("Se ingresan puntos");
	}
	else if (comboBox2->SelectedIndex == 3) {
		seleccion = 23;
		listBox1->Items->Clear();
		listBox1->Items->Add("Diferencias Divididas CLR (Windows)");
		listBox1->Items->Add("");
		listBox1->Items->Add("Encuentra polinomio por Dif Divididas");
		listBox1->Items->Add("Plataforma Windows");
		listBox1->Items->Add("Se ingresan puntos");
	}
	else if (comboBox2->SelectedIndex == 4) {
		seleccion = 24;
		listBox1->Items->Clear();
		listBox1->Items->Add("Diferencias Divididas Graficador");
		listBox1->Items->Add("");
		listBox1->Items->Add("Encuentra polinomio por Dif Divididas");
		listBox1->Items->Add("Plataforma Windows");
		listBox1->Items->Add("Se ingresan puntos");
		listBox1->Items->Add("Permite Graficar");
	}
	else if (comboBox2->SelectedIndex == 5) {
		seleccion = 25;
		listBox1->Items->Clear();
		listBox1->Items->Add("Diferencias Divididas Consola");
		listBox1->Items->Add("");
		listBox1->Items->Add("Encuentra polinomio por Dif Divididas");
		listBox1->Items->Add("En consola CMD");
		listBox1->Items->Add("Se ingresan puntos");
	}
	else if (comboBox2->SelectedIndex == 6) {
		seleccion = 26;
		listBox1->Items->Clear();
		listBox1->Items->Add("Diferencias Finitas CLR (Windows)");
		listBox1->Items->Add("");
		listBox1->Items->Add("Encuentra polinomio por Dif Finitas");
		listBox1->Items->Add("Plataforma Windows");
		listBox1->Items->Add("Se ingresan puntos");
	}
	else if (comboBox2->SelectedIndex == 7) {
		seleccion = 27;
		listBox1->Items->Clear();
		listBox1->Items->Add("Diferencias Finitas Graficador");
		listBox1->Items->Add("");
		listBox1->Items->Add("Encuentra polinomio por Dif Divididas");
		listBox1->Items->Add("Plataforma Windows");
		listBox1->Items->Add("Se ingresan puntos");
		listBox1->Items->Add("Permite Graficar");
	}
	else if (comboBox2->SelectedIndex == 8) {
		seleccion = 28;
		listBox1->Items->Clear();
		listBox1->Items->Add("Diferencias Finitas Consola");
		listBox1->Items->Add("");
		listBox1->Items->Add("Encuentra polinomio por Dif Finitas");
		listBox1->Items->Add("En consola CMD");
		listBox1->Items->Add("Se ingresan puntos");
	}
	else if (comboBox2->SelectedIndex == 9) {
		seleccion = 29;
		listBox1->Items->Clear();
		listBox1->Items->Add("Euler CLR (Windows)");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve EDO por metodo de Euler");
		listBox1->Items->Add("Plataforma Windows");
		listBox1->Items->Add("Se selecciona una funcion");
	}
	else if (comboBox2->SelectedIndex == 10) {
		seleccion = 210;
		listBox1->Items->Clear();
		listBox1->Items->Add("Euler con Lundin");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve EDO por metodo de Euler");
		listBox1->Items->Add("Plataforma Windows");
		listBox1->Items->Add("Se 'escribe' una funcion");
	}
	else if (comboBox2->SelectedIndex == 11) {
		seleccion = 211;
		listBox1->Items->Clear();
		listBox1->Items->Add("Euler Consola");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve EDO por metodo de Euler");
		listBox1->Items->Add("En consola CMD");
		listBox1->Items->Add("Se selecciona una funcion");
	}
	else if (comboBox2->SelectedIndex == 12) {
		seleccion = 212;
		listBox1->Items->Clear();
		listBox1->Items->Add("Lagrange CLR (Windows)");
		listBox1->Items->Add("");
		listBox1->Items->Add("Encuentra polinomio de Lagrange");
		listBox1->Items->Add("Interpola un punto");
		listBox1->Items->Add("Plataforma Windows");
		listBox1->Items->Add("Se ingresan puntos");
	}
	else if (comboBox2->SelectedIndex == 13) {
		seleccion = 213;
		listBox1->Items->Clear();
		listBox1->Items->Add("Lagrange Graficador");
		listBox1->Items->Add("");
		listBox1->Items->Add("Encuentra polinomio de Lagrange");
		listBox1->Items->Add("Interpola un punto");
		listBox1->Items->Add("Plataforma Windows");
		listBox1->Items->Add("Se ingresan puntos");
		listBox1->Items->Add("Permite graficar");
	}
	else if (comboBox2->SelectedIndex == 14) {
		seleccion = 214;
		listBox1->Items->Clear();
		listBox1->Items->Add("Lagrange Consola");
		listBox1->Items->Add("");
		listBox1->Items->Add("Encuentra polinomio de Lagrange");
		listBox1->Items->Add("En consola CMD");
		listBox1->Items->Add("Se ingresan puntos");
	}
	else if (comboBox2->SelectedIndex == 15) {
		seleccion = 215;
		listBox1->Items->Clear();
		listBox1->Items->Add("Runge-Kutta CLR (Windows)");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve EDO por metodo de Runge-Kutta");
		listBox1->Items->Add("Plataforma Windows");
		listBox1->Items->Add("Se selecciona una funcion");
	}
	else if (comboBox2->SelectedIndex == 16) {
		seleccion = 216;
		listBox1->Items->Clear();
		listBox1->Items->Add("Runge-Kutta con Lundin");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve EDO por metodo de Runge-Kutta");
		listBox1->Items->Add("Plataforma Windows");
		listBox1->Items->Add("Se 'escribe' una funcion");
	}
	else if (comboBox2->SelectedIndex == 17) {
		seleccion = 217;
		listBox1->Items->Clear();
		listBox1->Items->Add("Runge-Kutta Consola");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve EDO por metodo de Runge-Kutta");
		listBox1->Items->Add("En consola CMD");
		listBox1->Items->Add("Se selecciona una funcion");
	}
	else if (comboBox2->SelectedIndex == 18) {
		seleccion = 218;
		listBox1->Items->Clear();
		listBox1->Items->Add("Simpson 3/8 CLR (Windows)");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve integrales por metodo de Simpson 3/8");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Se selecciona una funcion");
	}
	else if (comboBox2->SelectedIndex == 19) {
		seleccion = 219;
		listBox1->Items->Clear();
		listBox1->Items->Add("Simpson 3/8 con Graficador y Lundin");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve integrales por metodo de Simpson 3/8");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Se 'escribe' una funcion (tiene Lundin)");
	}
	else if (comboBox2->SelectedIndex == 20) {
		seleccion = 220;
		listBox1->Items->Clear();
		listBox1->Items->Add("Simpson 3/8 consola");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve integrales por metodo de Simpson 3/8");
		listBox1->Items->Add("En consola CMD");
		listBox1->Items->Add("Se selecciona una funcion");
	}
	else if (comboBox2->SelectedIndex == 21) {
		seleccion = 221;
		listBox1->Items->Clear();
		listBox1->Items->Add("Simpson 1/3 CLR (Windows)");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve integrales por metodo de Simpson 1/3");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Se selecciona una funcion");
	}
	else if (comboBox2->SelectedIndex == 22) {
		seleccion = 222;
		listBox1->Items->Clear();
		listBox1->Items->Add("Simpson 1/3 consola");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve integrales por metodo de Simpson 1/3");
		listBox1->Items->Add("En consola CMD");
		listBox1->Items->Add("Se selecciona una funcion");
	}
	else if (comboBox2->SelectedIndex == 23) {
		seleccion = 223;
		listBox1->Items->Clear();
		listBox1->Items->Add("Simpson 1/3 Graficador con Lundin");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve integrales por metodo de Simpson 1/3");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Se 'escribe' una funcion (tiene Lundin)");
	}
	else if (comboBox2->SelectedIndex == 24) {
		seleccion = 224;
		listBox1->Items->Clear();
		listBox1->Items->Add("Trapecio CLR (Windows)");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve integrales por metodo del Trapecio");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Se selecciona una funcion");
	}
	else if (comboBox2->SelectedIndex == 25) {
		seleccion = 225;
		listBox1->Items->Clear();
		listBox1->Items->Add("Trapecio Graficador con Lundin");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve integrales por metodo del Trapecio");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Se 'escribe' una funcion (tiene Lundin)");
	}
	else if (comboBox2->SelectedIndex == 26) {
		seleccion = 226;
		listBox1->Items->Clear();
		listBox1->Items->Add("Trapecio consola");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve integrales por metodo del Trapecio");
		listBox1->Items->Add("En consola CMD");
		listBox1->Items->Add("Se selecciona una funcion");
	}
	else if (comboBox2->SelectedIndex == 27) {
		seleccion = 227;
		listBox1->Items->Clear();
		listBox1->Items->Add("Tratamiento de puntos (Minimos cuadrados)");
		listBox1->Items->Add("");
		listBox1->Items->Add("Realiza ajuste de puntos a traves del metodo");
		listBox1->Items->Add("de minimos cuadrados.");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Se ingresan puntos y grado del polinomio");
	}
	else if (comboBox2->SelectedIndex == 28) {
		seleccion = 228;
	}

}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	ultimaSeleccion = 3;
	if (comboBox3->SelectedIndex == 0) {
		seleccion = 30;
		listBox1->Items->Clear();
		listBox1->Items->Add("Practica 13. Ajuste de puntos");
		listBox1->Items->Add("");
		listBox1->Items->Add("Realiza ajuste de puntos a traves del metodo");
		listBox1->Items->Add("de minimos cuadrados.");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Se ingresan puntos y grado del polinomio");
	}
	else if (comboBox3->SelectedIndex == 1) {
		seleccion = 31;
		listBox1->Items->Clear();
		listBox1->Items->Add("Practica 14. Polinomio de Lagrange");
		listBox1->Items->Add("");
		listBox1->Items->Add("Encuentra polinomio de Lagrange para");
		listBox1->Items->Add("los puntos ingresados");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Se ingresan puntos y punto a interpolar");
	}
	else if (comboBox3->SelectedIndex == 2) {
		seleccion = 32;
		listBox1->Items->Clear();
		listBox1->Items->Add("Practica 15. Diferencias divididas");
		listBox1->Items->Add("");
		listBox1->Items->Add("Encuentra polinomio de colocacion para");
		listBox1->Items->Add("los puntos ingresados");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Se ingresan puntos y punto a interpolar");
	}
	else if (comboBox3->SelectedIndex == 3) {
		seleccion = 33;
		listBox1->Items->Clear();
		listBox1->Items->Add("Practica 16. Diferencias finitas");
		listBox1->Items->Add("");
		listBox1->Items->Add("Encuentra polinomio de colocacion para");
		listBox1->Items->Add("los puntos ingresados");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Se ingresan puntos y punto a interpolar");
	}
	else if (comboBox3->SelectedIndex == 4) {
		seleccion = 34;
		listBox1->Items->Clear();
		listBox1->Items->Add("Practica 18. Metodo del trapecio");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve integral definida con limites de");
		listBox1->Items->Add("integracion y una funcion definidos");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Ya tiene los datos solicitados.");
	}
	else if (comboBox3->SelectedIndex == 5) {
		seleccion = 35;
		listBox1->Items->Clear();
		listBox1->Items->Add("Practica 19. Metodo de Simpson 1/3");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve integral definida con limites de");
		listBox1->Items->Add("integracion y una funcion definidos");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Ya tiene los datos solicitados.");
	}
	else if (comboBox3->SelectedIndex == 6) {
		seleccion = 36;
		listBox1->Items->Clear();
		listBox1->Items->Add("Practica 20. Metodo de Simpson 3/8");
		listBox1->Items->Add("");
		listBox1->Items->Add("Resuelve integral definida con limites de");
		listBox1->Items->Add("integracion y una funcion definidos");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Ya tiene los datos solicitados.");
	}
	else if (comboBox3->SelectedIndex == 7) {
		seleccion = 37;
	}
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	ultimaSeleccion = 4;
	if (comboBox4->SelectedIndex == 0) {
		seleccion = 40;
		listBox1->Items->Clear();
		listBox1->Items->Add("Proyecto Derivada");
		listBox1->Items->Add("");
		listBox1->Items->Add("Corriente en un capacitor en una red");
		listBox1->Items->Add("de multifrecuencia.");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Ya tiene los datos solicitados.");
	}
	else if (comboBox4->SelectedIndex == 1) {
		seleccion = 41;
		listBox1->Items->Clear();
		listBox1->Items->Add("Proyecto Diferencias divididas");
		listBox1->Items->Add("");
		listBox1->Items->Add("Sistema de adquisicion de datos DAQ");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Ya tiene los datos solicitados.");
	}
	else if (comboBox4->SelectedIndex == 2) {
		seleccion = 42;
		listBox1->Items->Clear();
		listBox1->Items->Add("Proyecto diferencias divididas con");
		listBox1->Items->Add("lectura desde archivo.");
		listBox1->Items->Add("");
		listBox1->Items->Add("Lee datos del problema desde un archivo.");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Ya tiene los datos solicitados.");
	}
	else if (comboBox4->SelectedIndex == 3) {
		seleccion = 43;
		listBox1->Items->Clear();
		listBox1->Items->Add("Proyecto Diferencias finitas");
		listBox1->Items->Add("");
		listBox1->Items->Add("Perdidas de potencia en un radioenlace");
		listBox1->Items->Add("de microondas.");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Ya tiene los datos solicitados.");
	}
	else if (comboBox4->SelectedIndex == 4) {
		seleccion = 44;
		listBox1->Items->Clear();
		listBox1->Items->Add("Proyecto finitas divididas con");
		listBox1->Items->Add("lectura desde archivo.");
		listBox1->Items->Add("");
		listBox1->Items->Add("Lee datos del problema desde un archivo.");
		listBox1->Items->Add("En plataforma Windows");
	}
	else if (comboBox4->SelectedIndex == 5) {
		seleccion = 45;
		listBox1->Items->Clear();
		listBox1->Items->Add("Proyecto EDO Euler");
		listBox1->Items->Add("");
		listBox1->Items->Add("Analisis de un controlador proporcional-");
		listBox1->Items->Add("derivativo en el dominio del tiempo.");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Ya tiene los datos solicitados.");
	}
	else if (comboBox4->SelectedIndex == 6) {
		seleccion = 46;
		listBox1->Items->Add("generadorDeArchivo(para lectura)");
		listBox1->Items->Add("");
		listBox1->Items->Add("Herramienta para generar archivos que contengan");
		listBox1->Items->Add("puntos, que pueden ser leidos por los proyectos.");
		listBox1->Items->Add("En plataforma Windows");
	}
	else if (comboBox4->SelectedIndex == 7) {
		seleccion = 47;
		listBox1->Items->Clear();
		listBox1->Items->Add("Proyecto Lagrange");
		listBox1->Items->Add("");
		listBox1->Items->Add("Determinacion de la longitud de un");
		listBox1->Items->Add("capacitor cilindrico");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Ya tiene los datos solicitados.");
	}
	else if (comboBox4->SelectedIndex == 8) {
		seleccion = 48;
		listBox1->Items->Clear();
		listBox1->Items->Add("Proyecto Lagrange con lectura de archivos");
		listBox1->Items->Add("");
		listBox1->Items->Add("Lee datos del problema desde un archivo.");
		listBox1->Items->Add("En plataforma Windows");
	}
	else if (comboBox4->SelectedIndex == 9) {
		seleccion = 49;
		listBox1->Items->Clear();
		listBox1->Items->Add("Proyecto Runge-Kutta");
		listBox1->Items->Add("");
		listBox1->Items->Add("Analisis de un controlador proporcional-");
		listBox1->Items->Add("derivativo en el dominio del tiempo.");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Ya tiene los datos solicitados.");
	}
	else if (comboBox4->SelectedIndex == 10) {
		seleccion = 410;
		listBox1->Items->Clear();
		listBox1->Items->Add("Proyecto Simpson 1/3");
		listBox1->Items->Add("");
		listBox1->Items->Add("Corriente en un inductor alimentado");
		listBox1->Items->Add("por una señal compuesta en el dominio");
		listBox1->Items->Add("del tiempo");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Ya tiene los datos solicitados.");
	}
	else if (comboBox4->SelectedIndex == 11) {
		seleccion = 411;
		listBox1->Items->Add("Proyecto Simpson 3/8");
		listBox1->Items->Add("");
		listBox1->Items->Add("Corriente en un inductor alimentado");
		listBox1->Items->Add("por una señal compuesta en el dominio");
		listBox1->Items->Add("del tiempo");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Ya tiene los datos solicitados.");
	}
	else if (comboBox4->SelectedIndex == 12) {
		seleccion = 412;
	}
	else if (comboBox4->SelectedIndex == 13) {
		seleccion = 413;
	}
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	ultimaSeleccion = 5;
	if (comboBox5->SelectedIndex == 0) {
		seleccion = 50;
		listBox1->Items->Clear();
		listBox1->Items->Add("Examen tercer parcial.");
		listBox1->Items->Add("");
		listBox1->Items->Add("Incluye los proyectos:");
		listBox1->Items->Add("1. Integracion Numerica. Corriente en un inductor");
		listBox1->Items->Add("alimentado por una señal aproximada por series");
		listBox1->Items->Add("de Fourier.");
		listBox1->Items->Add("2. Derivacion Numerica. Corriente en un capacitor");
		listBox1->Items->Add("en una red de multifrecuencia.");
		listBox1->Items->Add("3. Ajuste de puntos. Estimacion de perdidas de");
		listBox1->Items->Add("potencia en un radioenlace de microondas.");
		listBox1->Items->Add("4. EDO. Analisis de un controlador automatico");
		listBox1->Items->Add("proporcional-derivativo en el dominio del tiempo.");
		listBox1->Items->Add("En plataforma Windows");
		listBox1->Items->Add("Ya tiene los datos solicitados.");
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (seleccion == 10) {
		System::Diagnostics::Process::Start("derivadaConsola.exe");
	}
	else if (seleccion == 11) {
		System::Diagnostics::Process::Start("diferenciasDivididasConsola.exe");
	}
	else if (seleccion == 12) {
		System::Diagnostics::Process::Start("diferenciasFinitasConsola.exe");
	}
	else if (seleccion == 13) {
		System::Diagnostics::Process::Start("ejemploRungeKutta.exe");
	}
	else if (seleccion == 14) {
		System::Diagnostics::Process::Start("EulerEjemplo.exe");
	}
	else if (seleccion == 15) {
		System::Diagnostics::Process::Start("lagrangeConsola.exe");
	}
	else if (seleccion == 16) {
		System::Diagnostics::Process::Start("Simpson38Ejemplo.exe");
	}
	else if (seleccion == 17) {
		System::Diagnostics::Process::Start("SimpsonEjemplo.exe");
	}
	else if (seleccion == 18) {
		System::Diagnostics::Process::Start("trapecioEjemplo.exe");
	}
	else if (seleccion == 19) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
	else if (seleccion == 20) {
		System::Diagnostics::Process::Start("derivadaCLR.exe");
	}
	else if (seleccion == 21) {
		System::Diagnostics::Process::Start("derivadaCLRGraficador.exe");
	}
	else if (seleccion == 22) {
		System::Diagnostics::Process::Start("derivadaConsola2.exe");
	}
	else if (seleccion == 23) {
		System::Diagnostics::Process::Start("diferenciasDivididasCLR.exe");
	}
	else if (seleccion == 24) {
		System::Diagnostics::Process::Start("diferenciasDivididasCLRGrafica.exe");
	}
	else if (seleccion == 25) {
		System::Diagnostics::Process::Start("diferenciasDivididasConsola2.exe");
	}
	else if (seleccion == 26) {
		System::Diagnostics::Process::Start("diferenciasFinitasCLR.exe");
	}
	else if (seleccion == 27) {
		System::Diagnostics::Process::Start("diferenciasFinitasCLRGrafica.exe");
	}
	else if (seleccion == 28) {
		System::Diagnostics::Process::Start("diferenciasFinitasConsola2.exe");
	}
	else if (seleccion == 29) {
		System::Diagnostics::Process::Start("EulerCLR.exe");
	}
	else if (seleccion == 210) {
		System::Diagnostics::Process::Start("EulerCLRLundin.exe");
	}
	else if (seleccion == 211) {
		System::Diagnostics::Process::Start("EulerConsola2.exe");
	}
	else if (seleccion == 212) {
		System::Diagnostics::Process::Start("lagrangeCLR.exe");
	}
	else if (seleccion == 213) {
		System::Diagnostics::Process::Start("lagrangeCLRGraficador.exe");
	}
	else if (seleccion == 214) {
		System::Diagnostics::Process::Start("lagrangeConsola2.exe");
	}
	else if (seleccion == 215) {
		System::Diagnostics::Process::Start("RungeKuttaCLR.exe");
	}
	else if (seleccion == 216) {
		System::Diagnostics::Process::Start("RungeKuttaCLRLundin.exe");
	}
	else if (seleccion == 217) {
		System::Diagnostics::Process::Start("RungeKuttaConsola2.exe");
	}
	else if (seleccion == 218) {
		System::Diagnostics::Process::Start("Simpson38CLR.exe");
	}
	else if (seleccion == 219) {
		System::Diagnostics::Process::Start("Simpson38CLRGrafica.exe");
	}
	else if (seleccion == 220) {
		System::Diagnostics::Process::Start("Simpson382.exe");
	}
	else if (seleccion == 221) {
		System::Diagnostics::Process::Start("SimpsonCLR.exe");
	}
	else if (seleccion == 222) {
		System::Diagnostics::Process::Start("simpsonConsola2.exe");
	}
	else if (seleccion == 223) {
		System::Diagnostics::Process::Start("SimpsonGraficaLundin.exe");
	}
	else if (seleccion == 224) {
		System::Diagnostics::Process::Start("trapecioCLR.exe");
	}
	else if (seleccion == 225) {
		System::Diagnostics::Process::Start("trapecioCLRGraficLundin.exe");
	}
	else if (seleccion == 226) {
		System::Diagnostics::Process::Start("trapecioConsola2.exe");
	}
	else if (seleccion == 227) {
		System::Diagnostics::Process::Start("tratamientoDePuntos.exe");
	}
	else if (seleccion == 228) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
	else if (seleccion == 30) {
		System::Diagnostics::Process::Start("practica13Num16.exe");
	}
	else if (seleccion == 31) {
		System::Diagnostics::Process::Start("practica14Num16.exe");
	}
	else if (seleccion == 32) {
		System::Diagnostics::Process::Start("practica15Num16.exe");
	}
	else if (seleccion == 33) {
		System::Diagnostics::Process::Start("practica16Num16.exe");
	}
	else if (seleccion == 34) {
		System::Diagnostics::Process::Start("practica18Num16.exe");
	}
	else if (seleccion == 35) {
		System::Diagnostics::Process::Start("practica19Num16.exe");
	}
	else if (seleccion == 36) {
		System::Diagnostics::Process::Start("practica20Num16.exe");
	}
	else if (seleccion == 37) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
	else if (seleccion == 40) {
		System::Diagnostics::Process::Start("derivadaProyecto.exe");
	}
	else if (seleccion == 41) {
		System::Diagnostics::Process::Start("diferenciasDivididasProyecto.exe");
	}
	else if (seleccion == 42) {
		System::Diagnostics::Process::Start("diferenciasDivididasCLRArchivos.exe");
	}
	else if (seleccion == 43) {
		System::Diagnostics::Process::Start("diferenciasFinitasProyecto.exe");
	}
	else if (seleccion == 44) {
		System::Diagnostics::Process::Start("diferenciasFinitasCLRArchivos.exe");
	}
	else if (seleccion == 45) {
		System::Diagnostics::Process::Start("EulerProyecto.exe");
	}
	else if (seleccion == 46) {
		System::Diagnostics::Process::Start("generadorDeArchivo.exe");
	}
	else if (seleccion == 47) {
		System::Diagnostics::Process::Start("LagrangeProyecto.exe");
	}
	else if (seleccion == 48) {
		System::Diagnostics::Process::Start("LagrangeCLRArchivos.exe");
	}
	else if (seleccion == 49) {
		System::Diagnostics::Process::Start("RungeKuttaProyecto.exe");
	}
	else if (seleccion == 410) {
		System::Diagnostics::Process::Start("Simpson38Proyecto.exe");
	}
	else if (seleccion == 411) {
		System::Diagnostics::Process::Start("SimpsonProyecto.exe");
	}
	else if (seleccion == 412) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
	else if (seleccion == 413) {
		System::Diagnostics::Process::Start("lozanoRamirez.exe");
	}
	else if (seleccion == 50) {
		System::Diagnostics::Process::Start("examen3.exe");
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Diagnostics::Process::Start("lozanoRamirez.exe");
}
};
}
