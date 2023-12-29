#include <math.h>
#pragma once

using info::lundin::math::ExpressionParser;

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
		double Simpson(double x0, double xn, int n) {
			double h = (xn - x0) / (2*n);
			double x;
			double s = 0;
			double AT;

			s = f(x0) + f(xn);

			for (int i = 1; i <= 2*n - 1; i++) {
				x = x0 + i * h;
				if (i % 2 == 0)	s = s + 2 * f(x);
				else   s = s + 4 * f(x);
			}
			AT = (h / 3)*s;
			return AT;
		}
		double Simpson(double x0, double xn, int n, int ind) {
			double h = (xn - x0) / (2 * n);
			double x;
			double s = 0;
			double AT;

			s = f(x0, ind) + f(xn, ind);

			for (int i = 1; i <= 2 * n - 1; i++) {
				x = x0 + i * h;
				if (i % 2 == 0)	s = s + 2 * f(x, ind);
				else   s = s + 4 * f(x, ind);
			}
			AT = (h / 3)*s;
			return AT;
		}
		double trapecio(double x0, double xn, int n, System::String^ fun) {
			double h = (xn - x0) / n;
			double x, y, AT;
			double y0 = f(x0, fun);
			double yn = f(xn, fun);
			double s = 0;

			for (int k = 1; k <= n - 1; k++) {
				x = x0 + k * h;
				y = f(x, fun);
				s = s + y;
			}

			AT = h * (((y0 + yn) / 2) + s);
			return AT;
		}
		double Simpson(double x0, double xn, int n, System::String^ fun) {
			double h = (xn - x0) / (2 * n);
			double x;
			double s = 0;
			double AT;

			s = f(x0, fun) + f(xn, fun);

			for (int i = 1; i <= 2 * n - 1; i++) {
				x = x0 + i * h;
				if (i % 2 == 0)	s = s + 2 * f(x, fun);
				else   s = s + 4 * f(x, fun);
			}
			AT = (h / 3)*s;
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
			return x*x;
		}
		double f(double x, System::String^ fun) {
			ExpressionParser^ par = gcnew ExpressionParser();
			par->Values->Add("x", x);
			return par->Parse(fun);
		}
};