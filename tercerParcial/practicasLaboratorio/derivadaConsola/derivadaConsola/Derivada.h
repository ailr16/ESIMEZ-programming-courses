#pragma once
#include <iostream>
#include <sstream>
#include <math.h>

class Derivadas {
	private:
		int n;
		double *x;
		double *y;
		double fxD;
		double **G;
	public:
		Derivadas(int n) {
			this->n = n;
			x = new double[n];
			y = new double[n];
		}
		void pidePuntos(void) {
			for (int i = 0; i < n; i++) {
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
		double regresaAlgunValorDeX(int m) {
			return x[m];
		}
		double regresaAlgunValorDeY(int m) {
			return y[m];
		}
		double derivadaDOS(void) {
			fxD = 0;
			double sum = 0, p, h;
			G = new double*[n + 1];
			for (int i = 0; i <= n; i++)		G[i] = new double[n + 1];

			h = x[1] - x[0];

			for (int i = 0; i < n; i++)		for (int j = 0; j < n; j++)		G[i][j] = 0;
			for (int i = 0; i <= n; i++)		G[i][0] = y[i];

			for (int i = 1; i < n; i++)	for (int j = 0; j < n - i; j++)	G[j][i] = G[j + 1][i - 1] - G[j][i - 1];

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++)		std::cout << G[i][j] << "\t";
				std::cout << std::endl;
			}

			fxD = 0;
			for (int j = 1; j < n; j++) {
				fxD = fxD + pow(-1, j-1)*((G[0][j]) / (j));
			}
			fxD = fxD / h;
			return fxD;
		}
		std::string rectaTangente(void) {
			std::string ecuacion = "";
			if(-fxD*x[0] + y[0] < 0) ecuacion = std::to_string(fxD) + "x" + " - " + std::to_string(fabs(-fxD * x[0] +y[0]));
			else if(-fxD * x[0] + y[0] > 0)	ecuacion = std::to_string(fxD) + "x" + " + " + std::to_string(fabs(-fxD * x[0] + y[0]));
			else if (-fxD * x[0] + y[0] == 0)	ecuacion = std::to_string(fxD) + "x";
			return ecuacion;
		}
};