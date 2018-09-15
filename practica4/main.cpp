#include <iostream>
#include "ListaST.h"
#include "Hora.h"
#include <stdlib.h>

using namespace std;

int main()
{
    ListaST<Hora> A,B;
    Hora horaUsuario;
    int n;

    cout << "Numero de horas a guardar: ";
    cin >> n;

    for(int i = 0;i<n;i++){
        Hora H;
        H.pideleAlUsuarioTusDatos();
        A.inserta(H);
    }

    cout << endl << "Ingresa la hora limite:" << endl;
    horaUsuario.pideleAlUsuarioTusDatos();

    system("cls");

    cout << "Hora limite:" << endl;
    horaUsuario.muestraTusDatos();

    cout << endl << "Lista Original:" << endl;
    A.muestraTusDatos();

    cout << endl << "Lista resultante:" << endl;
    B.muestraTusDatos();

    return 0;
}
