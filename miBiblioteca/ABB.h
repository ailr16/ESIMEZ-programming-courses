#ifndef ABB_H
#define ABB_H

#include "NODOABB.H"

class ABB
{
    private:
        NodoABB *raiz;
        void entreorden(NodoABB* aux);
        void postorden(NodoABB* aux);
        void preorden(NodoABB* aux);
        void inserta(int v, NodoABB *&raiz);
        void destructor(NodoABB* aux);
        int numeroNodos(NodoABB* raiz);

    public:
        ABB(void);
        ~ABB();
        void entreorden(void);
        void postorden(void);
        void preorden(void);
        void inserta(int v);
        int numeroNodos(void);
};

ABB::ABB(void){
    raiz = NULL;
}
void ABB::entreorden(void){
    cout << "Imprime entreorden:" << endl;
    entreorden(raiz);
}
void ABB::postorden(void){cout << endl;
    cout << "Imprime postorden:" << endl;
    postorden(raiz);
}
void ABB::preorden(void){
    cout << "Imprime preorden:" << endl;
    preorden(raiz);
}
void ABB::inserta(int v){
    inserta(v,raiz);
}

void ABB::entreorden(NodoABB* aux){
    if(aux){
        entreorden(aux->dameTuIzquierda());
        cout << aux->dameTuValor() << " ";
        entreorden(aux->dameTuDerecha());
    }
}
void ABB::postorden(NodoABB* aux){
    if(aux != NULL){
        postorden(aux->dameTuIzquierda());
        postorden(aux->dameTuDerecha());
        cout << aux->dameTuValor() << " ";
    }
}
void ABB::preorden(NodoABB* aux){
    if(aux != NULL){;
        cout << aux->dameTuValor() << " ";
        preorden(aux->dameTuIzquierda());
        preorden(aux->dameTuDerecha());
    }
}
void ABB::inserta(int v, NodoABB *&raiz){
    if(raiz == NULL)
        raiz = new NodoABB(v);
    else if(v <= raiz->dameTuValor())
        inserta(v,(raiz->dameTuIzquierda()));
    else
        inserta(v,(raiz->dameTuDerecha()));
}

int ABB::numeroNodos(NodoABB* raiz){
    int i = 0;
    if(raiz->dameTuIzquierda() != NULL && raiz->dameTuIzquierda() != NULL)
        numeroNodos(raiz->dameTuIzquierda());
        i++;
    return i;
}
int ABB::numeroNodos(void){
    int i = numeroNodos(raiz);
    return i;
}

void ABB::destructor(NodoABB* aux){
    if(aux != NULL){
        destructor(aux->dameTuIzquierda());
        destructor(aux->dameTuDerecha());
        cout << aux->dameTuValor() << " ";
        delete aux;
    }
}
ABB::~ABB(){
    cout << "Destructor:" << endl;
    destructor(raiz);
}
#endif // ABB_H
