#include <iostream>

#define MF 20
#define MC 20
#define INF 1073741823

using namespace std;


void leeMatriz(int[MF][MC], int m);                 // leeMatriz(mat en la que se guardara, num elementos)
void imprimeMatriz(int[MF][MC],int m);              // imprimeMatriz(mat a imprimir, num elementos)
void imprimeMatrizCadena(string[MF][MC], int m);
void generaMatrizA(int[MF][MC], int[MF][MC], int m); // generaMatrizA(mat a "leer", mat adyacencia donde se guardara, num elementos)
void generaMatrizQ(int[MF][MC], int[MF][MC], int m);    //generaMatrizQ(mat a "leer", mat donde se guardara, num elementos)
void comparaElementos(int[MF][MC], int[MF][MC], string[MF][MC], int m);          // comparaElementos(mat a "leer", mat adyacencia, mat string, num elementos)
void generaMatrizQR(int[MF][MC], string[MF][MC], int m);            // generaMatrizQR(mat adyacencia a "leer", mat donde se guardara num elementos)
void inicializaMatrizQR(string[MF][MC], int m);

/*  Implementaciones    */

void inicializaMatrizQR(string QR[MF][MC], int m){
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            QR[i][j] = "";
        }
    }
}

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

void imprimeMatrizCadena(string QR[MF][MC], int m){
    cout << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(QR[i][j] == "")
                cout << "\t-";
            else
            cout << "\t" << QR[i][j];
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

void generaMatrizQR(int A[MF][MC], string QR[MF][MC], int m){
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(A[i][j] == 1){
                if(i == 0){
                    QR[i][j] += "R";
                }
                else{
                    QR[i][j] += "";
                }
                if(i == 1){
                    QR[i][j] += "S";
                }
                else{
                    QR[i][j] += "";
                }
                if(i == 2){
                    QR[i][j] += "T";
                }
                else{
                    QR[i][j] += "";
                }
                if(i == 3){
                    QR[i][j] += "U";
                }
                else{
                    QR[i][j] += "";
                }
                if(j == 0){
                    QR[i][j] += "R";
                }
                else{
                    QR[i][j] += "";
                }
                if(j == 1){
                    QR[i][j] += "S";
                }
                else{
                    QR[i][j] += "";
                }
                if(j == 2){
                    QR[i][j] += "T";
                }
                else{
                    QR[i][j] += "";
                }
                if(j == 3){
                    QR[i][j] += "U";
                }
                else{
                    QR[i][j] += "";
                }
            }
            else{
                if(i == 0 || j == 0)
                    QR[i][j] += "";
                if(i == 1 || j == 1)
                    QR[i][j] += "";
                if(i == 2 || j == 2)
                    QR[i][j] += "";
                if(i == 3 || j == 3)
                    QR[i][j] += "";
            }
        }
    }
}

void comparaElementos(int Q[MF][MC], int A[MF][MC], string QR[MF][MC], int m){
    for(int k=0; k<m; k++){
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++)
                Q[i][j] = min(Q[i][j], Q[i][k]+Q[k][j]);
        }
        generaMatrizA(Q,A,m);
        generaMatrizQR(A,QR,m);
        cout << endl << "Matriz Q_" << k+1 << "=";
        imprimeMatriz(Q,m);
        cout << endl << "Matriz A_" << k+1 << "=";
        imprimeMatriz(A,m);
        cout << endl << "Matriz QR_" << k+1 << "=";
        imprimeMatrizCadena(QR,m);
    }
}
