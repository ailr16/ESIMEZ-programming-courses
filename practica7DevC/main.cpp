#include <iostream>
#include "Grafo.h"
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) {
	Grafo A;
	A.pideleAlUsuarioTuMatriz();
	system("cls");
	A.muestraTuMatrizDePesos();
	A.generaMatrizA();
	A.muestraTuMatrizA();
	return 0;
}
