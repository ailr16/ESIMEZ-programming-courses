#include <iostream>
#include "Complejo.cpp"


using namespace std;


int main(int argc, char *argv[]) {
	Complejo A(1,2), B(2,3);	
	
	cout << (A+=1) << endl << endl;
	cout << (A-=1) << endl << endl;
	cout << (A*=2) << endl << endl;
	cout << (A/=2) << endl << endl;
	
	cout << (A > B) << endl << endl;
	cout << (A < B) << endl << endl;
	
	cout << (A++) << endl << endl;
	cout << (A--) << endl << endl;
	
	return 0;
}
