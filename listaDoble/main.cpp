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

    A.inserta(6);
    A.muestraTusDatos();
    cout <<endl;

    A.inserta(4);
    A.muestraTusDatos();
    cout <<endl;

    A.inserta(5);
    A.muestraTusDatos();
    cout <<endl;

    A.inserta(4);
    A.muestraTusDatos();
    cout <<endl;

    return 0;
}

