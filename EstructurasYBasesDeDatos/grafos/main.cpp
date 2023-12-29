#include <iostream>
#include <stdlib.h>

#define MAXF 50
#define MAXC 50

using namespace std;

void imprimeMatriz(unsigned int W[MAXF][MAXC], unsigned int m);
void imprimeMatrizStr(string W[MAXF][MAXC], unsigned int m);
void leeMatriz(unsigned int W[MAXF][MAXC], unsigned int m);

int main()
{
    char c = 164;
    unsigned int  i, j, m, k,
                  W[MAXF][MAXC],
                  Q[MAXF][MAXC];
    string  Wrec[MAXF][MAXC],       //Matrices de recorridos
            Qrec[MAXF][MAXC];

    cout << "Ingresa el tama" << c << "o de la matriz de pesos (matriz cuadrada mxm): ";
    cin >> m;

    cout << "Ingresa la matriz de pesos:" << endl;
    leeMatriz(W,m);

    system("cls");

    //Imprime matriz de pesos
    cout << "Matriz W=" << endl;
    imprimeMatriz(W, m);

    //Genera matriz Q
    for(i=0; i<m; i++){
        for(j=0; j<m; j++){
            if(W[i][j] == 0)
                Q[i][j] = 2147483647;
            else
                Q[i][j] = W[i][j];
        }
    }
    //Inicializar matriz Q de recorridos
    for(i=0; i<m; i++){
        for(j=0; j<m; j++){
            Qrec[i][j] = "";
        }
    }

    //Genera matriz Q de recorridos
    for(i=0; i<m; i++){
        for(j=0; j<m; j++){
            if(Q[i][j] < 2147483647){
                if(i == 0)
                    Qrec[i][j] = Qrec[i][j] + "R";
                if(i == 1)
                    Qrec[i][j] = Qrec[i][j] + "S";
                if(i == 2)
                    Qrec[i][j] = Qrec[i][j] + "T";
                if(i == 3)
                    Qrec[i][j] = Qrec[i][j] + "U";
                if(j == 0)
                    Qrec[i][j] = Qrec[i][j] + "R";
                if(j == 1)
                    Qrec[i][j] = Qrec[i][j] + "S";
                if(j == 2)
                    Qrec[i][j] = Qrec[i][j] + "T";
                if(j == 3)
                    Qrec[i][j] = Qrec[i][j] + "U";
            }
            else
                Qrec[i][j] = Qrec[i][j] + "";
        }
    }

    //Imprime matriz Q
    cout << endl << endl << "Matriz Q_0=" << endl;
    imprimeMatriz(Q,m);

    //Comparaciones
    for(k=0; k<m; k++){
        for(i=0; i<m; i++){
            for(j=0; j<m; j++)
                Q[i][j] = min(Q[i][j], Q[i][k]+Q[k][j]);
        }
        cout << endl << "Matriz Q_" << k+1 << "=" << endl;
            imprimeMatriz(Q,m);
    }

    //Imprime matriz Q de recorridos
        cout << endl << "Matriz Q de recorridos:" << endl;
        imprimeMatrizStr(Qrec,m);

}

void leeMatriz(unsigned int W[MAXF][MAXC], unsigned int m){
    for(unsigned int i=0; i<m; i++){
        for(unsigned int j=0; j<m; j++){
            cout << "Ingresa elemento [" << i+1 << "][" << j+1 <<"] ";
            cin >> W[i][j];
        }
    }
}

void imprimeMatriz(unsigned int W[MAXF][MAXC], unsigned int m){
    char c = 145;
    for(unsigned int i=0; i<m; i++){
        for(unsigned int j=0; j<m; j++){
            if(W[i][j] > 2147483646)
                cout << "\t" << "INF" << "\t";
            else
                cout << "\t" << W[i][j] << "\t";
        }
        cout << endl;
    }
}

void imprimeMatrizStr(string W[MAXF][MAXC], unsigned int m){
    for(unsigned int i=0; i<m; i++){
        for(unsigned int j=0; j<m; j++){
            if(W[i][j] != "")
                cout << "\t" << W[i][j] << "\t";
            else
                cout << "\t" << "-" << "\t";
        }
        cout << endl;
    }
}
