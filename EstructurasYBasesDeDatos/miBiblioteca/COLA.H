#ifndef COLA_H
#define COLA_H

#include "Nodo.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

class Cola
{
    private:
        Nodo* extremo;
        Nodo* cabeza;

    public:
        Cola(){
            cabeza = NULL;
            extremo = NULL;
        }
        ~Cola(){
            cout << "Destructor cola" << endl;
            while(!laColaEstaVacia()){
                cout << elimina() << endl;
            }
            extremo = NULL;
        }
        int primero(void){
            return cabeza->dameTuValor();
        }
        int laColaEstaVacia(void){
            return cabeza == NULL;
        }
        int elimina(void){
            Nodo* aux;
            int v;
            if(!laColaEstaVacia()){
                aux = cabeza;
                cabeza = cabeza->dameTuSiguiente();
                v = aux->dameTuValor();
                delete(aux);
                return v;
            }
            else{
                cout << "La cola esta vacia" << endl;
                exit(0);
            }
        }
        void suma(int v){
            if(!laColaEstaVacia()){
                extremo->modificaTuSiguiente(new Nodo(v));
                extremo = extremo->dameTuSiguiente();
            }
            else
                cabeza = extremo = new Nodo(v);
        }
};

#endif // COLA_H
