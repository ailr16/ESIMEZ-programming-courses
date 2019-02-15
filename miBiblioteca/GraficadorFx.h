#include <math.h>
#include <string.h>

using info::lundin::math::ExpressionParser;

#pragma once

class GraficadorFx {
	private:
		double xi, xf, x, y, t, r;
		int c, f, n;

	public:
		double yi, yf, y0, x0, ti, tf;
		double *Y, *X;
		int ci = 1, cf, fi, ff, f0, c0;
		int *C;
		int *F;

	public:
		void liberarMemoria(void) {
			delete C;
			delete F;
			delete Y;
			delete X;
		}
	public:
		GraficadorFx(int n) {
			this->n = n;
			C = new int[n];
			F = new int[n];
			Y = new double[n];
			X = new double[n];
		}
		~GraficadorFx() {
			liberarMemoria();
		}
		int Col(double x) {
			int co = (int)(xf - x) / (xf - xi)*ci + (x - xi) / (xf - xi)*cf;
			return co;
		}
		int Fil(double y) {
			int fila = (int)(yf - y) / (yf - yi)*fi + (y - yi) / (yf - yi)*ff;
			return fila;
		}
		double Fun(double x) {
			y = pow(x,3);			//Funcion
			return y;
		}
		double FunX(double x, System::String^ fn) {
			ExpressionParser^ par = gcnew ExpressionParser();
			par->Values->Add("x", x);
			return par->Parse(fn);
		}
		double FunT(double t, System::String^ fn) {
			ExpressionParser^ par = gcnew ExpressionParser();
			par->Values->Add("t", t);
			return par->Parse(fn);
		}
		void GraficaXY(double xi, double xf, int cf, int ff) {
			this->xi = xi;
			this->xf = xf;
			this->cf = cf;
			this->ff = ff;

			double h;
			h = (xf - xi) / n;

			for (int k = 0; k < n; k++) {
				x = xi + k * h;
				y = Fun(x);
				X[k] = x;
				Y[k] = y;
			}

			yi = 0;
			yf = Y[0];
			for (int k = 0; k < n; k++) {
				if (Y[k] > yi) yi = Y[k];
				if (Y[k] < yf) yf = Y[k];
			}

			for (int k = 0; k < n; k++) {
				C[k] = Col(X[k]);
				F[k] = Fil(Y[k]);
			}
		}
		void GraficaXY(double xi, double xf, int cf, int ff, System::String^ fn) {
			this->xi = xi;
			this->xf = xf;
			this->cf = cf;
			this->ff = ff;

			double h;
			h = (xf - xi) / n;

			for (int k = 0; k < n; k++) {
				x = xi + k * h;
				y = FunX(x, fn);
				X[k] = x;
				Y[k] = y;
			}

			yi = 0;
			yf = Y[0];
			for (int k = 0; k < n; k++) {
				if (Y[k] > yi) yi = Y[k];
				if (Y[k] < yf) yf = Y[k];
			}

			for (int k = 0; k < n; k++) {
				C[k] = Col(X[k]);
				F[k] = Fil(Y[k]);
			}
		}
		void GraficaPolar(double ti, double tf, System::String^ fn){
			this->ti = ti;
			this->tf = tf;
			double h = (tf - ti) / n;
			for (int k = 0; k < n; k++) {
				t = ti + k * h;
				r = FunT(t, fn);
				x = r * cos(t);
				y = r * sin(t);
				X[k] = x;
				Y[k] = y;
			}

			yi = 0;
			yf = Y[0];
			for (int k = 0; k < n; k++) {
				if (Y[k] > yi) yi = Y[k];
				if (Y[k] < yf) yf = Y[k];
			}

			for (int k = 0; k < n; k++) {
				C[k] = Col(X[k]);
				F[k] = Fil(Y[k]);
			}
		}

};