#include "pch.h"
#include <iostream>
#include "tratamientoPuntos.h"
#include "lozano.h"

int main() {
	Practica1 prac;
	prac.Nombre();
	system("pause");
	system("cls");

	int n = 7;
	double interpolar = 1.111;

	std::cout << "Diferencias Divididas. Ejemplo de clase" << std::endl
		<< std::endl
		<< "Instrucciones:" << std::endl
		<< "A continuacion se muestran datos propuestos como problema en clase:" << std::endl
		<< "numero de puntos: " << n << std::endl
		<< "punto a interpolar= " << interpolar << std::endl << std::endl
		<< "puntos:" << std::endl;

	double *x = new double[n];
	double *y = new double[n];

	x[0] = -2;	y[0] = 4;
	x[1] = -1;	y[1] = 1;
	x[2] = -0.5;	y[2] = 0.25;
	x[3] = 0;	y[3] = 0;
	x[4] = 0.5;	y[4] = 0.25;
	x[5] = 1;	y[5] = 1;
	x[6] = 2;	y[6] = 4;

	double fx, s;
	std::string p;

	tratamientoPuntos tP1(n);
	tP1.modificaArregloX(x);
	tP1.modificaArregloY(y);
	tP1.imprimePuntos();
	fx = 0;
	tP1.diferenciasDivididasDOS(interpolar, fx, p);
	std::cout << "Interpolacion en f(" << interpolar << ") = " << fx << std::endl;
	std::cout << std::endl << "Polinomio:" << std::endl << "f(x)= " << p << std::endl;

	system("pause");
}

