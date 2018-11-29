#ifndef GRAFOS_H
#define GRAFOS_H
#include <iostream>

#define INF 1073741823
#define MF 20
#define MC 20

using namespace std;

class Grafos
{
    private:
        int W[MF][MC],
            Q[MF][MC],
            QR[MF][MC],
            m;

    public:
        void pideleAlUsuarioTusDatos(void);
        void muestraTusDatos(void);
        void generaMatrizQ(void);
        void muestraMatriz(void);
};

void Grafos::pideleAlUsuarioTusDatos(void){
    char c = 164;
    cout << "Ingresa el tama" << c <<"o de la matriz (mxm): ";
    cin >> m;

    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout << "W[" << i << "][" << j << "]= ";
            cin >> W[i][j];
        }
    }
}

void Grafos::muestraTusDatos(void){
    cout << endl;

}

void Grafos::generaMatrizQ(void){
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(W[i][j] == 0)
                Q[i][j] = INF;
            else
                Q[i][j] = W[i][j];
        }
    }
}

void Grafos::muestraMatriz(void){
    cout << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout << "\t" << W[i][j];
        }
        cout << endl;
    }
}
#endif // GRAFOS_H
