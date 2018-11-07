#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

void Main(void) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	practica3::MyForm form;
	Application::Run(%form);
}