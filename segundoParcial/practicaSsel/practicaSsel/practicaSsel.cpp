// practicaSsel.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include "ssel.h"
#include <complex>

int main()
{
	int numEcuaciones;
	cout << "Ingrese numero de ecuaciones: ";
	cin >> numEcuaciones;
	ssel<double> mat(numEcuaciones);
	mat.leeMat();
	cout << "Matriz ingresada: " << endl;
	mat.impMat();
	mat.ordenarReal();
	cout << "Resultados: " << endl;
	mat.impMatResultados();
	system("pause");
}

