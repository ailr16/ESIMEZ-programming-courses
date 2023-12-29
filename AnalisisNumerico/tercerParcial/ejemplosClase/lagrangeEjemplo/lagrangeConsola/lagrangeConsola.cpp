#include "pch.h"
#include <iostream>
#include "tratamientoPuntos.h"
#include "lozano.h"

int main()
{
	Practica1 pr1;
	int n = 6;
	double interpolar = 2.5;
	pr1.Nombre();
	system("pause");
	system("cls");
	std::cout << "Polinomio de Lagrange. Ejemplo de clase" << std::endl
		<< "Instrucciones:" << std::endl
		<< "A continuacion se muestran los datos propuestos en clase:" << std::endl
		<< "numero de puntos=" << n << std::endl
		<< "punto a interpolar=" << interpolar << std::endl
		<< "Puntos:" << std::endl;

	double *x = new double[n];
	double *y = new double[n];
	x[0] = 0.1;	y[0] = 1;
	x[1] = 1.5;	y[1] = 1.5;
	x[2] = 2;	y[2] = 2;
	x[3] = 2.3;	y[3] = 2.1;
	x[4] = 3.1;	y[4] = 2.5;
	x[5] = 4.2;	y[5] = 4.0;

	double fxx;
	std::string p;

	tratamientoPuntos tP1(n);
	tP1.modificaArregloX(x);
	tP1.modificaArregloY(y);
	tP1.imprimePuntos();
	tP1.LagrangeDOS(interpolar, fxx,p);
	std::cout << "Interpolacion en f(" << interpolar << ") = " << fxx << std::endl;
	std::cout << std::endl << "Polinomio:" << std::endl << "f(x)= " << p << std::endl << std::endl;

	system("pause");

}
