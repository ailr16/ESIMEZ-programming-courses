#include "pch.h"
#include <iostream>
#include "lozano.h"
#include "ssel.h"
#include <math.h>
using namespace std;

void leeMat(void);
void impMat(void);
void impMatResultados(void);
void Newton(double Er, int ni, double *x, double **a, int numEc, double *b);
double fun1(double x, double y);
double fun2(double x, double y);
double fun3(double x, double y);
double fun4(double x, double y);
double fun5(double x, double y);
double fun6(double x, double y);
void generaJf(void);
int m, n, iteraciones;
double error;
double **a;
double *z;
double *b;

int main(){
	Practica1 abc;
	abc.Nombre();
	system("pause");
	system("cls");

	cout << "Solucion de sistemas de ecuaciones no lineales (2 ecuaciones)";
	m = 2;
	n = m + 1;
	cout << endl << "Ingrese error: ";
	cin >> error;
	cout << "Ingrese iteraciones: ";
	cin >> iteraciones;

	z = new double[m];
	b = new double[m];
	a = new double*[m];
	for (int i = 0; i < m; i++)		a[i] = new double[n];

	cout << endl << "Ingrese valores iniciales: ";
	for (int i = 0; i < m; i++) {
		cout << "x[" << i + 1 << "] =";
		cin >> b[i];
	}

	leeMat();
	cout << "Matriz ingresada" << endl;
	impMat();

	ssel<double> sistema(m);

	for (int k = 1; k <= iteraciones; k++) {
		generaJf();
		sistema.modificaMatriz(a);
		sistema.GaussJordan();
		z = sistema.regresaMatrizResultados();
		for (int i = 0; i < m; i++) {
			b[i] = b[i] + z[i];
		}
	}

	cout << "Resultados: " << endl;
	impMatResultados();
	system("pause");
}

void leeMat(void) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Ingrese [" << i + 1 << "][" << j + 1 << "] ";
			cin >> a[i][j];
		}
	}
}
void impMat(void) {
	for (int k = 0; k < m; k++) {
		for (int i = 0; i < n; i++) {
			cout << a[k][i] << "\t";
		}
		cout << endl;
	}
}
void impMatResultados(void) {
	for (int i = 0; i < m; i++) {
		cout << "z[" << i + 1 << "] = " << b[i] << endl;
	}
}
void generaJf() {
	a[0][0] = fun1(b[0], b[1]);
	a[0][1] = fun2(b[0], b[1]);
	a[0][2] = fun3(b[0], b[1]);
	a[1][0] = fun4(b[0], b[1]);
	a[1][1] = fun5(b[0], b[1]);
	a[1][2] = fun6(b[0], b[1]);
}
void Newton(double Er, int ni, double *x, double **a, int numEc, double *b) {
	int bn;
	ssel<double> sistema(numEc);
	double * q;
	q = new double[numEc];
	double * h;
	h = new double[numEc];

	sistema.modificaMatriz(a);
	sistema.GaussJordan();
	x = sistema.regresaMatrizResultados();
}
double fun1(double x, double y) {
	return exp(x);
}
double fun2(double x, double y) {
	return -1;
}
double fun3(double x, double y) {
	return -exp(x) + y;
}
double fun4(double x, double y) {
	return 2 * x;
}
double fun5(double x, double y) {
	return 2 * y;
}
double fun6(double x, double y) {
	return (-pow(x, 2) - pow(y, 2) + 4);
}