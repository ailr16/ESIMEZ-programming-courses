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

        void muestraTusDatosA(void){
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
        void muestraTusDatosD(void){
            NodoD* aux;
            aux = fin;
            if(laListaEstaVacia()){
                cout << "La lista esta vacia" << endl;
            }
            while(aux != NULL){
                cout << aux->dameTuValor() << " ";
                aux = aux->dameTuAnterior();
            }
        }

        bool laListaEstaVacia(void){
            return inicio == NULL;
        }

        void inserta(int v){
            if(!laListaEstaVacia()){
                if(v <= inicio->dameTuValor()){          //  Inserta un nodo al inicio de la lista
                    inicio->modificaTuAnterior(new NodoD(v,NULL,inicio));
                    inicio = inicio->dameTuAnterior();
                }
                else{
                    if(v > fin->dameTuValor()){             //  Inserta un nodo al final de la lista
                        fin->modificaTuSiguiente(new NodoD(v,fin,NULL));
                        fin = fin->dameTuSiguiente();
                    }
                    else{
                        NodoD* aux = inicio;
                        while(v > aux->dameTuValor()){
                            aux = aux->dameTuSiguiente();
                        }
                        aux->dameTuAnterior()->modificaTuSiguiente(new NodoD(v,aux->dameTuAnterior(),aux));
                        aux->modificaTuAnterior(aux->dameTuAnterior()->dameTuSiguiente());
                    }
                }
            }
            else{
                inicio = new NodoD(v,NULL,NULL);                  //  Inserta un nodo si la lista esta vacia
                fin = inicio;
            }
        }

        void borra(int v){
            NodoD* aux;
            if(!laListaEstaVacia()){
                if(v <= fin->dameTuValor()){        //  Prueba logica: el valor mayor al valor de fin nunca estara en la lista
                    if(v == inicio->dameTuValor()){                 //  Borra un nodo si esta al inicio
                        aux = inicio;
                        inicio->dameTuSiguiente()->modificaTuAnterior(NULL);
                        inicio = inicio->dameTuSiguiente();
                        delete aux;
                    }
                    else{                                   //  Borra un nodo en cualquier posicion de la lista
                        aux = inicio;
                        while(v > aux->dameTuValor()){
                            aux = aux->dameTuSiguiente();
                        }
                        if(v == aux->dameTuValor()){
                            aux->dameTuAnterior()->modificaTuSiguiente(aux->dameTuSiguiente());
                            aux->dameTuSiguiente()->modificaTuAnterior(aux->dameTuAnterior());
                            delete aux;
                        }
                        else
                            cout << "El valor no esta en la lista" << endl;
                    }
                }
                else
                    cout << "El valor no esta en la lista" << endl;
            }
            else
                cout << "La lista esta vacia" << endl;
        }

};

#endif // LISTAD_H
