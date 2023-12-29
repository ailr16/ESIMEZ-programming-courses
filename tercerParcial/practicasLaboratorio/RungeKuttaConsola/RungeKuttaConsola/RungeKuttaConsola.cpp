#include "pch.h"
#include <iostream>
#include "EDO.h"
#include "lozano.h"

int main(){
	Practica1 prac;
	prac.Nombre();
	system("pause");
	system("cls");
	int seleccion = 0;

	while (seleccion < 1 || seleccion > 5) {
		system("cls");
		std::cout << "EDO. Metodo de Runge-Kutta de 4° orden" << std::endl
			<< "Instrucciones:" << std::endl
			<< "1. Ingrese valor inicial de x" << std::endl
			<< "2. Ingrese valor final de x" << std::endl
			<< "3. Ingrese valor inicial de y" << std::endl
			<< "4. Ingrese numero de iteraciones" << std::endl
			<< "NOTA: La ecuacion diferencial se resuelve para valor final de x." << std::endl << std::endl;

		std::cout << "Seleccione una funcion:" << std::endl
			<< "1. F(x,y)= x*y" << std::endl
			<< "2. F(x,y)= x/y" << std::endl
			<< "3. F(x,y)= x^2/y" << std::endl
			<< "4. F(x,y)= x/y^2" << std::endl
			<< "5. F(x,y)= x^3/y^3" << std::endl;
		std::cin >> seleccion;
		if (seleccion < 1 || seleccion > 5)	std::cout << "Seleccion incorrecta. Intente de nuevo";
	}

	double x0, y, x;
	int n;

	std::cout << "Ingrese valor inicial de x: ";
	std::cin >> x0;
	std::cout << "Ingrese valor final de x:";
	std::cin >> x;
	std::cout << "Ingrese valor inicial de y:";
	std::cin >> y;
	std::cout << "Ingrese numero de iteraciones:";
	std::cin >> n;

	EDO A;
	std::cout << "Resultado: " << A.RK(x0, y, x, n, seleccion) << std::endl << std::endl;

	system("pause");
	return 0;
}