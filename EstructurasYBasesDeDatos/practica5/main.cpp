#include <iostream>
#include "TerminoA.h"
#include "ListaDT.h"

using namespace std;

int main()
{
    ListaDT<TerminoA> A,B;
    TerminoA m;
    int seleccion = 1, e,f;
    do{
        cout << "Ingrese coeficiente del termino: ";
        cin >> e;
        cout << "Ingrese exponente del termino: ";
        cin >> f;
        if(e != 0){
            m.modificaTuCoeficiente(e);
            m.modificaTuExponente(f);
            A.inserta(m);
        }

        cout << "Ingresar otro termino? \t 1- SI \t 0 - NO:   ";
        cin >> seleccion;

        while(seleccion < 0 || seleccion > 1){
            cout << "Seleccion incorrecta";
            cout << "Ingresar otro termino? \t 1- SI \t 0 - NO:   ";
            cin >> seleccion;
        }
    }while(seleccion);

    A.muestraTusDatosLD();

    A.derivada(B);

    B.muestraTusDatosLD();

    return 0;
}
