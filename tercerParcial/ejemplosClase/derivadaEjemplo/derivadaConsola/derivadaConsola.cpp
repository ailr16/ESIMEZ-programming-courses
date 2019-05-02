#include "pch.h"
#include <iostream>
#include "lozano.h"
#include "Derivada.h"

int main() {
	Practica1 prac;
	prac.Nombre();
	system("pause");
	system("cls");
	std::string ec;

	int n = 7;

	std::cout << "Derivada. Ejemplo de clase" << std::endl
		<< "Instrucciones:" << std::endl
		<< "A continuacion se muestran datos propuestos como problema en una clase:" << std::endl << std::endl
		<< "numero de puntos= " << n << std::endl
		<< "NOTA: La derivada se obtiene para el primer punto" << std::endl
		<< "puntos:" << n << std::endl << std::endl;

	double *x = new double[n];
	double *y = new double[n];

	x[0] = 1;	y[0] = 0.8414;
	x[1] = 1.5;	y[1] = 0.9975;
	x[2] = 2;	y[2] = 0.9093;
	x[3] = 2.5;	y[3] = 0.5985;
	x[4] = 3;	y[4] = 0.1411;
	x[5] = 3.5;	y[5] = -0.3508;
	x[6] = 4;	y[6] = -0.7568;

	double fx, s;
	Derivadas d1(n);
	d1.modificaArregloX(x);
	d1.modificaArregloY(y);
	d1.imprimePuntos();
	fx = d1.derivadaDOS();
	ec = d1.rectaTangente();
	std::cout << std::endl << "f'(" << d1.regresaAlgunValorDeX(0) << ")= " << fx << std::endl;
	std::cout << std::endl << "Ecuacion de la recta tangente:" << std::endl;
	std::cout << std::endl << "y=" << ec << std::endl;

	system("pause");
}