// practica7Num16.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

#include "Complejo.h"
#include "lozano.h"

using namespace std;

Complejo f(Complejo z);
int main()
{
	Practica1 obj;
	obj.Nombre();

	system("pause");
	system("cls");

	Complejo zi, z1, z2, Er;
	int n;

	cout << "Ecuacion:" << endl << "z^2 + z + 1 = 0" << endl;
	cout << "Ingrese zi: " << endl;
	cin >> zi;
	cout << "Ingrese zf: " << endl;
	cin >> z1;
	cout << "Ingrese Error (considerar como numero complejo): " << endl;
	cin >> Er;
	cout << "Ingrese Iteraciones: ";
	cin >> n;

	for (int k = 1; k < n; k++) {
		z2 = z1 - ((f(z1)*(zi - z1)) / (f(zi) - f(z1)));
		if ((z2 - zi) < Er)
			z2 = z2;
		else
			zi = z2;
	}

	cout << "Resultado: " << endl << "z = " << z2 << endl;
	system("pause");
}

Complejo f(Complejo z) {
	Complejo r, cUno(1, 0);
	r = powZ(z, 2) + z + cUno;
	return r;
}