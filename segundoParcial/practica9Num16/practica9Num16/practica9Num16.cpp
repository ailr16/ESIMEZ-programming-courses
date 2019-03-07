#include "pch.h"
#include <iostream>
#include "lozano.h"
#include "ssel.h"

using namespace std;

int main(){
	Practica1 a;
	a.Nombre();
	system("pause");
	system("cls");

	ssel <double> sistema(4);
	cout << "Ingrese la matriz de coeficientes (sistema 4x4)" << endl;
	sistema.leeMat();
	cout << endl << endl << "Matriz ingresada:" << endl << endl;
	sistema.impMat();
	sistema.GaussJordan();
	cout << "Resultados" << endl << endl;
	sistema.impMatResultados();

	system("pause");
}