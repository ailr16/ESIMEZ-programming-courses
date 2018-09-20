#include <iostream>
#include "Pila.h"
#include "Cola.h"
#include <stdlib.h>

using namespace std;

int main()
{
    Cola C,C1,C2;
    Pila P;
    int seleccion,e;
    bool capicua;

    do{
        cout << endl << "Ingresa un digito: ";
        cin >> e;
        while(e < 0 || e > 9){
            cout << "ERROR. Ingresa SOLO un digito" << endl;
            cout << endl << "Ingresa un digito: ";
            cin >> e;
        }
        C.suma(e);
        C1.suma(e);
        C2.suma(e);
        cout << "Ingresar otro digito?" << endl << "\t1 - SI\t0 - NO" << endl;
        cin >> seleccion;
        while(seleccion < 0 || seleccion > 1){
            cout << "Seleccion incorrecta" << endl;
            cout << "Ingresar otro digito?" << endl << "\t1 - SI\t0 - NO" << endl;
            cin >> seleccion;
        }
    }while(seleccion);

    system("cls");

    while(!C.laColaEstaVacia()){
        P.push(C.elimina());
    }
    while(!P.laPilaEstaVacia()){
        if(P.pop() != C1.elimina())
            capicua = false;
        else
            capicua = true;
    }

    cout << "Numero ingresado:  ";
    while(!C2.laColaEstaVacia())
        cout << C2.elimina();

    if(capicua)
        cout << endl << "Es capicua" << endl << endl;
    else
        cout << endl << "No es capicua" << endl << endl;

    return 0;
}
