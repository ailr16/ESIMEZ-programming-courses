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

    string QR[MF][MC];


    cout << "Ingresa la dimension de la matriz de pesos (mxm)= ";
    cin >> m;
    inicializaMatrizQR(QR,m);

    leeMatriz(W,m);
    system("cls");
    cout << "Matriz W=";
    imprimeMatriz(W,m);
    generaMatrizQ(W,Q,m);
    generaMatrizA(W,A,m);
    cout << "Matriz Q_0=";
    imprimeMatriz(Q,m);
    cout << "Matriz A_0=";
    imprimeMatriz(A,m);
    comparaElementos(Q,A,QR,m);
    cout << "Matriz QR=";
    imprimeMatrizCadena(QR,m);
    return 0;
}
