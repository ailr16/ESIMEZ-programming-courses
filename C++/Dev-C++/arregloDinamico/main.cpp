//Suma de vectores con arreglos dinamicos			09042018

#include <iostream>
#include "Complejo.cpp"

using namespace std;

int main(int argc, char** argv) {
	Complejo *A = NULL, *B = NULL, *C = NULL;
	int i,n;
	
	cout << "Suma de arreglos de numeros complejos" << endl << "Da n ";
	cin >> n;
	
	if(n>0)
		A = new Complejo[n];
		B = new Complejo[n];
		C = new Complejo[n];
		
	if(A == NULL && B == NULL && C == NULL)
		cout << "Error. No se asgino memoria";
		
	else{
		
		cout << "Arreglo 1" << endl;
		for(i=0;i<n;i++){
			cout << "Da [" << i << "] ";
			cin >> A[i];
		}

		cout << endl << "Arreglo 2" << endl;
		for(i=0;i<n;i++){
			cout << "Da [" << i << "] ";
			cin >> B[i];
		}
		
		cout << endl << "Suma de arreglos de numeros complejos" << endl;
		for(i=0;i<n;i++){
			C[i]=A[i]+B[i];
			cout << A[i] << " + "  << B[i] << " = " << C[i] << endl;
		}
		delete[]A;
	}
	return 0;
}
