#include <iostream>
#include "ListaS.h"

using namespace std;

int main()
{
    ListaS A;

    A.inserta(25);
    A.inserta(1);
    A.inserta(10);
    A.inserta(0);
    A.inserta(5);
    A.inserta(15);

    A.muestraTusDatos();
    cout << endl;
    A.borra(-1);

    A.muestraTusDatos();
    cout << endl;
    A.borra(0);

    A.muestraTusDatos();
    cout << endl;
    A.borra(30);

    A.muestraTusDatos();
    cout << endl;
    A.borra(15);

    A.muestraTusDatos();
    cout << endl;
    A.borra(3);

    A.muestraTusDatos();
    cout << endl;
    A.borra(5);

    A.muestraTusDatos();

    return 0;
}
