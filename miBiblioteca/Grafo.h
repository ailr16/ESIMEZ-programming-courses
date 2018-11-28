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
        int **A;             //Matriz A
        int **Q;            //Matriz Q

    public:
        Grafo(void);
        void pideleAlUsuarioTuMatriz(void);
        void muestraTuMatrizDePesos(void);
        void generaMatrizA(void);
        void muestraTuMatrizA(void);
};

Grafo::Grafo(void){
    W = new int*[m];
    for(int i=0; i<m ; i++){
        W[i] = new int[m];
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
void Grafo::generaMatrizA(void){
	int i,j;
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){
			if(*(*(W+i)+j) > 0)
				*(*(A+i)+j) = 1;
			else
				*(*(A+i)+j) = 0;
		}
	}
}
void Grafo::muestraTuMatrizA(void){
	int i,j;
    cout << endl << "Matriz A:" << endl;
    for(i=0; i<m; i++){
        for(j=0; j<m; j++)
            cout << "\t" << *(*(A+i)+j);
        cout << endl;
    }
}

#endif // GRAFO_H
