#include "pch.h"
#include <iostream>
#include "tratamientoPuntos.h"
#include "lozano.h"

int main(){
	Practica1 prac;
	prac.Nombre();
	system("pause");
	system("cls");

	std::cout << "Diferencias Finitas" << std::endl
		<< "Instrucciones:" << std::endl
		<< "1. Ingrese el numero de puntos" << std::endl
		<< "2. Ingrese el punto a interpolar" << std::endl
		<< "3. Ingrese la abscisa y la ordenada de cada punto (se pide en ese orden)" << std::endl << std::endl;

	int n;
	double interpolar;
	std::cout << "Numero de puntos: ";
	std::cin >> n;
	double fx, s;
	std::string p;
	std::cout << "Punto a interpolar: ";
	std::cin >> interpolar;

	tratamientoPuntos tP1(n);
	tP1.pidePuntos();
	fx = 0;
	tP1.diferenciasFinitasDOS(interpolar, fx, p);
	std::cout << "Interpolacion en f(" << interpolar << ") = " << fx << std::endl;
	std::cout << std::endl << "Polinomio:" << std::endl << "f(s)= " << p << std::endl;

	system("pause");
}
