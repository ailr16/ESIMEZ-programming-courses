#include "pch.h"
#include <iostream>
#include "Integral.h"
#include "lozano.h"

int main() {
	Practica1 prac;
	prac.Nombre();
	system("pause");
	system("cls");

	double x0, xn, n;
	int ind = 0;

	std::cout << "Ejemplo. Integral. Metodo del trapecio" << std::endl
		<< "Instrucciones:" << std::endl
		<< "1. Se utliza la funcion f(x) = x^2" << std::endl
		<< "2. x0 = 0" << std::endl
		<< "3. xn = 1" << std::endl
		<< "4. n = 4" << std::endl << std::endl;
	
	x0 = 0; xn = 1, n = 4;
	Integral A;
	std::cout << std::endl << "Resultado= " << A.trapecio(x0, xn, n) << std::endl << std::endl;

	system("pause");
}