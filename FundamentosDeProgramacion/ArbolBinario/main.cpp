#include <iostream>
#include "NodoABB.h"
#include "ABB.h"

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
    cout << endl;
    A.preorden();

    A.postorden();

    cout << endl << "Nodos con un solo hijo: " << A.numeroNodos() << endl;
    cout << endl << endl;

    return 0;
}
