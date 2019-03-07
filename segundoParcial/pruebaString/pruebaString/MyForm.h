#pragma once

namespace pruebaString {				//Cambiar CLRWindowsForms por nombre del proyecto

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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  Limpiar;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Limpiar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(260, 20);
			this->textBox1->TabIndex = 0;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(13, 89);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(108, 95);
			this->listBox1->TabIndex = 1;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(152, 89);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(120, 95);
			this->listBox2->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Leer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Limpiar
			// 
			this->Limpiar->Location = System::Drawing::Point(12, 216);
			this->Limpiar->Name = L"Limpiar";
			this->Limpiar->Size = System::Drawing::Size(260, 33);
			this->Limpiar->TabIndex = 4;
			this->Limpiar->Text = L"Limpiar";
			this->Limpiar->UseVisualStyleBackColor = true;
			this->Limpiar->Click += gcnew System::EventHandler(this, &MyForm::Limpiar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(283, 261);
			this->Controls->Add(this->Limpiar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Limpiar_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Clear();
		listBox1->Items->Clear();
		listBox2->Items->Clear();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ s;
		String^ real;
		String^ imaginario;

		s = textBox1->Text;
		if (s->Contains(",")) {				//Si se escribe un par ordenado
			array<wchar_t> ^id = { ',',2 };
			array<String^> ^lectura;
			lectura = s->Split(id);
			real = lectura[0];
			imaginario = lectura[1];

			listBox1->Items->Add(real);
			listBox2->Items->Add(imaginario);
		}
		else {								//Si solo se ingresa un valor
			real = s;
			listBox1->Items->Add(real);
		}
	}
};
}
