#include "Numero.h"
#include <iostream>

using namespace std;

void Numero::verificaDatos(void){
	if(a<0 || a>2147483647){
		a = 0;
	}
	this->calculaBinario();
}
Numero::Numero(void){
	a = 0;
}
Numero::Numero(int a){
	this->a = a;
	this->verificaDatos();
}
void Numero::muestraTusDatos(void){
	cout << "Decimal: " << a << endl << "Binario: ";
	imprimeBinario();
	cout << endl;
}
void Numero::pideleAlUsuarioTusDatos(void){
	cout << "Da numero decimal: ";
	cin >> a;
	this->verificaDatos();
}
void Numero::calculaBinario(void){
	
	for(int i=0;i<=30;i++){
		if(a&b){
			c[i] = 1;
			cont=i;
			}
		else
			c[i] = 0;
			
		b = b<<1;
	}
}
void Numero::imprimeBinario(void){
	
	for(int i=cont;i>=0;i--)
		cout << c[i];
}
