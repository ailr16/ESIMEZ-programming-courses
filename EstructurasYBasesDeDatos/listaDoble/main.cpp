#include <iostream>
#include "ListaD.h"
#include "NodoD.h"

using namespace std;

int main()
{
    ListaD A;

    A.inserta(3);
    A.inserta(2);
    A.inserta(5);
    A.inserta(4);
    A.inserta(1);
    A.inserta(7);

    A.muestraTusDatosA();
    cout << endl;

    A.borra(6);
    A.muestraTusDatosA();
    cout << endl;

    A.borra(-1);
    A.muestraTusDatosA();
    cout << endl;

    return 0;
}

