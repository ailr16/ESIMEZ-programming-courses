#include "pch.h"
#include <iostream>
#include "EDO.h"
#include "lozano.h"

int main() {
	Practica1 prac;
	prac.Nombre();
	system("pause");
	system("cls");
	double x0, y, x;  int n; x0 = 0; x = 2; y = 1; n = 3;

	std::cout << "EDO. Ejemplo Metodo de Runge-Kutta de 4° orden" << std::endl << std::endl
		<< "Datos:" << std::endl
		<< "Valor inicial de x= " << x0 << std::endl
		<< "Valor final de x= " << x << std::endl
		<< "Valor inicial de y= " << y << std::endl
		<< "Numero de iteraciones: " << n << std::endl
		<< "Se resuelve para la funcion F(x,y)= x/y"<< std::endl
		<< "NOTA: La ecuacion diferencial se resuelve para valor final de x." << std::endl << std::endl;

	EDO A;
	std::cout << "Resultado: " << A.RK(x0, y, x, n,2) << std::endl << std::endl;

	system("pause");
	return 0;
}