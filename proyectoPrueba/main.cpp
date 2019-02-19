/*
    Proyecto para probar clases
*/

#include <iostream>
#include <stdio.h>
#include "claseApuntadores.h"
using namespace std;

int main()
{
    double *aY;
    claseApuntadores obj;

    obj.evaluaFuncion();
    aY = obj.regresaArregloY();

    for(int i = 0; i <= 8; i++){
        cout << aY[i] << endl;
    }
    return 0;
}
