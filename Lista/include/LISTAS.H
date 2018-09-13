#ifndef LISTAS_H
#define LISTAS_H

#include "NODO.H"

#include <iostream>
using namespace std;

class ListaS
{
    private:
        Nodo*  inicio;
        Nodo* fin;

    public:
        ListaS(){
            inicio = fin = NULL;
        }

        void muestraTusDatos(void){
            Nodo* aux;
            aux = inicio;
            while(aux!= NULL){
                cout << aux->dameTuValor() << " ";
                aux = aux->dameTuSiguiente();
            }
        }

        bool laListaEstaVacia(void){
            return inicio==NULL;
        }

        void inserta(int v){
            if(!laListaEstaVacia()){
                if(v < inicio->dameTuValor()){  //Inserta un dato al INICIO de la lista
                    inicio = new Nodo(v, inicio);
                }
                if(v > fin->dameTuValor()){     //Inserta un dato al FINAL de la lista
                    fin->modificaTuSiguiente(new Nodo(v));
                    fin = fin->dameTuSiguiente();
                }
                if(v > inicio->dameTuValor() && v < fin->dameTuValor()){
                    Nodo* aux2;
                    Nodo* aux1 = inicio;
                    while(v > aux1->dameTuValor()){
                        aux2 = aux1;
                        aux1 = aux1->dameTuSiguiente();
                    }
                    aux2->modificaTuSiguiente(new Nodo(v,aux1));
                    }
            }
            else{
                inicio = new Nodo(v);       //Inserta un dato SI LA LISTA ESTA VACIA
                fin = inicio;
            }
        }
};


#endif // LISTAS_H
