// practicaSsel.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include "ssel.h"
#include <complex>

int main()
{
	int numEcuaciones;
	int sel = 0;
	cout << "Ingrese numero de ecuaciones: ";
	cin >> numEcuaciones;
	ssel<double> mat(numEcuaciones);
	mat.leeMat();
	cout << "Matriz ingresada: " << endl;
	mat.impMat();
	mat.ordenarReal();
	cout << "Seleccione un metodo:" << endl
		<< "1. Gauss" << endl
		<< "2. Gauss-Jordan" << endl
		<< "3. Jacobi" << endl
		<< "4. Gauss-Seidel" << endl;
	while (sel < 1 || sel > 4) {
		cin >> sel;
		if (sel == 1)	mat.Gauss();
		if (sel == 2)	mat.GaussJordan();
		if (sel == 3)	mat.Jacobi();
		if (sel == 4)	mat.GaussSeidel();
		else if(sel < 1 || sel > 4)   cout << "Intente de nuevo" << endl;
	}

	cout << "Resultados: " << endl;
	mat.impMatResultados();
	system("pause");
}

