#pragma once
#include <iostream>
#include <sstream>

class tratamientoPuntos{
	private:
		int n;
		double *x;
		double *y;
		double **F;
		double **G;

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
		void LagrangeDOS(double xx, double &sum, std::string &pol) {
			double product, product1;
			double dif;
			pol = "";
			std::string pol1 = "";

			sum = 0;
			for (int i = 0; i < n; i++) {
				product = y[i];
				product1  = y[i];
				pol1 = "";
				for (int j = 0; j < n; j++) {
					if (i != j) {
						pol1 = pol1 + "(x - " + std::to_string(x[j]) + ")";
						product = product * (xx - x[j]) / (x[i] - x[j]);
						product1 = product1 * (1 / (x[i] - x[j]));
					}
				}
				pol1 = pol1 + "*(" + std::to_string(product1) + ")";
				sum = sum + product;
				
				if (i == n - 1) {
					pol = pol + pol1;
				}
				else {
					pol = pol + pol1 + " + ";
				}
			}
		}
		void diferenciasDivididasDOS(double xd, double &fd, std::string &pol) {
			fd = 0;
			double p, p1;
			pol = "";
			std::string pol1 = "";
			std::string pol2 = "";

			F = new double*[n+1];
			for (int i = 0; i <= n; i++)		F[i] = new double[n+1];

			for (int i = 0; i < n; i++)		for (int j = 0; j < n; j++)		F[i][j] = 0;
			for (int i = 0; i <= n; i++)		F[i][0] = y[i];
			for (int i = 1; i < n; i++) for (int j = 0; j < n - i; j++)		F[j][i] = (F[j + 1][i-1] - F[j][i-1]) / (x[i + j] - x[j]);
			
			fd = y[0];
			pol = std::to_string(y[0]);
			for (int j = 1; j < n; j++) {
				p = 1;
				pol1 = "";
				for (int i = 0; i < j; i++) {
					p = p * (xd - x[i]);
					if(x[i] > 0)	pol1 = pol1 + "(x - " + std::to_string(x[i]) + ")";
					else if(x[i] < 0)	pol1 = pol1 + "(x + " + std::to_string(fabs(x[i])) + ")";
					else if(x[i] == 0)		pol1 = pol1 + "(x)";
				}
				fd = fd + F[0][j]*p;
				if(F[0][j] < 0)		pol2 = " - " + std::to_string(fabs(F[0][j])) + "*" + pol1;
				else if (F[0][j] > 0)		pol2 = " + " + std::to_string(fabs(F[0][j])) + "*" + pol1;
				else if (F[0][j] == 0)		pol2 = pol1;
				pol = pol + pol2;
			}
		}
		void diferenciasFinitasDOS(double xd, double &fx, std::string &pol) {
			fx = 0;
			double s, h;
			double sum=0, p;
			G = new double*[n + 1];
			for (int i = 0; i <= n; i++)		G[i] = new double[n + 1];

			h = x[1] - x[0];
			s = (xd - x[0]) / h;

			for (int i = 0; i < n; i++)		for (int j = 0; j < n; j++)		G[i][j] = 0;
			for (int i = 0; i <= n; i++)		G[i][0] = y[i];

			for (int i = 1; i < n; i++)	for (int j = 0; j < n - i; j++)	G[j][i] = G[j + 1][i - 1] - G[j][i - 1];

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++)		std::cout << G[i][j] << "\t";
				std::cout << std::endl;
			}

			fx = y[0];
			for (int j = 1; j < n; j++) {
				p = 1;
				for (int i = 1; i < j; i++) {
					p = p * (s - (i - 1));
				}
				fx = fx + (p*(G[0][j]/factorial(j)));
			}

		}
		double factorial(int a) {
			double res = 1;
			for (int i = 1; i <= a; i++)	res = res * i;
			return res;
		}
};

