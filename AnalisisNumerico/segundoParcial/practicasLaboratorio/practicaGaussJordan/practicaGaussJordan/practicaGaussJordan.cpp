#include "pch.h"
#include <iostream>
#include "ssel.h"
#include "lozano.h"
#include <complex>

int main()
{
	Practica1 a;
	a.Nombre();
	system("pause");
	system("cls");
	int numEcuaciones;
	int sel = 0;
	cout << "Ingrese numero de ecuaciones: ";
	cin >> numEcuaciones;
	ssel<double> mat(numEcuaciones);
	mat.leeMat();
	cout << "Matriz ingresada: " << endl;
	mat.impMat();
	mat.GaussJordan();
	cout << "Resultados: " << endl;
	mat.impMatResultados();
	system("pause");
}

