#include <math.h>
#pragma once

class Integral {
	private:
		int n;
	public:
		Integral() {
		}
		double trapecio(double x0, double xn, int n) {
			double h = (xn - x0) / n;
			double x, y, AT;
			double y0 = f(x0);
			double yn = f(xn);
			double s = 0;

			for (int k = 1; k <= n - 1; k++) {
				x = x0 + k * h;
				y = f(x);
				s = s + y;
			}

			AT = h * (((y0 + yn) / 2) + s);
			return AT;
		}
		double trapecio(double x0, double xn, int n, int indicador) {
			double h = (xn - x0) / n;
			double x, y, AT;
			double y0 = f(x0, indicador);
			double yn = f(xn, indicador);
			double s = 0;

			for (int k = 1; k <= n - 1; k++) {
				x = x0 + k * h;
				y = f(x, indicador);
				s = s + y;
			}

			AT = h * (((y0 + yn) / 2) + s);
			return AT;
		}
		double f(double x, int indicador) {
			if(indicador == 1)	return pow(x, 2);
			if (indicador == 2)	return pow(x, 3);
			if (indicador == 3)	return sin(x);
			if (indicador == 4)	return cos(x);
			if (indicador == 5)	return exp(x);
		}
		double f(double x) {
			return pow(x, 3);
		}
};