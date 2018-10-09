#include <iostream>
#include "TerminoA.h"
#include "ListaDT.h"

using namespace std;

int main()
{
    ListaDT<TerminoA> A,B;
    TerminoA m;
    int seleccion = 1, e;
    do{
        cout << "Ingrese coeficiente del termino: ";
        cin >> e;
        m.modificaTuCoeficiente(e);
        cout << "Ingrese exponente del termino: ";
        cin >> e;
        m.modificaTuExponente(e);
        A.inserta(m);

        cout << "Ingresar otro termino? \t 1- SI \t 0 - NO:   ";
        cin >> seleccion;

        while(seleccion < 0 || seleccion > 1){
            cout << "Seleccion incorrecta";
            cout << "Ingresar otro termino? \t 1- SI \t 0 - NO:   ";
            cin >> seleccion;
        }
    }while(seleccion);

    A.muestraTusDatos();

    return 0;
}
