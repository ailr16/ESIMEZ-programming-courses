#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main(int argc, char** argv) {
	Rectangulo A;
	A.pideleAlUsuarioTusDatos();
	cout << endl;
	A.muestraTusDatos();
	cout << endl
		 << A.dameTuBase() << endl
		 << A.dameTuAltura() << endl
		 << A.dameTuArea() << endl
		 << A.dameTuPerimetro() << endl << endl;
		 
	A.modificaTuAltura(16);
	A.modificaTuBase(16);
	
	A.muestraTusDatos();
	return 0;
}
