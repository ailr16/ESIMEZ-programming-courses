#include "pch.h"
#include <iostream>
#include "ssel.h"
#include "lozano.h"

using namespace std;

int main() {

	Practica1 a;
	a.Nombre();

	system("pause");
	system("cls");

	ssel <double> sistema(4);
	cout << "Ingrese la matriz aumentada (sistema de ecuaciones 4x4)" << endl;
	sistema.leeMat();
	cout << endl << endl << "Matriz ingresada:" << endl << endl;
	sistema.impMat();
	sistema.Gauss();
	cout << "Resultados:" << endl;
	sistema.impMatResultados();

	system("pause");
}