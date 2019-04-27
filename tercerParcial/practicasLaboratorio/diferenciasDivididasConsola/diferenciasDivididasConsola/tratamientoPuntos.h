#pragma once
#include <iostream>
#include <sstream>

using namespace System;

class tratamientoPuntos{
	private:
		int n;
		double *x;
		double *y;
		double **F;

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
				if(product1 < 0)		pol1 = "-" + std::to_string(fabs(product1)) + "*" + pol1;
				if(product1 > 0)		pol1 = "+" + std::to_string(fabs(product1)) + "*" + pol1;
				else if(product1 == 0 )   pol1 = pol1;
				sum = sum + product;
				
				pol = pol + pol1;
			}
		}
		System::String^ LagrangeCLR(double xx, double &sum) {
			double product, product1;
			double dif;
			System::String^ pol = "";
			System::String^ pol1 = "";

			sum = 0;
			for (int i = 0; i < n; i++) {
				product = y[i];
				product1 = y[i];
				pol1 = "";
				for (int j = 0; j < n; j++) {
					if (i != j) {
						if(x[j] == 0)	pol1 = pol1 + "(x)";
						else   pol1 = pol1 + "(x-" + x[j] + ")";
						product = product * (xx - x[j]) / (x[i] - x[j]);
						product1 = product1 * (1 / (x[i] - x[j]));
					}
				}
				if (product1 < 0)		pol1 = "-" + fabs(product1) + "*" + pol1;
				if (product1 > 0)		pol1 = "+" + fabs(product1) + "*" + pol1;
				else if (product1 == 0)   pol1 = pol1;
				sum = sum + product;

				pol = pol + pol1;
			}
			return pol;
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
		System::String^ diferenciasDivididasCLR(double xd, double &fd) {
			fd = 0;
			double p, p1;
			System::String^ pol = "";
			System::String^ pol1 = "";
			System::String^ pol2 = "";

			F = new double*[n + 1];
			for (int i = 0; i <= n; i++)		F[i] = new double[n + 1];
			for (int i = 0; i < n; i++)		for (int j = 0; j < n; j++)		F[i][j] = 0;
			for (int i = 0; i <= n; i++)		F[i][0] = y[i];
			for (int i = 1; i < n; i++) for (int j = 0; j < n - i; j++)		F[j][i] = (F[j + 1][i - 1] - F[j][i - 1]) / (x[i + j] - x[j]);

			fd = y[0];
			pol = System::Convert::ToString(y[0]);
			for (int j = 1; j < n; j++) {
				p = 1;
				pol1 = "";
				for (int i = 0; i < j; i++) {
					p = p * (xd - x[i]);
					if (x[i] > 0)	pol1 = pol1 + "(x - " + x[i] + ")";
					else if (x[i] < 0)	pol1 = pol1 + "(x + " + fabs(x[i]) + ")";
					else if (x[i] == 0)		pol1 = pol1 + "(x)";
				}
				fd = fd + F[0][j] * p;
				if (F[0][j] < 0)		pol2 = " - " + fabs(F[0][j]) + "*" + pol1;
				else if (F[0][j] > 0)		pol2 = " + " + fabs(F[0][j]) + "*" + pol1;
				else if (F[0][j] == 0)		pol2 = pol1;
				pol = pol + pol2;
			}
			return pol;
		}
};

