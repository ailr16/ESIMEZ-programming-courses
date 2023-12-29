// practica3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float Ex;
	int Nx = 24;
	double Ey;
	int Ny = 54;
	Ex = pow(2.0, 1-Nx);
	Ey = pow(2.0, 1-Ny);
	cout << "Para 32 bits: " << Ex << endl;
	cout << "Para 64 bits: " << Ey << endl;
}
