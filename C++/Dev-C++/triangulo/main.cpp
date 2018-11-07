#include <iostream>
#include "Triangulo.h"

using namespace std;

int main(int argc, char *argv[]) {
	Triangulo T1, T2(-5), T3(0), T(8);
	double aT,pT;
		cout << "Triangulo 1:" << endl;
	T1.muestraTusDatos();
		cout << endl << "Triangulo 2:" << endl;
	T2.muestraTusDatos();
		cout << endl << "Triangulo 3:" << endl;
	T3.muestraTusDatos();
		cout << endl << "Triangulo:" << endl;
	T.muestraTusDatos();
	aT = T1.dameTuArea()+ T.dameTuArea();
	pT = T1.dameTuPerimetro() + T.dameTuPerimetro();
		cout << endl <<"aT =" << aT << endl;
		cout <<"pT =" << pT << endl << endl;
	T3.modificaTuLado(-3);
	T3.muestraTusDatos();
		cout << endl;
	T2.modificaTuLado(T.dameTuLado());
	T2.muestraTusDatos();
	return 0;
}
