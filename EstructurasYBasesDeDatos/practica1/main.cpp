#include <iostream>
#include "Numero.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop    n  max*/

int main(int argc, char** argv) {
	Numero A,B(4);
	B.muestraTusDatos();
	A.pideleAlUsuarioTusDatos();
	A.muestraTusDatos();
	return 0;
}
