#ifndef NODOT_H
#define NODOT_H

template <typename T>
class NodoT
{
    private:
        T valor;
        NodoT<T>* siguiente;

    public:
        NodoT(T v, NodoT* s = NULL){
            valor = v;
            siguiente = s;
        }
        T dameTuValor(void){
            return valor;
        }
        void modificaTuValor(T v){
            valor = v;
        }
        NodoT* dameTuSiguiente(void){
            return siguiente;
        }
        void modificaTuSiguiente(NodoT* s){
            siguiente = s;
        }
};

#endif // NODOT_H
