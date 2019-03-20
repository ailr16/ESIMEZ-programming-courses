#include "pch.h"
#include <iostream>
#include "ssel.h"
#include "lozano.h"
#include <fstream>

using namespace std;

int main() {

	Practica1 a;
	a.Nombre();

	double **mat;
	mat = new double*[4];
	for (int i = 0; i < 4; i++)	mat[i] = new double[5];

	system("pause");
	system("cls");

	ssel <double> sistema(4);

	char nombrearchivo[11] = "matriz.txt";
	double lectura;
	char c;
	string st;

	int seleccion = 0;
	while (seleccion != 1 && seleccion != 2) {
		cout << "Practica 8. Solucion de un sistema de ecuaciones 4x4. Metodo de Gauss" << endl << "Menu:" << endl << endl
			<< "1. Ingresar matriz a traves de consola." << endl
			<< "2. Leer matriz del archivo de texto 'matriz.txt'.";
		cin >> seleccion;
		if (seleccion == 1) {
			cout << "Ingrese la matriz aumentada (sistema de ecuaciones 4x4)" << endl;
			//sistema.leeMat();
		}
		else if (seleccion == 2) {
			cout << "Leer del archivo de texto." << endl;
			ifstream archivo_in;
			archivo_in.open(nombrearchivo);
			if (archivo_in.fail()) {
				cout << "Error al abrir el archivo";
				exit(1);
			}
			getline(archivo_in, st);
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 5; j++) {
					archivo_in >> lectura;
					mat[i][j] = lectura;
				}
			}
			sistema.modificaMatriz(mat);
		}
		else {
			cout << "Seleccion incorrecta" << endl;
			system("cls");
		}
	}

	cout << endl << endl << "Matriz ingresada:" << endl << endl;
	sistema.impMat();
	sistema.GaussSeidel(0.0001, 8);
	cout << "Resultados:" << endl;
	sistema.impMatResultados();

	system("pause");
}