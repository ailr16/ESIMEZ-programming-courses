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
		std::complex<double> **a;
		std::complex<double> *z;
		std::complex<double> *q;

	public:
		ssel(int m){
			this->m = m;
			n = m + 1;
			z = new std::complex<double>[m];
			a = new std::complex<double>*[m];
			for (int i = 0; i < m; i++)		a[i] = new std::complex<double>[n];
		}
		ssel(int m, std::complex<double> **a, std::complex<double>*z) {
			this->m = m;
			n = m + 1;
			
			this->a = a;
			this->z = z;
		}
		void Gauss() {
			int n = m + 1;
			std::complex<double> pivote;
			std::complex<double> cero;
			std::complex<double> s;
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
			std::complex<double> pivote;
			std::complex<double> cero;
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
			q = new std::complex<double>[m];
			std::complex<double> zCero(0,0);
			std::complex<double> Er(error, error);
			std::complex<double> s;
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
					s.real(0);
					s.imag(0);
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
		void GaussSeidel(double error) {
			q = new std::complex<double>[m];
			std::complex<double> zCero(0, 0);
			std::complex<double> Er(error, error);
			std::complex<double> s;
			int b;
			int mi = 16;
			for (int i = 0; i < m; i++) {
				z[i] = 0;
			}
			for (int k = 1; k <= mi; k++) {
				b = 0;
				for (int l = 0; l < m; l++)
					q[l] = z[l];
				for (int i = 0; i < m; i++) {
					s.real(0);
					s.imag(0);
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
			std::complex<double> aux, aux2;
			int indiceAux;

			//Recorrido hacia la izquierda
			if (seleccion == 0) {
				for (int k = 1; k <= m; k++) {
					indiceAux = 0;
					aux.real(a[0][n - 1 - k].real());
					aux.imag(a[0][n - 1 - k].imag());
					for (int i = 0; i < m + 1 - k; i++) {
						if (magnitudComplejo(a[i][n - 1 - k]) > magnitudComplejo(aux)) {				//1. Encontrar maximo de ultima columna (de la matriz cuadrada)
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
			//Recorrido hacia la derecha
			else if (seleccion == 1) {
				for (int k = 0; k < m; k++) {
					indiceAux = 0;
					aux.real(a[0][k].real());
					aux.imag(a[0][k].imag());
					for (int i = 0; i < m; i++) {
						if (magnitudComplejo(a[i][k]) > magnitudComplejo(aux)) {				//1. Encontrar maximo de ultima columna (de la matriz cuadrada)
							aux = a[i][k];
							indiceAux = i;
						}
					}

					for (int i = 0; i < n; i++) {				//2. Cambiar ultima fila por fila encontrada en el paso anterior
						aux2 = a[k][i];
						a[k][i] = a[indiceAux][i];
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