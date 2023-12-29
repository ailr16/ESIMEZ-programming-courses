#ifndef NODODT_H
#define NODODT_H

#include <iostream>
using namespace std;

template <typename T>
class NodoDT
{
    private:
        NodoDT<T>* anterior;
        NodoDT<T>* siguiente;
        T valor;

    public:
        NodoDT<T>(T v, NodoDT<T>* ant = NULL, NodoDT<T>* sig = NULL){             //  Constructor por omision:
            valor = v;                                                  //  CASO 1: solo se pasa valor
            anterior = ant;                                             //  CASO 2: se pasa valor y referencia
            siguiente = sig;                                            //  CASO 3: se pasa valor y dos referencias
        }
        T dameTuValor(void){                                          //  Regresa el valor del nodo
            return valor;
        }
        NodoDT<T>* dameTuAnterior(void){                                    //  Regresa la referencia ANTERIOR del nodo
            return anterior;
        }
        NodoDT<T>* dameTuSiguiente(void){                                   //  Regresa la referencia SIGUIENTE del nodo
            return siguiente;
        }
        void modificaTuValor(T v){                                    //  Modifica el valor del nodo
            valor = v;
        }
        void modificaTuAnterior(NodoDT<T>* ant){                            //  Modifica el apuntador ANTERIOR
            anterior = ant;
        }
        void modificaTuSiguiente(NodoDT<T>* sig){                           //  Modifica el apuntador SIGUIENTE
            siguiente = sig;
        }

        void muestraTusDatos(void){                                     //  Imprime los atributos del objeto
            cout << "Valor: " << valor << endl
                 << "Anterior: " << anterior << endl
                 << "Siguiente: " << siguiente << endl;
        }
};


#endif // NODODT_H
