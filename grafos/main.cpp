#include <iostream>
#include "stdlib.h"

#define MAXFILAS 50
#define MAXCOLUMNAS 50

using namespace std;

void imprimeMatriz(unsigned int W[MAXFILAS][MAXCOLUMNAS], unsigned int m);
void leeMatriz(unsigned int W[MAXFILAS][MAXCOLUMNAS], unsigned int m);

int main()
{
    unsigned int i, j, m, k,
        W[MAXFILAS][MAXCOLUMNAS], Q[MAXFILAS][MAXCOLUMNAS];
    cout << "Ingresa el tamano de la matriz cuadrada: ";
    cin >> m;

    cout << "Ingresa la matriz:" << endl;
    leeMatriz(W,m);

    system("cls");

    cout << "Matriz W=" << endl;
    imprimeMatriz(W, m);

    //Generar matriz Q
    for(i=0; i<m; i++){
        for(j=0; j<m; j++){
            if(W[i][j] == 0)
                Q[i][j] = 2147483647;
            else
                Q[i][j] = W[i][j];
        }
    }
    cout << endl << endl << "Matriz Q=" << endl;
    imprimeMatriz(Q,m);

    for(k=0; k<m; k++){
        for(i=0; i<m; i++){
            for(j=0; j<m; j++){
                Q[i][j] = min(Q[i][j], Q[i][k]+Q[k][j]);
            }
        }
    }
    cout << endl << endl << "Matriz (actualizada) Q=" << endl;
    imprimeMatriz(Q,m);

}

void leeMatriz(unsigned int W[MAXFILAS][MAXCOLUMNAS], unsigned int m){
    for(unsigned int i=0; i<m; i++){
        for(unsigned int j=0; j<m; j++){
            cout << "Ingresa elemento [" << i << "][" << j <<"] ";
            cin >> W[i][j];
        }
    }
}

void imprimeMatriz(unsigned int W[MAXFILAS][MAXCOLUMNAS], unsigned int m){
    for(unsigned int i=0; i<m; i++){
        for(unsigned int j=0; j<m; j++){
            cout << "\t" << W[i][j] << "\t";
        }
        cout << endl;
    }
}
