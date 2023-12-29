#include <iostream>
#include "ListaST.h"
#include "stdlib.h"

using namespace std;

int main()
{
    ListaST<int> A;
    A.inserta(5);
    A.inserta(1);
    A.inserta(2);
    A.inserta(4);
    A.inserta(3);
    A.inserta(-2);

    system("cls");

    cout << "Lista:" << endl;
    A.muestraTusDatos();

    cout << endl << "Promedio: " << A.promedio() << endl;

    return 0;
}
