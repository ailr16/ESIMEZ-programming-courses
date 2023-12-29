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
	cout << "Ingrese error:";
	double Er;
	cin >> Er;
	cout << "Ingrese iteraciones:";
	int it;
	cin >> it;
	cout << "Matriz ingresada: " << endl;
	mat.impMat();
	mat.GaussSeidel(Er, it);
	cout << "Resultados: " << endl;
	mat.impMatResultados();
	system("pause");
}

