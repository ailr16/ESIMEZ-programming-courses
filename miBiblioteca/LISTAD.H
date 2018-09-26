#ifndef LISTAD_H
#define LISTAD_H

#include <iostream>
using namespace std;

#include "NodoD.h"

class ListaD
{
    private:
        NodoD* inicio;
        NodoD* fin;

    public:
        ListaD(void){
            inicio = NULL;
            fin = NULL;
        }

        void muestraTusDatos(void){
            NodoD* aux;
            aux = inicio;
            if(laListaEstaVacia()){
                cout << "La lista esta vacia" << endl;
            }
            while(aux != NULL){
                cout << aux->dameTuValor() << " ";
                aux = aux->dameTuSiguiente();
            }
        }

        bool laListaEstaVacia(void){
            return inicio == NULL;
        }

        void inserta(int v){
            if(!laListaEstaVacia()){
                if(v <= inicio->dameTuValor()){          //  Inserta un nodo al inicio de la lista
                    inicio = new NodoD(v,NULL,inicio);
                }

                if(v > fin->dameTuValor()){             //  Inserta un nodo al final de la lista
                    fin->modificaTuSiguiente(new NodoD(v,fin,NULL));
                    fin = fin->dameTuSiguiente();
                }

                if(v > inicio->dameTuValor() && v < fin->dameTuValor()){
                    NodoD* aux;
                    aux = inicio;
                    while(v > aux->dameTuValor()){
                        aux = aux->dameTuSiguiente();
                    }
                    aux->dameTuAnterior()->modificaTuSiguiente(new NodoD(v,aux->dameTuAnterior(),aux));
                }
            }
            else{
                inicio = new NodoD(v,NULL,NULL);                  //  Inserta un nodo si la lista esta vacia
                fin = inicio;
            }
        }

};

#endif // LISTAD_H
