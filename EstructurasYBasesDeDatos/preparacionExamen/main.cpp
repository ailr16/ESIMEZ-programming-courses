#include <iostream>
#include "ABB.h"

using namespace std;

int main()
{
    ABB A;
    int e,n;

    cout << "Ingresa n: ";
    cin >> n;

    for(int i=0;i<n;i++){
        cout << "Ingresa el valor entero: ";
        cin >> e;
        A.inserta(e);
    }

    A.entreorden();
    A.preorden();
    A.postorden();

    return 0;
}
