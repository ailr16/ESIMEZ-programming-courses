#ifndef PILAT_H
#define PILAT_H
#include <iostream>
#include "NodoT.h"
#include <stdlib.h>

using namespace std;

template <typename T>
class PilaT
{
    private:
        NodoT<T>* tope;

    public:
        PilaT(){
            tope = NULL;
        }
        void push(T v){
            tope = new NodoT<T>(v,tope);
        }
        T cima(void){
            return tope->dameTuValor();
        }
        T laPilaEstaVacia(void){
            return tope == NULL;
        }
        T pop(void){
            NodoT<T>* aux;
            T v;
            if(!laPilaEstaVacia()){
                aux = tope;
                tope = tope->dameTuSiguiente();
                v = aux->dameTuValor();
                delete(aux);
                return v;
            }
            else{
                cout << "La pila esta vacia" << endl;
                exit(0);
            }
        }
        ~PilaT(){
            while(!laPilaEstaVacia()){
                cout << pop() << endl;
            }
        }
};

#endif // PILAT_H
