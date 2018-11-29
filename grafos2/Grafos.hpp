#ifndef Grafos_hpp
#define Grafos_hpp
#include <stdio.h>
#include <iostream>
#define infinito  2147483647
#define N 50
using namespace std;
class Grafos
{
private:
    int b,n,i,j,k;
    int w[N][N];
    long long Q[N][N];
    string T[N][N];
    char c='A';
     void genraMarizQ0(void);
     void encuntraElCaminoMasCorto(void);

public:
    void pideleAlUsuarioTusDatos(void);
    void muestraTuDatos();
};


#endif /* Grafos_hpp */
