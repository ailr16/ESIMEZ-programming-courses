#pragma once

class EDO {
	private:
		int n;
	public:
		EDO() {
		}
		double Euler(double xi, double xf, double y, double i) {
			double k;
			double h = (xf - xi) / i;
			double f = fun(xi,y);
			
			k = xi + h;
			for (int a = 1; a <= i; a++) {
				y = y + (h*f);
				f = (k*y);
				k = k + h;
			}
			return y;
		}
		double RK(float x0, float y0, float x, double n) {
			double h = (x - x0) / n;
			double k1, k2, k3, k4, k5;

			double y = y0;
			for (int i = 1; i <= n; i++){
				k1 = h * fun(x0, y);
				k2 = h * fun(x0 + 0.5*h, y + 0.5*k1);
				k3 = h * fun(x0 + 0.5*h, y + 0.5*k2);
				k4 = h * fun(x0 + h, y + k3);

				y = y + (1.0 / 6.0)*(k1 + 2 * k2 + 2 * k3 + k4);;

				x0 = x0 + h;
			}
			return y;
		}
		double RK(float x0, float y0, float x, double n, int ind) {
			double h = (x - x0) / n;
			double k1, k2, k3, k4, k5;

			double y = y0;
			for (int i = 1; i <= n; i++) {
				k1 = h * fun(x0, y,ind);
				k2 = h * fun(x0 + 0.5*h, y + 0.5*k1, ind);
				k3 = h * fun(x0 + 0.5*h, y + 0.5*k2, ind);
				k4 = h * fun(x0 + h, y + k3, ind);

				y = y + (1.0 / 6.0)*(k1 + 2 * k2 + 2 * k3 + k4);;

				x0 = x0 + h;
			}
			return y;
		}
		double fun(double x, double y) {
			return x*y;
		}
		double fun(double x, double y, int ind) {
			if(ind == 1)	return x*y;
			if(ind == 2)	return x/y;
			if(ind == 3)	return pow(x,2)/y;
			if(ind == 4)	return x / pow(y, 2);
			if(ind == 5)	return pow(x,3)/pow(y,3);
		}
};