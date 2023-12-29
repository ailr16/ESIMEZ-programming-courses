#include "pch.h"
#include <iostream>
#include <math.h>
#include "lozano.h"
using namespace std;

int main()
{
	Practica1 obj;

	obj.Nombre();
	system("pause");
	system("cls");

	int e;
	char c;
	double d;
	float f;
	long int eL;
	//long float fL;        *No existe
	long double dL;
	unsigned int eU;
	short int eS;

	//Para int
	int i = 0;
	e = 1;
	while (e >= 0) {
		++i;
		e = pow(2.0, i) - 1;
	}
	e = pow(2.0, i - 1) - 1;
	cout << "Valor maximo int = (2^" << i - 1 << ") - 1" << " = " << e << endl;

	//Para long int
	i = 0;
	eL = 1;
	while (eL > 0) {
		++i;
		eL = pow(2.0, i) - 1;
	}
	eL = pow(2.0, i - 1) - 1;
	cout << "Valor maximo long int  = (2^" << i - 1 << ") - 1" << " = " << eL << endl;

	//Para unsigned int
	i = 0;
	eU = 1;
	while (eU > 0) {
		++i;
		eU = pow(2.0, i) - 1;
	}
	eU = pow(2.0, i - 1) - 1;
	cout << "Valor maximo long int = (2^" << i - 1 << ") - 1" << " = " << eU << endl;

	//Para short int
	i = 0;
	eS = 1;
	while (eS > 0) {
		++i;
		eS = pow(2.0, i) - 1;
	}
	eS = pow(2.0, i - 1) - 1;
	cout << "Valor maximo short int = (2^" << i - 1 << ") - 1 = " << eS << endl;

	//Para char
	i = 0;
	c = 1;
	while (c > 0) {
		++i;
		c = pow(2.0, i) - 1;
	}
	c = pow(2.0, i - 1) - 1;
	cout << "Valor maximo char = (2^" << i - 1 << ") - 1 = " << int(c) << endl;

	//Para float
	cout << "Valor maximo float = (2^" << pow(2.0, sizeof f * 2) / 2 - 1 << ") - 1 = " << pow(2.0, pow(2.0, sizeof f * 2) / 2 - 1) - 1 << endl;

	//Para double
	cout << "Valor maximo double = (2^" << pow(2.0, sizeof d + 2) - 1 << ") - 1 = " << pow(2.0, pow(2.0, sizeof d + 2) - 1) - 1 << endl;

	system("pause");

	return 0;
}
