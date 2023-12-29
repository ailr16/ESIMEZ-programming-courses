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

	std::cout << "Derivada" << std::endl
		<< "Instrucciones:" << std::endl
		<< "1. Ingrese el numero de puntos" << std::endl
		<< "3. Ingrese la abscisa y la ordenada de cada punto (se pide en ese orden)" << std::endl
		<< "NOTA: La derivada se obtiene para el primer punto" << std::endl << std::endl;

	int n;
	std::cout << "Numero de puntos: ";
	std::cin >> n;
	double fx, s;
	Derivadas d1(n);
	d1.pidePuntos();
	fx = d1.derivadaDOS();
	ec = d1.rectaTangente();
	std::cout << std::endl << "f'(" << d1.regresaAlgunValorDeX(0) << ")= " << fx << std::endl;
	std::cout << std::endl << "Ecuacion de la recta tangente:" << std::endl;
	std::cout << std::endl << "y=" << ec << std::endl;

	system("pause");
}