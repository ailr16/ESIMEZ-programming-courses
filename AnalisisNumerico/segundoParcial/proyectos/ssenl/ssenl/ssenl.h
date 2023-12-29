#pragma once

#include <iostream>
using info::lundin::math::ExpressionParser;
using namespace System;

class ssenlClase {
private:
	int m, n;
	//std::string **matrizFunciones;
	double **matA;
	double *z;
	double *b;

public:
	ssenlClase(int m, double*z) {
		n = m + 1;
		b = new double[m];
		this->z = z;
	}
	double funcion(std::string fn) {
		String^ st;
		ExpressionParser^ par = gcnew ExpressionParser();
		par->Values->Add("x", 2);
		par->Values->Add("y", 2);
		par->Values->Add("z", 2);
		st = gcnew String(fn.c_str());
		return par->Parse(st);
	}
	void genera(double** a, std::string** matStr) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = funcion(matStr[i][j]);
			}
		}
	}
};