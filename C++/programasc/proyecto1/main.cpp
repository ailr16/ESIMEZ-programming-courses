#include <iostream>
#include "D:/C++/miLibreria/miBiblioteca/Punto.h"
#include "D:/C++/miLibreria/miBiblioteca/Punto.cpp"
#include <math.h>

double f(double x);
double degARad(double x);

int main(int argc, char** argv) {
	double inicio,fin,paso,i;
	Punto A;
	
	cout << "Da el limite inferior ";
	cin >> inicio;
	cout << "Da el limite superior ";
	cin >> fin;
	cout << "Da el incremento ";
	cin >> paso;
	cout << endl;
	
	A.modificaTuX(inicio);
	
	cout << "\t X \t | f(X)" << endl << endl;
	
	while(A.dameTuX() <= fin){
		cout << "\t" << A.dameTuX() << "\t |" << f(A.dameTuX()) << endl;
		A.modificaTuX(A.dameTuX()+paso);
	}
	
	return 0;
}

double f(double x){
	return sin(degARad(x));
}

double degARad(double x){
	return M_PI*x/180;
}
