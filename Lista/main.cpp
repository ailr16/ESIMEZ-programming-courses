#include <iostream>
#include "ListaS.h"

using namespace std;

int main()
{
    ListaS A;
    A.inserta(3);
    A.inserta(6);
    A.inserta(9);
    A.inserta(12);
    A.inserta(2);
    A.inserta(13);
    A.inserta(11);
    A.inserta(10);

    A.muestraTusDatos();
    return 0;
}
