#include "MyForm.h"

using namespace System;;
using namespace System::Windows::Forms;

void Main(void) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	lagrangeCLRGraficador::MyForm form;			//Cambiar "CLRWindowsForms por el nombre del proyecto"
	Application::Run(%form);
}