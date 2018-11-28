#include <iostream>
#include "GrafoL.h"
#include <stdlib.h>

#define MF 20
#define MC 20

using namespace std;

int main()
{
    int W[MF][MC],
        A[MF][MC],
        Q[MF][MC],
        m;

    cout << "Ingresa la dimension de la matriz de pesos (mxm)= ";
    cin >> m;

    leeMatriz(W,m);
    system("cls");
    cout << "Matriz W=";
    imprimeMatriz(W,m);
    generaMatrizQ(W,Q,m);
    cout << "Matriz Q=";
    imprimeMatriz(Q,m);
    return 0;
}
