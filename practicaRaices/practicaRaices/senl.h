#include <iostream>
#include <math.h>

using namespace System;
using namespace std;
using info::lundin::math::ExpressionParser;

#pragma once
ref class senl
{
	private:
		double xi, xf, Er;
		int n;

	public:
		senl(int n) {
			this->n = n;
		}
		double fun(double x, System::String^ fx) {
			ExpressionParser^ par = gcnew ExpressionParser();
			par->Values->Add("x", x);
			return par->Parse(fx);
		}
		void biseccion(double xi, double xf, double Er, double &xr, System::String^ fx) {
			this->xi = xi;
			this->xf = xf;
			this->Er = Er;

			for (int k = 1; k <= n; k++) {
				xr = (xi + xf) / 2;
				if (fabs(xr - xf) <= Er || fun(xr, fx) == 0) xr = xr;
				else {
					if (fun(xr, fx) * fun(xf, fx) < 0)	xi = xr;
					else   xf = xr;
				}
			}
		}
};

