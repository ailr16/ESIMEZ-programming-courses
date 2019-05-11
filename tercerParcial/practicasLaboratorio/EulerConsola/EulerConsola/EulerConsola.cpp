#include "pch.h"
#include <iostream>
#include "EDO.h"
#include "lozano.h"

int main(){
	int i, a;
	float xi, xf, h, k, y, f;

	Practica1 prac;
	prac.Nombre();
	system("pause");
	system("cls");
	std::string ec;

	std::cout << "EDO. Metodo de Euler" << std::endl
		<< "Instrucciones:" << std::endl
		<< "1. Ingrese valor inicial de x" << std::endl
		<< "2. Ingrese valor final de x" << std::endl
		<< "3. Ingrese valor inicial de y" << std::endl
		<< "4. Ingrese numero de iteraciones" << std::endl
		<< "NOTA: La ecuacion diferencial se resuelve para valor final de x." << std::endl << std::endl;

	std::cout << "Ingrese valor inicial de x: ";
	std::cin >> xi;
	std::cout << "Ingrese valor final de x:";
	std::cin >> xf;
	std::cout << "Ingrese valor inicial de y:";
	std::cin >> y;
	std::cout << "Ingrese numero de iteraciones:";
	std::cin >> i;
	
	EDO A;
	std::cout << "\nResultado: y(" << xf << ")= "<< A.Euler(xi,xf,y,i) << std::endl;
	system("pause");
	return 0;
}