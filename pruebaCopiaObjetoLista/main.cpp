#include <iostream>
#include "ListaST.h"

using namespace std;

int main()
{
    ListaST<int> L;
    ListaST<int> L1;
    ListaST<int> L2;
    int n, e;

    cout << "Numero de elementos:  ";
    cin >> n;

/*---------------------------- Creacion de lista principal ----------------------------------------------*/
    for(int i=0; i<n;i++){
        cout << "Ingresa un numero:  ";
        cin >> e;
        L.inserta(e);
    }

    cout << endl;
    L.muestraTusDatos();
/*---------------------- Creacion de lista secundaria(copia de la principal) ----------------------------*/
    L1 = L;
    cout << endl;
    L1.muestraTusDatos();

/*---------------------- Modificar principal y observar ambas listas ----------------------------*/
    cout << endl << "Elemento a eliminar:  ";
    cin >> n;
    L.borra(n);
    cout << endl;                                   //  El elemento se elimina en las dos listas
    L.muestraTusDatos();                            //  puesto que se copia cada instancia del objeto
    cout << endl;                                   //  incluyendo las direcciones de los Nodos
    L1.muestraTusDatos();

/*---------------------- Creacion de lista secundaria2(copia de la secundaria) ----------------------------*/
    L2 = L1;
    cout << endl;
    L2.muestraTusDatos();

/*---------------------- Modificar principal y observar todas las listas ----------------------------*/
    cout << endl << "Elemento a eliminar:  ";
    cin >> n;
    L.borra(n);
    cout << endl;                                   //  El elemento se elimina en las tres listas
    L.muestraTusDatos();                            //  puesto que se copia cada instancia del objeto
    cout << endl;                                   //  incluyendo las direcciones de los Nodos
    L1.muestraTusDatos();
    cout << endl;
    L2.muestraTusDatos();

    return 0;
}
