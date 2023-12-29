#ifndef LISTAST_H
#define LISTAST_H
#include "NodoT.h"
#include <iostream>

using namespace std;

template <typename T>
class ListaST
{
    private:
        NodoT<T>* inicio;
        NodoT<T>* fin;

    public:
        ListaST(){
            inicio = fin = NULL;
        }

        void muestraTusDatos(void){
            NodoT<T>* aux;
            aux = inicio;
            if(laListaEstaVacia())
                cout << "La lista esta vacia" << endl;
            while(aux!= NULL){
                cout << aux->dameTuValor();
                aux = aux->dameTuSiguiente();
            }
        }

        bool laListaEstaVacia(void){
            return inicio==NULL;
        }

        void inserta(T v){
            if(!laListaEstaVacia()){
                if(v <= inicio->dameTuValor()){  //Inserta un dato al INICIO de la lista
                    inicio = new NodoT<T>(v, inicio);
                }
                else{
                    if(v > fin->dameTuValor()){     //Inserta un dato al FINAL de la lista
                        fin->modificaTuSiguiente(new NodoT<T>(v));
                        fin = fin->dameTuSiguiente();
                    }
                    else{
                        NodoT<T>* aux2;
                        NodoT<T>* aux1 = inicio;
                        while(v > aux1->dameTuValor()){
                            aux2 = aux1;
                            aux1 = aux1->dameTuSiguiente();
                        }
                        aux2->modificaTuSiguiente(new NodoT<T>(v,aux1));
                        }
                    }
                }
            else{
                inicio = new NodoT<T>(v);       //Inserta un dato SI LA LISTA ESTA VACIA
                fin = inicio;
            }
        }

        void borra(T v){
            NodoT<T>* aux;

            if(v <= fin->dameTuValor()){
                if(v == inicio->dameTuValor()){                     //Elimina un dato de la lista si est� al INICIO
                    inicio = inicio->dameTuSiguiente();
                    delete(aux);
                }
                else{
                    NodoT<T>* aux1;
                    NodoT<T>* aux2;
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
        void compara(T v, ListaST<T>& LR){        //  Compara la una lista con un valor dado por el usuario
            NodoT<T>* aux1;                             //  los valores que cumplan la condici�n son guardados en
            aux1 = inicio;                              //  una la lista que se pasa como referencia.
            while(aux1 != fin){
                if(aux1->dameTuValor() < v){
                    LR.inserta(aux1->dameTuValor());
                }
                aux1 = aux1->dameTuSiguiente();
            }
            if(aux1 == fin){
                if(aux1->dameTuValor() < v){
                    LR.inserta(aux1->dameTuValor());
                }
            }
        }
        float promedio(void){
            NodoT<int>* aux;
            int i = 0;
            float suma = 0;
            aux = inicio;
            while(aux != NULL){
                suma = suma + aux->dameTuValor();
                i++;
                aux = aux->dameTuSiguiente();
            }
            return suma/i;
        }
};


#endif // LISTAST_H
