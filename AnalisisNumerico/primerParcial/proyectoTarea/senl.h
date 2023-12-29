#include <iostream>
#include <math.h>

using namespace System;
using namespace std;
using info::lundin::math::ExpressionParser;

#pragma once
ref class senl
{
	private:
		int n;

	public:
		senl(int n) {
			this->n = n;
		}
		double fun(double s, System::String^ fx) {
			ExpressionParser^ par = gcnew ExpressionParser();
			par->Values->Add("s", s);
			return par->Parse(fx);
		}
		double Dfun(double x, System::String^ fx) {
			ExpressionParser^ par = gcnew ExpressionParser();
			par->Values->Add("x", x);
			return par->Parse(fx);
		}
		void biseccion(double xi, double xf, double Er, double &x, System::String^ fx) {
			for (int k = 1; k <= n; k++) {
				x= (xi + xf) / 2;
				if (fabs(x - xf) <= Er || fun(x, fx) == 0) x = x;
				else {
					if (fun(x, fx) * fun(xf, fx) < 0)	xi = x;
					else   xf = x;
				}
			}
		}
		void reglaFalsa(double xi, double xf, double Er, double &x, System::String^ fx){
			for (int k = 1; k <= n; k++) {
				x = xf - ((fun(xf, fx)*(xi - xf)) / (fun(xi, fx) - fun(xf, fx)));
				if (fabs(x - xf) <= Er || fun(x, fx) == 0) x = x;
				else {
					if (fun(x, fx) * fun(xf, fx) < 0)	xi = x;
					else   xf = x;
				}
			}
		}
		void tangente(double xi, double Er, double &x1, System::String^ fx) {
			//Falta completar para obtener la derivada simbolica

			
			for (int k = 1; k <= n; k++) {
				x1 = xi - (fun(xi, fx) / Dfun(xi, fx));
				if (fabs(x1 - xi) < Er)	x1 = x1;
				else
					xi = x1;
			}
		}
		void secante(double xi, double x1, double Er, double &x2, System::String^ fx) {
			for (int k = 1; k <= n; k++) {
				x2 = x1 - ((fun(x1, fx)*(xi - x1)) / (fun(xi, fx) - fun(x1, fx)));
				if (fabs(x2 - xi) < Er)	x2 = x2;
				else
					xi = x2;
			}
		}
};

