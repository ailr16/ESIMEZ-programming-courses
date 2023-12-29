#include "pch.h"
#include <iostream>
#include "lozano.h"
#include "Integral.h"

int main() {
	Practica1 prac;
	prac.Nombre();
	system("pause");
	system("cls");

	double x0, xn, n;
	int ind = 0;

	std::cout << "Integral. Metodo de Simpson 1/3" << std::endl
		<< "Instrucciones:" << std::endl
		<< "1. Se usa la funcion f(x)= x^2" << std::endl
		<< "x0 = 0" << std::endl
		<< "xn = 1" << std::endl
		<< "n = 4" << std::endl << std::endl;
	
	
	x0= 0; xn = 1; n = 4;

	Integral A;
	std::cout << "Resultado:\t" << A.Simpson(x0, xn, n, 1) << std::endl << std::endl;

	system("pause");
}