#include <iostream>
using info::lundin::math::ExpressionParser;

class ssenl {
	private:
		int m, n;
		std::string **matrizFunciones;
		double **a;
		double *z;
		double *b;
		
	public:
		ssenl(int m, std::string** matStr, double **a, double*z) {
			n = m + 1;
			a = new double*[m];
			b = new double[m];
			z = new double[m];
			matrizFunciones = new std::string*[m];
			for (int i = 0; i < m; i++)		a[i] = new double[n];
			for (int i = 0; i < m; i++)		matrizFunciones[i] = new std::string[n];

			for (int i = 0; i < m; i++)
				for (int j = 0; j < n; j++)		matrizFunciones[i][j] = matStr[i][j];
		}
		double funcion(System::String^ fn) {
			ExpressionParser^ par = gcnew ExpressionParser();
			par->Values->Add("x", b[0]);
			par->Values->Add("y", b[1]);
			par->Values->Add("z", b[2]);
			return par->Parse(fn);
		}
		void genera(void) {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					//a[i][j] = funcion(matrizFunciones[i][j]);
				}
			}
		}
};