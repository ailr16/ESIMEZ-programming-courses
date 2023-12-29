#ifndef PUNTOT_H
#define PUNTOT_H

#include <iostream>
#include <math.h>

using namespace std;

template<typename T>
class PuntoT{
    private:
        T x,y;
    public:
        PuntoT(void);
        PuntoT(T a, T b);
        ~PuntoT(void);
        void pideleAlUsuarioTusDatos(void);
        void muestraTusDatos(void);
        T dameTuX(void);
        void modificaTuX(T x);
        T dameTuY(void);
        void modificaTuY(T y);
};

template<typename T>
T distanciaEntre(PuntoT<T> P, PuntoT<T> Q);
template<typename T>
T pendiente(PuntoT<T> P, PuntoT<T> Q);
template<typename T>
PuntoT<T> suma(PuntoT<T> M, PuntoT<T> N);
template<typename T>
PuntoT<T> resta(PuntoT<T> M, PuntoT<T> N);
template<typename T>
PuntoT<T> operator+(PuntoT<T> A,PuntoT<T> B);
template<typename T>
PuntoT<T> operator-(PuntoT<T> A,PuntoT<T> B);
template<typename T>
istream& operator>>(istream&,PuntoT<T>& C);
template<typename T>
ostream& operator<<(ostream&,PuntoT<T>& C);


template<typename T>
PuntoT<T>::PuntoT(void){
    x=0.0;
    y=0.0;
}
template<typename T>
PuntoT<T>::PuntoT(T a, T b){
    x=a;
    y=b;
}
template<typename T>
PuntoT<T>::~PuntoT(void){
}
template<typename T>
void PuntoT<T>::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi x ";
    cin>>x;
    cout<<"Dame mi y ";
    cin>>y;
}
template<typename T>
void PuntoT<T>::muestraTusDatos(void){
    cout<<"("<<x<<","<<y<<")";
}
template<typename T>
T PuntoT<T>::dameTuX(void){
    return x;
}
template<typename T>
void PuntoT<T>::modificaTuX(T x){
    this->x = x;
}
template<typename T>
T PuntoT<T>::dameTuY(void){
    return y;
}
template<typename T>
void PuntoT<T>::modificaTuY(T y){
    this->y = y;
}


template<typename T>
T distanciaEntre(PuntoT<T> P, PuntoT<T> Q){
    return sqrt(
                pow(P.dameTuX()-Q.dameTuX(),2)
                +
                pow(P.dameTuY()-Q.dameTuY(),2)
            );
}

template<typename T>
T pendiente(PuntoT<T> P, PuntoT<T> Q) {
	return (P.dameTuY() - Q.dameTuY()) / (P.dameTuX() - Q.dameTuX());
}

template<typename T>
PuntoT<T> suma(PuntoT<T> M, PuntoT<T> N) {
	PuntoT<T> R;
	R.modificaTuX(M.dameTuX() + N.dameTuX());
	R.modificaTuY(M.dameTuY() + N.dameTuY());
	return R;
}

template<typename T>
PuntoT<T> resta(PuntoT<T> M, PuntoT<T> N) {
	PuntoT<T> R;
	R.modificaTuX(M.dameTuX() - N.dameTuX());
	R.modificaTuY(M.dameTuY() - N.dameTuY());
	return R;
}

template<typename T>
PuntoT<T> operator+(PuntoT<T> A,PuntoT<T> B){
	return suma(A,B);
}

template<typename T>
PuntoT<T> operator-(PuntoT<T> A,PuntoT<T> B){
	return resta(A,B);
}

template<typename T>
istream& operator>>(istream& Izq,PuntoT<T>& C){
	C.pideleAlUsuarioTusDatos();
	return Izq;
}

template<typename T>
ostream& operator<<(ostream& Izq,PuntoT<T>& C){
	C.muestraTusDatos();
	return Izq;
}


#endif // PUNTOT_H
