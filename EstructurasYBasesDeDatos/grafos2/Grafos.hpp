#ifndef Grafos_hpp
#define Grafos_hpp
#include <stdio.h>
#include <iostream>
#define INF  1073741823
#define MF 20
#define MC 20
using namespace std;
class Grafos
{
private:
    int b, n, i, j, k;
    int W[MF][MC],
        Q[MF][MC];
    string QR[MF][MC];
    char c = 'R';
    void compruebaTusDatos(void);
    void generaMatrizQ0(void);
    void optimizaRecorrido(void);
    void imprimeMatrizW(void);
    void imprimeMatrizQ(void);
    void imprimeMatrizQR(void);

public:
    void pideleAlUsuarioTusDatos(void);
    void muestraTuDatos();
};


void Grafos::muestraTuDatos(){
    imprimeMatrizW();
    imprimeMatrizQ();
    compruebaTusDatos();
    imprimeMatrizQR();
}
void Grafos::imprimeMatrizW(void){
    cout << "Matriz W=" << endl;
    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            cout << "\t" << W[i][j];
        }
        cout << endl;
    }
}
void Grafos::imprimeMatrizQ(void){
    cout << endl << "Matriz Q_4=" << endl;
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
void Grafos::imprimeMatrizQR(void){
    cout << endl << "Matriz QR=" << endl;
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
void Grafos::compruebaTusDatos(void){
    int tam ;
    string a, aux,aux1;
    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            tam = QR[i][j].size();
            for(k=0; k<=tam-1; k++){
                a = QR[i][j].substr(k,1);
                if( i==j && tam==2)
                    aux1 = aux1 + a;
                else{
                    if(a != aux)
                        aux1 = aux1+a;
                }
                aux = a;
            }

            QR[i][j] = aux1;
            aux1 = "";
            aux = "";
        }
    }
}

void Grafos::generaMatrizQ0(void){
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
void Grafos::optimizaRecorrido(void){
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
    }
}
void Grafos::pideleAlUsuarioTusDatos(void){
    cout << "Dame el numero de variables : ";
    cin >> b;
    n = b-1;
    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            cout << "W [" << i << "][" << j << "]= ";
            cin >> b;
            W[i][j] = b;
        }
    }
    generaMatrizQ0();
    optimizaRecorrido();
}

#endif
