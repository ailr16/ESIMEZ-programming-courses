#include <iostream>

#ifndef CLASEAPUNTADORES_H
#define CLASEAPUNTADORES_H

using namespace std;

class claseApuntadores
{
    private:
        double *x, *y;
        int n;

    public:
        claseApuntadores(){
            n = 4;
            x = new double[9];
            y = new double[9];
        }
        void evaluaFuncion(void){
            int j = 0;
            for(double i = -4; i <= 4; i++){
                x[j] = i;
                y[j] = 2*i;
                j++;
            }
        }
        double* regresaArregloY(void){
            return y;
        }
        void imprimeArregloY(void){
            for(int i = 0; i < 2*n+1; i++){
                cout << y[i] << endl;
            }
        }
        ~claseApuntadores(){
            delete x;
            delete y;
        }
};

#endif // CLASEAPUNTADORES_H
