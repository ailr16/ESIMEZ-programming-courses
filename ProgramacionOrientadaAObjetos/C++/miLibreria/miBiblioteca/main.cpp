#include <iostream>
#include "F:\C++\Dev-C++\rectangulop\rectangulop.h"
#include "Punto.cpp"
using namespace std;

int main(int argc, char *argv[]) {
	Punto A(1,2), B(3,4), P, Q;
	RectanguloP R,R1(A,B),R2(5,6,7,8),R3;
	cout << "Rectangulo: " << endl;
	R.muestraTusDatos();
	cout << endl << "Rectangulo 1: " << endl;
	R1.muestraTusDatos();
	cout << endl << "Rectangulo 2: " << endl;
	R2.muestraTusDatos();
	cout << endl << "Rectangulo 3: " << endl;
	R3.pideAlUsuarioTusDatos();
	R3.muestraTusDatos();
	P = R3.dameP();
	Q = R3.dameQ();
	cout << P << endl << Q << endl;
	cout << R3.dameTuArea();
	return 0;
}
