#include <iostream>

class ssenl {
	private:
		int m, n;
		std::string **matrizFunciones;
		double **a;
		double *z;
		
	public:
		ssenl(int m, std::string** matStr, double **a, double*z) {
			n = m + 1;
			a = new double*[m];
			z = new double[m];
			matrizFunciones = new std::string*[m];
			for (int i = 0; i < m; i++)		a[i] = new double[n];
			for (int i = 0; i < m; i++)		matrizFunciones[i] = new std::string[n];

			for (int i = 0; i < m; i++)
				for (int j = 0; j < n; j++)		matrizFunciones[i][j] = matStr[i][j];
		}
		void genera(void) {

		}
};