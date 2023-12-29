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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Limpiar = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->listBox1->Location = System::Drawing::Point(12, 115);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(108, 95);
			this->listBox1->TabIndex = 1;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(152, 115);
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
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(297, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(457, 237);
			this->dataGridView1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(13, 79);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(118, 20);
			this->textBox2->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(137, 76);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Dibujar tabla";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 261);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Limpiar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		dataGridView1->Columns->Clear();
		dataGridView1->Rows->Clear();
		int m, n;
		m = Convert::ToInt32(textBox2->Text);
		n = m + 1;
		for (int i = 1; i <= n; i++) dataGridView1->Columns->Add("Column", "Test");
		for(int i = 1; i <= m; i++)	dataGridView1->Rows->Add();

	}
};
}
