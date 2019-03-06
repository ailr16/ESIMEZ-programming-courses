#include "pch.h"
#include <iostream>
#include "Complejo.h"
#include "lozano.h"

using namespace std;

Complejo f(Complejo z);
Complejo df(Complejo z);

int main()
{
	Practica1 obj;
	obj.Nombre();

	system("pause");
	system("cls");

	Complejo zi, z, Er;
	int n;

	cout << "Ecuacion:" << endl << "z^2 + z + 1 = 0" << endl;
	cout << "Ingrese zi: ";
	cin >> zi;
	cout << "Ingrese Error: ";
	cin >> Er;
	cout << "Ingrese Iteraciones: ";
	cin >> n;

	for (int k = 1; k < n; k++) {
		z = zi - (f(zi) / df(zi));
		if ((z - zi) < Er)
			z = z;
		else
			zi = z;
	}

	cout << "Resultado: " << endl << "z = "<< z << endl;
	system("pause");
}

Complejo f(Complejo z) {
	Complejo r, cUno(1,0);
	r = powZ(z, 2) + z + cUno;
	return r;
}
Complejo df(Complejo z) {
	Complejo r, cUno(1, 0), cDos(2,0);
	r = cDos * z + cUno;
	return r;
}