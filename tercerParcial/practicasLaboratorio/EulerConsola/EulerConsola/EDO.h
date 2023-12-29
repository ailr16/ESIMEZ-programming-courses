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
		double fun(double x, double y) {
			return x*y;
		}
};