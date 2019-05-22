#pragma once

#include <math.h>
#include <iostream>
#include <complex>

using namespace std;

class ssel {
	private:
		int m, n;
		double **a, *z;
	public:
		ssel(int m){
			this->m = m;
			n = m + 1;
			z = new double[m];
			a = new double*[m];
			for (int i = 0; i < m; i++) {
				a[i] = new double[n];
			}
		}
		void modificaMatriz(double** b, double *z) {
			this->a = b;
			this->z = z;
		}
		void leeMat(void) {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					cout << "Ingrese [" << i << "][" << j << "]";
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
				cout << "x[" << i+1 << "] = " << z[i] << endl;
			}
		}
		
		void GaussJordan() {
			double pivote;
			double cero;
			for (int i = 0; i < m; i++) {
				pivote = a[i][i];
				for(int j = 0; j < n; j++) {
					a[i][j] = a[i][j] / pivote;
				}
				for (int k = 0; k < m; k++) {
					if (k != i) {
						cero = a[k][i];
						for (int j = 0; j < n; j++) {
							a[k][j] = a[k][j] - cero * a[i][j];
						}
					}
				}
			}
			for (int i = 0; i < m; i++) {
				z[i] = a[i][n-1];
			}
		}
};