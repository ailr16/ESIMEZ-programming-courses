#include <iostream>
#include "ABB.h"
#include "NodoABB.h"

using namespace std;

int main()
{
    ABB A;
    A.inserta(16);
    A.inserta(23);
    A.inserta(18);
    A.inserta(3);
    A.inserta(5);
    A.inserta(14);

    A.entreorden();

    cout << endl << "Numero nodos con un hijo: " << A.numeroNodos() << endl;

    return 0;
}
