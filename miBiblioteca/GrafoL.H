#include <iostream>

#define MF 20
#define MC 20
#define INF 1073741823

using namespace std;


void leeMatriz(int[MF][MC], int m);                 // leeMatriz(mat en la que se guardara, num elementos)
void imprimeMatriz(int[MF][MC],int m);              // imprimeMatriz(mat a imprimir, num elementos)
void generaMatrizA(int[MF][MC], int[MF][MC], int m); // generaMatrizA(mat a "leer", mat adyacencia donde se guardara, num elementos)
void generaMatrizQ(int[MF][MC], int[MF][MC], int m);    //generaMatrizQ(mat a "leer", mat donde se guardara, num elementos)
void comparaElementos(int[MF][MC], int[MF][MC], int m);          // comparaElementos(mat a "leer", mat adyacencia, num elementos)

/*  Implementaciones    */

void leeMatriz(int W[MF][MC], int m){
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout << "W[" << i << "][" << j << "]= ";
            cin >> W[i][j];
        }
    }
}

void imprimeMatriz(int W[MF][MC], int m){
    cout << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(W[i][j] >= INF)
                cout << "\tINF";
            else
            cout << "\t" << W[i][j];
        }
        cout << endl;
    }
}

void generaMatrizQ(int W[MF][MC], int Q[MF][MC], int m){
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(W[i][j] == 0)
                Q[i][j] = INF;
            else
                Q[i][j] = W[i][j];
        }
    }
}

void generaMatrizA(int Q[MF][MC], int A[MF][MC], int m){
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(Q[i][j] >= INF || Q[i][j] == 0)
                A[i][j] = 0;
            else
                A[i][j] = 1;
        }
    }
}

void comparaElementos(int Q[MF][MC], int A[MF][MC], int m){
    for(int k=0; k<m; k++){
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++)
                Q[i][j] = min(Q[i][j], Q[i][k]+Q[k][j]);
        }
    }
}
