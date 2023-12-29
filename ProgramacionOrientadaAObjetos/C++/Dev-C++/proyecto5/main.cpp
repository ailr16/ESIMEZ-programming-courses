#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

#include "Punto.h"

int main(int argc, char *argv[]) {
	Punto A,B;
	double d;
	
	cout << "A:" << endl;
	A.pideAlUsuarioTusDatos();
	
	system("cls");
	
	A.muestraTusDatos();
	B.muestraTusDatos();
	
	system("cls");
	
	d=sqrt(pow(A.dameTuX()-B.dameTuX(),2)+pow(A.dameTuY()-B.dameTuY(),2));
	
	cout << "Distancia = " << d;
	
	return 0;
}
