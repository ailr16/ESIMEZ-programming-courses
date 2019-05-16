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

	while (ind < 1 || ind >5) {
		system("cls");
		std::cout << "Integral. Metodo de Simpson 3/8" << std::endl
			<< "Instrucciones:" << std::endl
			<< "1. Seleccione una funcion (escribir el numero y ENTRAR)" << std::endl
			<< "2. Ingrese valor minimo de x" << std::endl
			<< "3. Ingrese valor maximo de x" << std::endl << std::endl;
		std::cout << "Seleccione una funcion:" << std::endl
			<< "1.  x^2" << std::endl
			<< "2.  x^3" << std::endl
			<< "3.  sin(x)" << std::endl
			<< "4.  cos(x)" << std::endl
			<< "5.  e^x" << std::endl;
		std::cin >> ind;
		if (ind < 1 || ind >5)	std::cout << "Seleccion incorrecta, intente de nuevo.";
	}
	std::cout << "Funcion seleccionada: ";
	switch (ind) {
	case 1:
		std::cout << "x^2" << std::endl;
		break;
	case 2:
		std::cout << "x^3" << std::endl;
		break;
	case 3:
		std::cout << "sin(x)" << std::endl;
		break;
	case 4:
		std::cout << "cos(x)" << std::endl;
		break;
	case 5:
		std::cout << "e^x" << std::endl;
		break;
	default:
		break;
	}
	std::cout << "Ingrese x0: ";
	std::cin >> x0;
	std::cout << "Ingrese xn: ";
	std::cin >> xn;
	std::cout << "Ingrese n: ";
	std::cin >> n;

	Integral A;
	std::cout << "Resultado:\t" << A.Simpson38(x0, xn, n, ind) << std::endl << std::endl;

	system("pause");
}