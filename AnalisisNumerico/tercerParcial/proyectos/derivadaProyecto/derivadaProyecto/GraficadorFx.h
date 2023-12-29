#include <math.h>
#include <string.h>

using info::lundin::math::ExpressionParser;

#pragma once

class GraficadorFx {
	private:
		double x, y, t, r, y2;
		int c, f, n;

	public:
		double yi, yf, xi, xf, y0, x0, ti, tf;
		double *Y, *X, *Y2;
		double *R, *T;
		int ci = 1, cf, fi, ff, f0, c0;
		int *C;
		int *F;
		int *C2;
		int *F2;

	public:
		void liberarMemoria(void) {
			delete C;
			delete F;
			delete Y;
			delete X;
			delete R;
			delete T;
		}
	public:
		GraficadorFx(int n) {
			this->n = n;
			C = new int[n];
			F = new int[n];
			C2 = new int[n];
			F2 = new int[n];
			Y = new double[n];
			Y2 = new double[n];
			X = new double[n];
			R = new double[n];
			T = new double[n];
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
		double FunT(double t) {
			r = 3;				//Funcion
			return r;
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
		void GraficaXY(double xi, double xf, int cf, int ff, System::String^ fn, System::String^ fn2) {
			this->xi = xi;
			this->xf = xf;
			this->cf = cf;
			this->ff = ff;

			double h;
			h = (xf - xi) / n;

			for (int k = 0; k < n; k++) {
				x = xi + k * h;
				y = FunX(x, fn);
				y2 = FunX(x, fn2);
				X[k] = x;
				Y[k] = y;
				Y2[k] = y2;
			}

			yi = 0;
			yf = Y[0];
			for (int k = 0; k < n; k++) {
				if (Y[k] > yi) yi = Y[k];
				if (Y[k] < yf) yf = Y[k];
			}
			double yf2 = Y2[0];
			for (int k = 0; k < n; k++) {
				if (Y2[k] > yi) yi = Y2[k];
				if (Y2[k] < yf2) yf2 = Y2[k];
			}
			if (yf > yf2)	yf = yf;
			else if (yf < yf2)	yf = yf2;

			for (int k = 0; k < n; k++) {
				C[k] = Col(X[k]);
				F[k] = Fil(Y[k]);
				C2[k] = Col(X[k]);
				F2[k] = Fil(Y2[k]);
			}
		}
		void GraficaPolar(double ti, double tf, int cf, int ff){
			this->ti = ti;
			this->tf = tf;
			this->cf = cf;
			this->ff = ff;
			double h = (tf - ti) / n;
			for (int k = 0; k < n; k++) {
				t = ti + k * h;
				r = FunT(t);
				T[k] = t;
				R[k] = r;
				X[k] = r * cos(t);
				Y[k] = r * sin(t);
			}

			yi = Y[0];
			xi = X[0];
			yf = Y[0];
			xf = X[0];
			for (int k = 0; k < n; k++) {
				if (Y[k] < yi) yi = Y[k];
				if (Y[k] > yf) yf = Y[k];
				if (X[k] < xi) xi = X[k];
				if (X[k] > yf) xf = X[k];
			}

			for (int k = 0; k < n; k++) {
				C[k] = Col(X[k]);
				F[k] = Fil(Y[k]);
			}
		}
		void GraficaPolar(double ti, double tf, int cf, int ff, System::String^ fn) {
			this->ti = ti;
			this->tf = tf;
			this->cf = cf;
			this->ff = ff;
			double h = (tf - ti) / n;
			for (int k = 0; k < n; k++) {
				t = ti + k * h;
				r = FunT(t, fn);
				T[k] = t;
				R[k] = r;
				X[k] = r * cos(t);
				Y[k] = r * sin(t);
			}

			yi = Y[0];
			xi = X[0];
			yf = Y[0];
			xf = X[0];
			for (int k = 0; k < n; k++) {
				if (Y[k] < yi) yi = Y[k];
				if (Y[k] > yf) yf = Y[k];
				if (X[k] < xi) xi = X[k];
				if (X[k] > yf) xf = X[k];
			}

			for (int k = 0; k < n; k++) {
				C[k] = Col(X[k]);
				F[k] = Fil(Y[k]);
			}
		}
};