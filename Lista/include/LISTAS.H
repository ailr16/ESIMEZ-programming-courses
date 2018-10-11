#ifndef LISTAS_H
#define LISTAS_H

#include "NODO.H"

#include <iostream>
using namespace std;

class ListaS
{
    private:
        Nodo* inicio;
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


        void muestraTusDatos(Nodo* a){
            static Nodo* aux = inicio;
            if(aux != NULL){
                cout << aux->dameTuValor() << " ";
                aux = aux->dameTuSiguiente();
                muestraTusDatos(aux);
            }
        }

        bool laListaEstaVacia(void){
            return inicio==NULL;
        }

        void inserta(int v){
            if(!laListaEstaVacia()){
                if(v <= inicio->dameTuValor()){  //Inserta un dato al INICIO de la lista
                    inicio = new Nodo(v, inicio);
                }
                else{
                    if(v > fin->dameTuValor()){     //Inserta un dato al FINAL de la lista
                        fin->modificaTuSiguiente(new Nodo(v));
                        fin = fin->dameTuSiguiente();
                    }
                    else{
                        Nodo* aux2;
                        Nodo* aux1 = inicio;
                        while(v > aux1->dameTuValor()){
                            aux2 = aux1;
                            aux1 = aux1->dameTuSiguiente();
                        }
                        aux2->modificaTuSiguiente(new Nodo(v,aux1));
                        }
                    }
                }
            else{
                inicio = new Nodo(v);       //Inserta un dato SI LA LISTA ESTA VACIA
                fin = inicio;
            }
        }

        void borra(int v){
            Nodo* aux;

            if(v <= fin->dameTuValor()){
                if(v == inicio->dameTuValor()){                     //Elimina un dato de la lista si está al INICIO
                    inicio = inicio->dameTuSiguiente();
                    delete(aux);
                }
                else{
                    Nodo* aux1;
                    Nodo* aux2;
                    aux1 = inicio;
                    while(aux1 != NULL && aux1->dameTuValor()<v){
                        aux2 = aux1;
                        aux1 = aux1->dameTuSiguiente();
                    }
                    if(aux1->dameTuValor() == v){
                        aux2->modificaTuSiguiente(aux1->dameTuSiguiente());
                        if(aux1 == fin){
                            fin = aux2;
                        }
                        delete(aux1);
                    }
                    else{
                        cout << "El valor  no esta en la lista: " << v << endl;
                    }
                }
            }
            else{
                cout << "El valor  no esta en la lista: " << v << endl;
            }
        }

};


#endif // LISTAS_H
