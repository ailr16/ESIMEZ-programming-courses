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
            if(laListaEstaVacia()){         //Inserta un dato SI LA LISTA ESTA VACIA
                inicio = new Nodo(v);
            }

            if(v < inicio->dameTuValor()){
                inicio = new Nodo(v, inicio);
            }

            /*Nodo* aux2;
            Nodo* aux1 = inicio;
            while(v > aux1->dameTuValor()){
                aux2 = aux1;
                aux1 = aux1->dameTuSiguiente();
            }
            aux2->modificaTuSiguiente(new Nodo(v,aux1));

            if(v > fin->dameTuValor()){
                fin->modificaTuSiguiente(new Nodo(v));
                fin = fin->dameTuSiguiente();
            }
            */
        }

};


#endif // LISTAS_H
