#include <iostream>
#include <stdlib.h>
#include "Grafo.h"

using namespace std;

int main()
{
    Grafo G1;
    G1.pideleAlUsuarioTusDatos();       //Ingresar tamano de la matriz (mxm) y sus elementos
    system("cls");
    G1.muestraTuDatos();                //Muestra matriz de pesos (W), matrices Q_n y matriz QR (de recorridos)
    return 0;
}
