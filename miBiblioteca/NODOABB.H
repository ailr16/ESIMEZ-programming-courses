#ifndef NODOABB_H
#define NODOABB_H

#include <iostream>
using namespace std;

class NodoABB
{
    private:
        int valor;
        NodoABB* izquierda;
        NodoABB* derecha;

    public:
        NodoABB(int v, NodoABB* izq = NULL, NodoABB* der = NULL){
            valor = v;
            izquierda = izq;
            derecha = der;
        }
        int dameTuValor(void){
            return valor;
        }
        NodoABB*& dameTuIzquierda(void){
            return izquierda;
        }
        NodoABB*& dameTuDerecha(void){
            return derecha;
        }
        void modificaTuValor(int v){
            valor = v;
        }
        void modificaTuIzquierda(NodoABB* izq){
            izquierda = izq;
        }
        void modificaTuDerecha(NodoABB* der){
            derecha = der;
        }

};

#endif // NODOABB_H
