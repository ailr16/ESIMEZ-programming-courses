#ifndef LISTADT_H
#define LISTADT_H

#include <iostream>
using namespace std;

#include "NodoDT.h"
#include "TerminoA.h"

template<typename T>
class ListaDT
{
    private:
        NodoDT<T>* inicio;
        NodoDT<T>* fin;

    public:
        ListaDT(void){
            inicio = NULL;
            fin = NULL;
        }

        void muestraTusDatos(void){
            NodoDT<T>* aux;
            aux = inicio;
            if(laListaEstaVacia()){
                cout << "La lista esta vacia" << endl;
            }
            while(aux != NULL){
                cout << aux->dameTuValor() << " ";        //Se agrego signo +
                aux = aux->dameTuSiguiente();
            }
            cout<<endl<<endl;
        }
        void muestraTusDatosLD(void){
            NodoDT<T>* aux;
            aux = fin;
            if(laListaEstaVacia()){
                cout << "La lista esta vacia" << endl;
            }
            while(aux != NULL){
                cout << aux->dameTuValor() << " ";        //Se agrego signo +
                aux = aux->dameTuAnterior();
            }
            cout<<endl<<endl;
        }


        bool laListaEstaVacia(void){
            return inicio == NULL;
        }

      void borra(T v){
            if(!laListaEstaVacia()){
            if(v==inicio->dameTuValor()){
                NodoDT<T> *aux=inicio;
                aux->dameTuSiguiente()->modificaTuAnterior(NULL);
                inicio=inicio->dameTuSiguiente();
                delete aux;
            }
            else if(v==fin->dameTuValor()){
                NodoDT<T> *aux=fin;
                aux->dameTuAnterior()->modificaTuSiguiente(NULL);
                fin=fin->dameTuAnterior();
                delete aux;
            }
            else{
                NodoDT<T> *aux1=inicio,*aux2;
                while(aux1!=NULL&&aux1->dameTuValor()<v){
                    aux2=aux1;
                    aux1=aux1->dameTuSiguiente();
                }
                if(aux1!=NULL&&v==aux1->dameTuValor()){
                    aux2->modificaTuSiguiente(aux1->dameTuSiguiente());
                    aux1->dameTuSiguiente()->modificaTuAnterior(aux2);
                    delete (aux1);
                }
                else{
                    cout<<"El valor no se encuentra en la lista: "<<v<<endl;
                }
            }
        }
        else{
            cout<<"La lista esta vacia"<<endl;
        }
    }



    void inserta(T v){
        if(!laListaEstaVacia()){
            if(v <= inicio->dameTuValor()){          //  Inserta un nodo al inicio de la lista
                inicio->modificaTuAnterior(new NodoDT<T>(v,NULL,inicio));
                inicio=inicio->dameTuAnterior();
            }
            else{
                if(v > fin->dameTuValor()){             //  Inserta un nodo al final de la lista
                    fin->modificaTuSiguiente(new NodoDT<T>(v,fin,NULL));
                    fin = fin->dameTuSiguiente();
                }
                else{
                    NodoDT<T>* aux = inicio;
                    while(v > aux->dameTuValor()){
                        aux = aux->dameTuSiguiente();
                    }
                    aux->dameTuAnterior()->modificaTuSiguiente(new NodoDT<T>(v,aux->dameTuAnterior(),aux));
                    aux->modificaTuAnterior(aux->dameTuAnterior()->dameTuSiguiente());
                }
            }
        }
        else{
            inicio = new NodoDT<T>(v,NULL,NULL);                  //  Inserta un nodo si la lista esta vacia
            fin = inicio;
        }
    }

    void derivada(ListaDT<T> &L){
    }

        /*~ListaD(){
            NodoDT<T>* aux;
            aux=inicio;

            while(aux!=NULL){
            aux=inicio->dameTuSiguiente();
            delete inicio;
            inicio=aux;
            }
            cout<<"La lista esta vacia "<<endl<<endl;
        }*/

};


#endif // LISTADT_H
