#include "pch.h"
#include <iostream>
#include "tratamientoPuntos.h"

int main(){
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
	//std::cout << std::endl << "Polinomio:" << std::endl << "f(x)= " << p << std::endl;

	system("pause");
}
