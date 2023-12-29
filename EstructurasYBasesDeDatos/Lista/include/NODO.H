#ifndef NODO_H
#define NODO_H

#include <iostream>
using namespace std;

class Nodo
{
    private:
        int valor;
        Nodo* siguiente;

    public:
        Nodo(int v, Nodo* s = NULL){
            valor = v;
            siguiente = s;
        }
        int dameTuValor(void){
            return valor;
        }
        void modificaTuValor(int v){
            valor = v;
        }
        Nodo* dameTuSiguiente(void){
            return siguiente;
        }
        void modificaTuSiguiente(Nodo* s){
            siguiente = s;
        }
};

#endif // NODO_H
