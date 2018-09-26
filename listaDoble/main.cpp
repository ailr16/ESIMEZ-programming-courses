#include <iostream>
#include "ListaD.h"
#include "NodoD.h"

using namespace std;

int main()
{
    ListaD A;
    A.muestraTusDatos();

    A.inserta(3);
    A.muestraTusDatos();
    cout <<endl;

    A.inserta(2);
    A.muestraTusDatos();
    cout <<endl;

    A.inserta(1);
    A.muestraTusDatos();
    cout <<endl;

    A.inserta(4);v
    A.muestraTusDatos();
    cout <<endl;

    return 0;
}

