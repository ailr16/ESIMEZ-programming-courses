#ifndef GRAFO_H
#define GRAFO_H
#include <stdio.h>
#include <iostream>
#define INF  1073741823
#define MF 20
#define MC 20
using namespace std;
class Grafo
{
    private:
        int i, j, k,
            n, b,
            W[MF][MC],
            Q[MF][MC];
        string QR[MF][MC];
        char c = 82;                                //Comenzar en el caracter R  (ASCII 82)
        void generaMatrizQ0(void);                  //Generar la primera matriz de recorridos (numero)
        void optimizaRecorrido(void);               //Buscar el recorrido mas corto
        void imprimeMatrizW(void);                  //Para matriz de pesos
        void imprimeMatrizQ(void);                  //Para matriz de recorridos (numeros)
        void imprimeMatrizQR(void);                 //Para matriz de letras
        void compruebaTusDatos(void);               //Comprueba si se repiten caracteres en cada elemento de la matriz de cadenas

    public:
        void pideleAlUsuarioTusDatos(void);
        void muestraTuDatos(void);
};


void Grafo::muestraTuDatos(void){
    generaMatrizQ0();
    imprimeMatrizW();
    optimizaRecorrido();
    compruebaTusDatos();
    cout << endl << "Matriz QR=";
    imprimeMatrizQR();
}
void Grafo::imprimeMatrizW(void){
    cout << "Matriz W=" << endl;
    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            cout << "\t" << W[i][j];
        }
        cout << endl;
    }
}
void Grafo::imprimeMatrizQ(void){
    cout << endl;
    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            if(Q[i][j] >= INF)
                cout << "\tINF";
            else
                cout << "\t" << Q[i][j];
        }
        cout << endl;
    }
}
void Grafo::imprimeMatrizQR(void){
    cout << endl;
    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
           if(Q[i][j] >= INF)
                cout << "\t-";
            else
                cout << "\t" << QR[i][j];
        }
        cout << endl;
    }
}
void Grafo::compruebaTusDatos(void){
    int tam ;
    string a, a1,a2;
    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            tam = QR[i][j].size();
            for(k=0; k<=tam-1; k++){
                a = QR[i][j].substr(k,1);
                if( i==j && tam==2)
                    a2 = a2 + a;
                else{
                    if(a != a1)
                    a2 = a2+a;
                }
                a1 = a;
            }
            QR[i][j] = a2;
            a2 = "";
            a1 = "";
        }
    }
}

void Grafo::generaMatrizQ0(void){
    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            if(W[i][j] == 0)
                Q[i][j] = INF;
            else
                Q[i][j] = W[i][j];
        }
    }
    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            QR[i][j] = c;
            c++;
        }
        c = 'R';
    }
    c ='R';

    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            if(Q[i][j] == INF)
                QR[i][j] = "}";
            else{
                if(i == j)
                    QR[i][j] = QR[j][i] + QR[i][j] ;
                else
                    QR[i][j] = c + QR[i][j] ;
            }
        }
        c++;
    }
}
void Grafo::optimizaRecorrido(void){
    for(k=0; k<=n; k++){
        for(i=0; i<=n; i++){
            for(j=0; j<=n; j++){
                if( Q[i][j] < Q[i][k] + Q[k][j]){
                    QR[i][j] = QR[i][j];
                }
                else
                   QR[i][j] = QR[i][k] + QR[k][j];

                Q[i][j] = min(Q[i][j], Q[i][k] + Q[k][j]);
            }
        }
        cout << endl << "Matriz Q_" << k+1;
        imprimeMatrizQ();
    }
}
void Grafo::pideleAlUsuarioTusDatos(void){
    char c = 164;
    cout << "Ingresa el tama" << c << "o de la matriz de pesos (mxm)= ";
    cin >> b;
    n = b-1;
    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            cout << "W [" << i << "][" << j << "]= ";
            cin >> b;
            W[i][j] = b;
        }
    }
}

#endif // GRAFO_H
