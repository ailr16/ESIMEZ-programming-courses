#pragma once

#include <math.h>
#include <iostream>
#include <complex>

using namespace std;


double magnitud(complex<double> a);

template <typename T>
class ssel {
	private:
		int m, n;
		T **a, *z, *q;
		T s;
	public:
		ssel(int m){
			this->m = m;
			n = m + 1;
			z = new T[m];
			q = new T[m];
			a = new T*[m];
			for (int i = 0; i < m; i++) {
				a[i] = new T[n];
			}
		}
		void leeMat(void) {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					cout << "Ingrese [" << i+1 << "][" << j+1 << "] ";
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
		void Jacobi(void){
			double Er = 0.0000001;
			int b;
			int mi = 10;
			for (int i = 0; i < m; i++){
				z[i] = 0;
			}
			for (int k = 1; k <= mi; k++){
				b = 0;
				for (int l = 0; l < m; l++)
					q[l] = z[l];
				for (int i = 0; i < m; i++){
					s = 0;
					for (int k = 0; k < m; k++){
						if (i != k){
							s = s + a[i][k] * q[k];
						}
					}
					if (a[i][i] != 0){
						z[i] = (a[i][n-1] - s ) / a[i][i];
						if (fabs(z[i] - q[i]) < Er){
							b = b + 1;
						}
					}
				}
			}
		}
		void GaussSeidel(void) {
			double Er = 0.0000001;
			int b;
			int mi = 10;
			for (int i = 0; i < m; i++) {
				z[i] = 0;
			}
			for (int k = 1; k <= mi; k++) {
				b = 0;
				for (int l = 0; l < m; l++)
					q[l] = z[l];
				for (int i = 0; i < m; i++) {
					s = 0;
					for (int k = 0; k < m; k++) {
						if (i != k) {
							s = s + a[i][k] * q[k];
						}
					}
					if (a[i][i] != 0) {
						z[i] = (a[i][n - 1] - s) / a[i][i];
						if (fabs(z[i] - q[i]) < Er) {
							b = b + 1;
						}
					}
				}
			}
		}
		void ordenarReal(void) {
			double aux, aux2;
			int indiceAux;

			for (int k = 1; k <= m; k++) {
				indiceAux = 0;
				aux = a[0][n - 1 - k];
				for (int i = 0; i < m + 1 -k; i++) {
					if (a[i][n - 1 - k] > aux) {				//1. Encontrar maximo de ultima columna (de la matriz cuadrada)
						aux = a[i][n - 1 - k];
						indiceAux = i;
					}
				}
				//cout << "Elemento mayor de la ultima columna= " << aux << "  esta en la fila: " << indiceAux << endl;
				for (int i = 0; i < n; i++) {				//2. Cambiar ultima fila por fila encontrada en el paso anterior
					aux2 = a[m - k][i];
					a[m - k][i] = a[indiceAux][i];
					a[indiceAux][i] = aux2;
				}
			}
		}
		/*void ordenarComplejo(void) {
			complex<double> aux, aux2;
			int indiceAux;
			
			for (int k = 1; k <= m; k++) {
				indiceAux = 0;
				aux = a[0][n - 1 - k];
				for (int i = 0; i < m + 1 - k; i++) {
					if (magnitud(a[i][n - 1 - k]) > magnitud(aux)) {				//1. Encontrar maximo de ultima columna (de la matriz cuadrada)
						aux = a[i][n - 1 - k];
						indiceAux = i;
					}
				}
				//cout << "Elemento mayor de la ultima columna= " << aux << "  esta en la fila: " << indiceAux << endl;
				for (int i = 0; i < n; i++) {				//2. Cambiar ultima fila por fila encontrada en el paso anterior
					aux2 = a[m - k][i];
					a[m - k][i] = a[indiceAux][i];
					a[indiceAux][i] = aux2;
				}
			}
		}*/
};

double magnitud(complex<double> a) {
	double r;
	r = sqrt(pow(a.real(), 2) + pow(a.imag(), 2));
	return r;
}