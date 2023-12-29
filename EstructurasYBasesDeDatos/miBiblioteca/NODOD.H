#ifndef NODOD_H
#define NODOD_H

#include <iostream>
using namespace std;

class NodoD
{
    private:
        NodoD* anterior;
        NodoD* siguiente;
        int valor;

    public:
        NodoD(int v, NodoD* ant = NULL, NodoD* sig = NULL){             //  Constructor por omision:
            valor = v;                                                  //  CASO 1: solo se pasa valor
            anterior = ant;                                             //  CASO 2: se pasa valor y referencia
            siguiente = sig;                                            //  CASO 3: se pasa valor y dos referencias
        }
        int dameTuValor(void){                                          //  Regresa el valor del nodo
            return valor;
        }
        NodoD* dameTuAnterior(void){                                    //  Regresa la referencia ANTERIOR del nodo
            return anterior;
        }
        NodoD* dameTuSiguiente(void){                                   //  Regresa la referencia SIGUIENTE del nodo
            return siguiente;
        }
        void modificaTuValor(int v){                                    //  Modifica el valor del nodo
            valor = v;
        }
        void modificaTuAnterior(NodoD* ant){                            //  Modifica el apuntador ANTERIOR
            anterior = ant;
        }
        void modificaTuSiguiente(NodoD* sig){                           //  Modifica el apuntador SIGUIENTE
            siguiente = sig;
        }

        void muestraTusDatos(void){                                     //  Imprime los atributos del objeto
            cout << "Valor: " << valor << endl
                 << "Anterior: " << anterior << endl
                 << "Siguiente: " << siguiente << endl;
        }
};

#endif // NODOD_H
