#include "pch.h"
#include <iostream>
#include "tratamientoPuntos.h"


int main()
{
	int n;
	std::cout << "Numero de puntos: ";
	std::cin >> n;
	double fxx;
	std::string p;

	tratamientoPuntos tP1(n);
	tP1.pidePuntos();
	tP1.imprimePuntos();
	tP1.Lagrange(2.0, fxx,p);
	std::cout << "Interpolacion:" << fxx;
	std::cout << std::endl << "Polinomio:" << p;

}
