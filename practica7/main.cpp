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

    /*string str1 = "perro", str2;
    char c;
    c = str1.at(str1.size()-2);
    cout << c;
    */

    cout << "Ingresa la dimension de la matriz de pesos (mxm)= ";
    cin >> m;
    inicializaMatrizQR(QR,m);

    leeMatriz(W,m);
    system("cls");
    cout << "Matriz W=";
    imprimeMatriz(W,m);
    generaMatrizQ(W,Q,m);
    generaMatrizA(W,A,m);
    generaMatrizQR0(A,QR,m);
    cout << "Matriz Q_0=";
    imprimeMatriz(Q,m);
    cout << "Matriz A_0=";
    imprimeMatriz(A,m);
    cout << "Matriz QR_0=";
    imprimeMatrizCadena(QR,m);
    comparaElementos(Q,A,QR,m);

    return 0;
}
