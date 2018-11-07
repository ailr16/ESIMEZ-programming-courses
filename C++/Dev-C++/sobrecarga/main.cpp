#include <iostream>

//#include "Punto.cpp"
//#include "Fraccion.cpp"
#include "Complejo.cpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Punto A,B,C;
	//Fraccion A,B,C;
	Complejo A(1,1),B(1,1),C;
	
	cin >> A;
	cout << endl;
	cin >> B;
	cout << endl;
	
	C=A+B;
	cout << C << endl;
	C=A-B;
	cout << C << endl;
	C=A*B;
	cout << C << endl;
	C=A/B;
	cout << C << endl;
	

	return 0;
}
