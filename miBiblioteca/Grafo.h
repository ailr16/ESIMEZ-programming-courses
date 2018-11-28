#ifndef GRAFO_H
#define GRAFO_H

#define INF 1073741822

#include <iostream>
using namespace std;

class Grafo
{
    private:
        int m;
        int **W;             //Matriz W
        int **Q;             //Matriz Q

    public:
        Grafo(void);
        void pideleAlUsuarioTuMatriz(void);
        void muestraTuMatrizDePesos(void);
        void generaMatrizQ(void);
        void muestraTuMatrizQ(void);
};

Grafo::Grafo(void){
    W = new int*[m];
    for(int i=0; i<m ; i++){
        W[i] = new int[m];
    }
    Q = new int*[m];
    for(int i=0; i<m ; i++){
        Q[i] = new int[m];
    }

}
void Grafo::pideleAlUsuarioTuMatriz(void){
    int i,j;
    cout << "Ingresa el tamaño de la matriz (cuadrada): ";
    cin >> m;

    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cout << "W[" << i << "][" << j << "]= ";
            cin >> *(*(W+i)+j);
        }
    }
}
void Grafo::muestraTuMatrizDePesos(void){
    int i,j;
    cout << endl << "Matriz de pesos:" << endl;
    for(i=0; i<m; i++){
        for(j=0; j<m; j++)
            cout << "\t" << *(*(W+i)+j);
        cout << endl;
    }
}
void Grafo::muestraTuMatrizQ(void){
    int i,j;
    cout << endl << "Matriz A:" << endl;
    for(i=0; i<m; i++){
        for(j=0; j<m; j++)
            cout << "\t" << *(*(Q+i)+j);
        cout << endl;
    }
}
void Grafo::generaMatrizQ(void){
	int i,j,k;
	for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if((*(*(W+i)+j)) == 0)
                (*(*(Q+i)+j)) = INF;
            else
                (*(*(Q+i)+j)) = (*(*(W+i)+j));
        }
	}
	for(k=0; k<m; k++){
		for(i=0; i<m; i++){
            for(j=0; j<m; j++){
                (*(*(Q+i)+j)) = min((*(*(Q+i)+j)),(*(*(Q+i)+k))+(*(*(Q+k)+j)));
            }
		}
	}
}


#endif // GRAFO_H
