#include "pch.h"
#include <iostream>
#include "tratamientoPuntos.h"


int main()
{
	int n;
	double interpolar;
	std::cout << "Numero de puntos: ";
	std::cin >> n;
	double fxx;
	std::string p;
	std::cout << "Punto a interpolar: ";
	std::cin >> interpolar;

	tratamientoPuntos tP1(n);
	tP1.pidePuntos();
	tP1.imprimePuntos();
	tP1.LagrangeDOS(interpolar, fxx,p);
	std::cout << "Interpolacion en f(" << interpolar << ") = " << fxx;
	std::cout << std::endl << "Polinomio:" << std::endl << "f(x)= " << p << std::endl;

	system("pause");

}
