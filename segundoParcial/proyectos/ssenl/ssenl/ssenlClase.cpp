#include <iostream>
using info::lundin::math::ExpressionParser;
using namespace System;

class ssenl {
	private:
		int m, n;
		//std::string **matrizFunciones;
		double **a;
		double *z;
		double *b;
		
	public:
		ssenl(int m, double **a, double*z) {
			n = m + 1;
			a = new double*[m];
			b = new double[m];
			z = new double[m];
			//matrizFunciones = new std::string*[m];
			for (int i = 0; i < m; i++)		a[i] = new double[n];
			//for (int i = 0; i < m; i++)		matrizFunciones[i] = new std::string[n];

			//for (int i = 0; i < m; i++)
				//for (int j = 0; j < n; j++)		matrizFunciones[i][j] = matStr[i][j];
		}
		double funcion(std::string fn) {
			String^ st;
			ExpressionParser^ par = gcnew ExpressionParser();
			par->Values->Add("x", b[0]);
			par->Values->Add("y", b[1]);
			par->Values->Add("z", b[2]);
			st = gcnew String(fn.c_str());
			return par->Parse(st);
		}
		void genera(std::string** matStr) {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					a[i][j] = funcion(matStr[i][j]);
				}
			}
		}
};