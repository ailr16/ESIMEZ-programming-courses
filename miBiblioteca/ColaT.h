#ifndef COLAT_H
#define COLAT_H

#include <iostream>
#include <stdlib.h>

#include "NodoT.h"

using namespace std;

template <typename T>
class ColaT
{
    private:
        NodoT<T>* extremo;
        NodoT<T>* cabeza;

    public:
        ColaT(){
            cabeza = NULL;
            extremo = NULL;
        }
        ~ColaT(){
            while(!laColaEstaVacia()){
                cout << elimina() << endl;
            }
            extremo = NULL;

        }
        T primero(void){
            return cabeza->dameTuValor();
        }
        bool laColaEstaVacia(void){
            return cabeza == NULL;
        }
        T elimina(void){
            NodoT<T>* aux;
            T v;
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
        void suma(T v){
            if(!laColaEstaVacia()){
                extremo->modificaTuSiguiente(new NodoT<T>(v));
                extremo = extremo->dameTuSiguiente();
            }
            else
                cabeza = extremo = new NodoT<T>(v);
        }
};

#endif // COLAT_H
