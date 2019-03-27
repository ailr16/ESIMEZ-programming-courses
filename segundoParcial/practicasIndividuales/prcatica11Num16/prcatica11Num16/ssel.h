#pragma once

#include <math.h>
#include <iostream>
#include <complex>

using namespace std;

template <typename T>
class ssel {
	private:
		int m, n;
		T **a, *z;
		T *q;
	public:
		ssel(int m){
			this->m = m;
			n = m + 1;
			z = new T[m];
			a = new T*[m];
			for (int i = 0; i < m; i++) {
				a[i] = new T[n];
			}
		}
		void modificaMatriz(double** b) {
			this->a = b;
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
		void Gauss() {
			int n = m + 1;
			T pivote;
			T cero;
			T s;
			for (int i = 0; i < m; i++) {
				pivote = a[i][i];
				for (int j = 0; j < n; j++) {
					a[i][j] = a[i][j] / pivote;
				}
				for (int k = 0; k < m; k++) {
					if (k > i) {
						cero = a[k][i];
						for (int j = i; j < n; j++) {
							a[k][j] = a[k][j] - cero * a[i][j];
						}
					}
				}
			}
			z[m-1] = a[m-1][n-1];
			for (int i = 0; i < m; i++) {
				s = 0;
				for (int l = i + 1; l < m; l++) {
					s = s + a[i][l] * z[l];
				}
				z[i] = a[i][n-1] - s;
			}
		}
		void GaussJordan() {
			T pivote;
			T cero;
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
		void GaussSeidel(double error, int iteraciones) {
			q = new T[m];
			T Er = error;
			T s = 0;
			int b;
			int mi = iteraciones;
			for (int i = 0; i < m; i++) {
				z[i] = 0;
			}
			for (int k = 1; k <= mi; k++) {
				b = 0;
				for (int l = 0; l < m; l++)
					q[l] = z[l];
				for (int i = 0; i < m; i++) {
					for (int k = 0; k < m; k++) {
						if (i != k) {
							s = s + a[i][k] * q[k];
						}
					}
					if (a[i][i] != 0) {
						z[i] = (a[i][n - 1] - s) / a[i][i];
						if (z[i] - q[i] < Er) {
							b = b + 1;
						}
					}
				}
			}
		}
};