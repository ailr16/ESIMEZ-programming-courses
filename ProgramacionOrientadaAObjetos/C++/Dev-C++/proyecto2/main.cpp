#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

#include "punto.h"

double distanciaEntre(punto, punto);

int main(int argc, char *argv[]) {
	punto P[50],O;
	double d[50],menor;
	int i,n,m;
	
	cout << "Da el numero de puntos: ";
	cin >> n;
	
	system("cls");
	
	for(i=0;i<n;i++){
		cout << "P[" << i << "]" << endl;
		P[i].pideAlUsuarioTusDatos();
		cout << endl;
		d[i]=distanciaEntre(P[i],O);
	}
	
	system("cls");
	
	menor = d[0];
	m = 0;
	
	for(i=0;i<n;i++){
		if(menor > d[i]){
			menor = d[i];
			m = i;
		}
	}
	
	cout << "P[" << m << "]" << "\t";
	P[m].muestraTusDatos();
	cout << "\t es el mas cercano al origen";
	
	
	return 0;
}

double distanciaEntre(punto A, punto B){
	return sqrt(pow(A.dameTuX()-B.dameTuX(),2)+pow(A.dameTuY()-B.dameTuY(),2));
}
