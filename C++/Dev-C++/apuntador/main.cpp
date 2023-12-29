#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) {
	float a;
	float* aPtr;
	float** aPtrPtr;
	a = 6.66;
	aPtr = &a;
	aPtrPtr = &aPtr;
	
	cout << "a = " << a << endl
		 << "&a = " << &a << endl
		 << "aPtr = " << aPtr << endl
		 << "&aPtr = " << &aPtr << endl
		 << "*aPtr = " << *aPtr << endl
		 << "aPtrPtr = " << aPtrPtr << endl
		 << "&aPtrPtr = " << &aPtrPtr << endl
		 << "*aPtrPtr = " << *aPtrPtr << endl
		 << "**aPtrPtr = " << **aPtrPtr << endl;
		 
	return 0; 
}
