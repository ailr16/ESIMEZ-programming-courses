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

	std::cout << "Integral. Ejemplo: Metodo de Simpson 3/8" << std::endl
		<< "Datos:" << std::endl
		<< "valor minimo de x: 0" << std::endl
		<< "valor maximo de x: 1" << std::endl 
		<< "n = 4" << std::endl
		<< "se resuelve para la funcion f(x)= x^2" << std::endl << std::endl;
	
	x0 = 0; xn = 1; n = 4;

	Integral A;
	std::cout << "Resultado:\t" << A.Simpson38(x0, xn, n, 1) << std::endl << std::endl;

	system("pause");
}