#pragma once
#include <iostream>
#include <sstream>

class tratamientoPuntos{
	private:
		int n;
		double *x;
		double *y;

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
		void Lagrange(double xx, double &sum, std::string &pol) {
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
				pol1 = pol1 + "*" + std::to_string(product1);
				std::cout << pol1 << std::endl;
				sum = sum + product;
				pol = pol + pol1 + " + ";
			}
		}
};

