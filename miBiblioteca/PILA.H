#ifndef PILA_H
#define PILA_H

#include "Nodo.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

class Pila
{
    private:
        Nodo* tope;

    public:
        Pila(){
            tope = NULL;
        }
        void push(int v){
            tope = new Nodo(v,tope);
        }
        int cima(void){
            return tope->dameTuValor();
        }
        int laPilaEstaVacia(void){
            return tope == NULL;
        }
        int pop(void){
            Nodo* aux;
            int v;
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
        ~Pila(){
            while(!laPilaEstaVacia()){
                cout << pop() << endl;
            }
        }
};

#endif // PILA_H
