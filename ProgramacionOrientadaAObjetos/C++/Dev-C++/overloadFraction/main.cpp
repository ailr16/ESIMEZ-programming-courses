#include <iostream>
#include "Fraccion.cpp"
#include "Fraccion.h"

int main(int argc, char *argv[]) {
	Fraccion A(1,2), B(3,4);
	
	cout << (A+=1) << endl << endl;
	cout << (A-=1) << endl << endl;
	cout << (A*=1) << endl << endl;
	cout << (A/=1) << endl << endl;
	
	cout << (A++) << endl << endl;
	cout << (A--) << endl << endl;
	
	return 0;
}
