#include <iostream>
#include "Complejo.cpp"
#include <stdlib.h>

using namespace std;

void leeArreglo(Complejo *X, int n);
void imprimeArreglo(Complejo *X, int n);
void sumaArreglo(Complejo *X, Complejo *Y, Complejo *Z, int n);
void restaArreglo(Complejo *X, Complejo *Y, Complejo *Z, int n);

int main(int argc, char** argv) {
	Complejo *A = NULL, *B = NULL, *C = NULL, *D = NULL;
	int n1,n2;
	
	cout << "Dimension de arreglo 1: ";
	cin >> n1;
	cout << "Dimension de arreglo 2: ";
	cin >> n2;
	
	if(n1 > 0 && n2 >0){
		if(n1 == n2){
			
			Complejo *A = new Complejo[n1];
			Complejo *B = new Complejo[n2];
			Complejo *C = new Complejo[n2];
			Complejo *D = new Complejo[n2];			
			
			cout << "Da arreglo 1:" << endl;
			leeArreglo(A,n1);
			cout << "Da arreglo 2:" << endl;
			leeArreglo(B,n2);
			
			
			sumaArreglo(A,B,C,n1);
			restaArreglo(A,B,D,n1);
			
			system("cls");
			
			cout << "Arreglo 1:" << endl;
			imprimeArreglo(A,n1);
			cout << endl << "Arreglo 2:" << endl;
			imprimeArreglo(B,n1);
			cout << endl << "Arreglo 3 (suma):" << endl;
			imprimeArreglo(C,n1);
			cout << endl << "Arreglo 4 (resta):" << endl;
			imprimeArreglo(D,n1);
			
			delete[]A;
			delete[]B;
			delete[]C;
			delete[]D;
			
		}
		
		else
			cout << "Error. No se puede sumar. El tamaño de los arreglos no es igual";
	}
	else
		cout << "Error. No se asigno memoria" << endl;
	
	return 0;
}

void leeArreglo(Complejo *X, int n){
	int i;
	for(i=0;i<n;i++){
		cout << "Da [" << i << "] = ";
		cin >> X[i];
	}
}

void imprimeArreglo(Complejo *X, int n){
	int i;
	for(i=0;i<n;i++){
		cout << "[" << i << "] = " << X[i] << endl;
	}
}

void sumaArreglo(Complejo *X, Complejo *Y, Complejo *Z, int n){
	int i;
	for(i=0;i<n;i++)
		Z[i] = X[i]+Y[i];
}

void restaArreglo(Complejo *X, Complejo *Y, Complejo *Z, int n){
	int i;
	for(i=0;i<n;i++)
		Z[i] = X[i]-Y[i];
}


