#include <complex>
#include <math.h>

#pragma once
//#include <iostream>


//using namespace std;

//template <typename T>
bool menorComplejo(std::complex<double> a, std::complex<double> b);
double magnitudComplejo(std::complex<double> a);

class ssel {
	private:
		int m, n;
		double **a;
		double *z;
		double *q;

	public:
		ssel(int m){
			this->m = m;
			n = m + 1;
			z = new double[m];
			a = new double*[m];
			for (int i = 0; i < m; i++)		a[i] = new double[n];
		}
		ssel(int m, double **a, double*z) {
			this->m = m;
			n = m + 1;
			
			this->a = a;
			this->z = z;
		}
		void Gauss() {
			int n = m + 1;
			double pivote;
			double cero;
			double s;
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
		void Jacobi(double error, int iteraciones) {
			q = new double[m];
			double zCero = 0;
			double Er = error;;
			double s;
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
					s = 0;
					for (int k = 0; k < m; k++) {
						if (i != k) {
							s = s + a[i][k] * q[k];
						}
					}
					if (a[i][i] != zCero) {
						z[i] = (a[i][n - 1] - s) / a[i][i];
						if (menorComplejo(z[i] - q[i], Er)) {
							b = b + 1;
						}
					}
				}
			}
		}
		void GaussSeidel(double error, int iteraciones) {
			q = new double[m];
			double zCero = 0;
			double Er = error;;
			double s;
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
					s = 0;
					for (int k = 0; k < m; k++) {
						if (i != k) {
							s = s + a[i][k] * q[k];
						}
					}
					if (a[i][i] != zCero) {
						z[i] = (a[i][n - 1] - s) / a[i][i];
						if (menorComplejo(z[i] - q[i], Er)) {
							b = b + 1;
						}
					}
				}
			}
		}
		void ordenar(int seleccion) {		//seleccion = 0 recorrido a la izquierda	seleccion = 1 recorrido hacia la derecha
			double aux, aux2;
			int indiceAux;

			//Recorrido hacia la derecha
			if (seleccion == 0) {
				for (int k = 1; k <= m; k++) {
					indiceAux = 0;
					aux = a[0][n - 1 - k];
					for (int i = 0; i < m + 1 - k; i++) {
						if (a[i][n - 1 - k] > aux) {				//1. Encontrar maximo de ultima columna (de la matriz cuadrada)
							aux = a[i][n - 1 - k];
							indiceAux = i;
						}
					}

					for (int i = 0; i < n; i++) {				//2. Cambiar ultima fila por fila encontrada en el paso anterior
						aux2 = a[m - k][i];
						a[m - k][i] = a[indiceAux][i];
						a[indiceAux][i] = aux2;
					}
				}
			}
		}
};

bool menorComplejo(std::complex<double> a, std::complex<double> b){
	if (a.real() < b.real() && a.imag() < b.imag())	return true;
	else   return false;
}
double magnitudComplejo(std::complex<double> a) {
	return sqrt(pow(a.real(), 2) + pow(a.imag(), 2));
}