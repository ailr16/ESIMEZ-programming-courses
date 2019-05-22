#pragma once
#include <iostream>
#include <sstream>
#include "ssel.h"

void generaVtS(int n, int m, double**S, double**V, double**Vt, double*x, double*y);
void producto(int n, int m, double **A, double**B, double **C);
void generaSt(int n, int m, double **A, double **B, double*x, double *y);

class tratamientoPuntos{
	private:
		int n;
		double *x;
		double *y;

	public:
		tratamientoPuntos(int n) {
			this->n = n;
			x = new double[n];
			y = new double[n];
		}
		void pidePuntos(void){
			for(int i = 0; i < n; i++){
				std::cout << "Ingresa x[" << i << "]= ";
				std::cin >> x[i];
				std::cout << "Ingresa y[" << i << "]= ";
				std::cin >> y[i];
			}
		}
		void modificaArregloX(double *x) {
			this->x = x;
		}
		void modificaArregloY(double *y) {
			this->y = y;
		}
		void imprimePuntos(void) {
			for(int i = 0; i < n; i++){
				std::cout << "x[" << i << "]= " << x[i] << "\t"
					<< "y[" << i << "]= " << y[i] << std::endl;
			}
		}
		void minimosCuadrados(int m, double *x, double *y, double**S, double**V, double**Vt, double **St, double *z) {
			this->x = x;
			this->y = y;
			generaVtS(n, m, S, V, Vt, x, y);
			generaSt(n, m, S, St, x, y);
			ssel sistema(m);
			sistema.modificaMatriz(St, z);
			sistema.GaussJordan();
		}
		void Lagrange(double xx, double &fx, std::string &pol) {
			double p1, p2;
			fx = 0;
			std::string pol1 = "";
			pol = "";
			double l;
			fx = 0;
			for (int i = 0; i < n; i++) {
				l = y[i];
				for (int j = 0; j < n; j++) {
					if (i != j) {
						pol1 = pol1 + "(x - " + std::to_string(x[j]) + ")";
						l = (l*(xx - x[j])) / (x[i] - x[j]);
					}
					pol1 = pol1 + "/" + std::to_string(x[i] - x[j]);
				}
				fx = fx + l;
				pol = pol + " + " + pol1;

			}
		}
};

void generaVtS(int n , int m, double**S, double**V, double**Vt, double*x, double*y) {
	for (int i = 0; i < m; i++) {			//Genera V
		for (int j = 0; j < n; j++) {
			V[i][j] = pow(x[j], i);
		}
	}
	//Genera V transpuesta
	for (int i = 0; i < n; i++) {			//Genera V
		for (int j = 0; j < m; j++) {
			Vt[i][j] = V[j][i];
		}
	}
	//Multiplica V por Vt
	producto(n, m, V, Vt, S);
}
void producto(int n, int m, double **A, double**B, double **C) {		//A*B=C
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			C[i][j] = 0;
			for (int k = 0; k < n; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}
void generaSt(int n, int m, double **A, double **B, double*x, double *y) {		//B mat aumentada
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			B[i][j] = A[i][j];
		}
	}
	double t;
	for (int i = 0; i < m; i++) {
		t = 0;
		for (int j = 0; j < n; j++) {
			t += y[j] * pow(x[j], i);
		}
		B[i][m] = t;
	}
}