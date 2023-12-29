#include <iostream>
#include "Fraccion.h"
#include "Fraccion.cpp"
#include <stdlib.h>

using namespace std;

Fraccion suma(Fraccion A, Fraccion B);
Fraccion resta(Fraccion A, Fraccion B);
Fraccion multiplica(Fraccion A, Fraccion B);
Fraccion divide(Fraccion A, Fraccion B);


int main(int argc, char** argv) {
	Fraccion A,B,C,D,E,F;
	
	cout << "Fraccion A: " << endl;
	A.pideleAlUsuarioTusDatos();
	cout << "Fraccion B: " << endl;
	B.pideleAlUsuarioTusDatos();
	
	system("cls");
	
	C=suma(A,B);
	D=resta(A,B);
	E=multiplica(A,B);
	F=divide(A,B);
	
	cout << "A= ";
	A.muestraTusDatos();
	
	cout << endl << "B= ";
	B.muestraTusDatos();
	cout << endl << endl;
	
	A.muestraTusDatos();  cout << " + ";  B.muestraTusDatos();  cout << " = "; C.muestraTusDatos(); cout << endl;
	A.muestraTusDatos();  cout << " - ";  B.muestraTusDatos();  cout << " = "; D.muestraTusDatos(); cout << endl;
	A.muestraTusDatos();  cout << " * ";  B.muestraTusDatos();  cout << " = "; E.muestraTusDatos(); cout << endl;
	A.muestraTusDatos();  cout << " / ";  B.muestraTusDatos();  cout << " = "; F.muestraTusDatos(); cout << endl;
	
	return 0;
}

Fraccion suma(Fraccion A, Fraccion B){
	Fraccion res;
	res.modificaTuNum(A.dameTuNum()*B.dameTuDen()+B.dameTuNum()*A.dameTuDen());
	res.modificaTuDen(A.dameTuDen()*B.dameTuDen());
	return res;
}

Fraccion resta(Fraccion A, Fraccion B){
	Fraccion res;
	res.modificaTuNum(A.dameTuNum()*B.dameTuDen()-B.dameTuNum()*A.dameTuDen());
	res.modificaTuDen(A.dameTuDen()*B.dameTuDen());
	return res;
}

Fraccion multiplica(Fraccion A, Fraccion B){
	Fraccion res;
	res.modificaTuNum(A.dameTuNum()*B.dameTuNum());
	res.modificaTuDen(A.dameTuDen()*B.dameTuDen());
	return res;
}

Fraccion divide(Fraccion A, Fraccion B){
	Fraccion res;
	res.modificaTuNum(A.dameTuNum()*B.dameTuDen());
	res.modificaTuDen(A.dameTuDen()*B.dameTuNum());
	return res;
}
