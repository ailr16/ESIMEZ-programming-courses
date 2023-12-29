#include <iostream>
#include "NodoABB.h"
#include "ABB.h"

using namespace std;

int main()
{
    ABB A;
    A.inserta(8);
    A.inserta(6);
    A.inserta(17);

    A.entreorden();

    return 0;
}
