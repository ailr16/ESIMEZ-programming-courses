#include <iostream>
#include "Fecha.h"
#include "ColaT.h"
#include "PilaT.h"

using namespace std;

int main(){
    ColaT<Fecha> C;
    PilaT<Fecha> P;
    Fecha fechaLimite(5,6,2000),A,B;
    int seleccion = 1,n = 0;

    do{
        cout << "Ingrese una fecha:" << endl;
        A.pideleAlUsuarioTusDatos();
        C.suma(A);
        n++;
        cout << "Ingresar otra fecha?" << endl
             << "\tCualquier valor - SI" << "\t0 - NO" << endl;
        cin >> seleccion;
    }while(seleccion);


    return 0;
}
