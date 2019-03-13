#include <complex>
#include <math.h>

#pragma once
//#include <iostream>


//using namespace std;

//template <typename T>
bool menorComplejo(std::complex<double> a, std::complex<double> b);

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
		/*void leeMat(void) {
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
		}*/
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
};

bool menorComplejo(std::complex<double> a, std::complex<double> b){
	if (a.real() < b.real() && a.imag() < b.imag())	return true;
	else   return false;
}