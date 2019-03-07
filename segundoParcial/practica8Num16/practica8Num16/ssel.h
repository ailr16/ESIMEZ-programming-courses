#pragma once

#include <math.h>
#include <iostream>
#include <complex>

using namespace std;

template <typename T>
class ssel {
	private:
		int m, n;
		//complex<double> **a, *z;
		T **a, *z;
	public:
		ssel(int m){
			this->m = m;
			n = m + 1;
			//z = new complex<double>[m];
			//a = new complex<double>*[m];
			z = new T[m];
			a = new T*[m];
			for (int i = 0; i < m; i++) {
				//a[i] = new complex<double>[n];
				a[i] = new T[n];
			}
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
				cout << "z[" << i+1 << "] = " << z[i] << endl;
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
		void Jacobi(int mi, double Er) {

		}
};