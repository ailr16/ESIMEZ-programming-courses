#ifndef FRACCIONT_H
#define FRACCIONT_H

#include <iostream>

using namespace std;

template<typename T>
class FraccionT
{
    private:
        T num,den;
    public:
        FraccionT(void);
        FraccionT(T n, T d);
        ~FraccionT(void);
        void pideleAlUsuarioTusDatos(void);
        void muestraTusDatos(void);
        T dameTuNum(void);
        void modificaTuNum(T num);
        T dameTuDen(void);
        void modificaTuDen(T den);
        bool operator>(FraccionT Der);
        FraccionT<T> operator+=(T Der);
        FraccionT<T> operator-=(T Der);
        FraccionT<T> operator*=(T Der);
        FraccionT<T> operator/=(T Der);
        FraccionT<T> operator++(T);
        FraccionT<T> operator--(T);
};

template<typename T>
FraccionT<T> sumaF(FraccionT<T> X, FraccionT<T> Y);
template<typename T>
FraccionT<T> restaF(FraccionT<T> X, FraccionT<T> Y);
template<typename T>
FraccionT<T> multiplicaF(FraccionT<T> X, FraccionT<T> Y);
template<typename T>
FraccionT<T> divideF(FraccionT<T> X, FraccionT<T> Y);

template<typename T>
FraccionT<T> operator+(FraccionT<T> A, FraccionT<T> B);
template<typename T>
FraccionT<T> operator-(FraccionT<T> A, FraccionT<T> B);
template<typename T>
FraccionT<T> operator*(FraccionT<T> A, FraccionT<T> B);
template<typename T>
FraccionT<T> operator/(FraccionT<T> A, FraccionT<T> B);

template<typename T>
istream& operator>>(istream& Izq,FraccionT<T>& C);
template<typename T>
ostream& operator<<(ostream& Izq,FraccionT<T> C);


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
FraccionT<T>::FraccionT(void){
    num = 1;
    den = 1;
}
template<typename T>
FraccionT<T>::FraccionT(T n, T d){
    num = n;
    den = d;
}
template<typename T>
FraccionT<T>::~FraccionT(void){
}
template<typename T>
void FraccionT<T>::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi num ";
    cin>>num;
    cout<<"Dame mi den ";
    cin>>den;
}
template<typename T>
void FraccionT<T>::muestraTusDatos(void){
    cout<<num<<"/"<<den;
}
template<typename T>
T FraccionT<T>::dameTuNum(void){
    return num;
}
template<typename T>
void FraccionT<T>::modificaTuNum(T num){
    this->num = num;
}
template<typename T>
T FraccionT<T>::dameTuDen(void){
    return den;
}
template<typename T>
void FraccionT<T>::modificaTuDen(T den){
    this->den = den;
}
template<typename T>
bool FraccionT<T>::operator>(FraccionT Der){
	FraccionT<T> copiaIzq(num, den);

	if((copiaIzq.dameTuNum()/copiaIzq.dameTuDen()) > (Der.dameTuNum()/ Der.dameTuDen()))
		return true;

	else
	 return false;
}
template<typename T>
FraccionT<T> FraccionT<T>::operator+=(T Der){
	FraccionT<T> copiaIzq(num + Der, den + Der);
	return copiaIzq;
}

template<typename T>
FraccionT<T> FraccionT<T>::operator-=(T Der){
	FraccionT<T> copiaIzq(num - Der, den - Der);
	return copiaIzq;
}
template<typename T>
FraccionT<T> FraccionT<T>::operator*=(T Der){
	FraccionT<T> copiaIzq(num*Der, den*Der);
	return copiaIzq;
}
template<typename T>
FraccionT<T> FraccionT<T>::operator/=(T Der){
	FraccionT<T> copiaIzq(num/Der, den/Der);
	return copiaIzq;
}
template<typename T>
FraccionT<T> FraccionT<T>::operator++(T){
	FraccionT<T> copiaIzq;
	num++;
	den++;
	copiaIzq.modificaTuNum(num);
	copiaIzq.modificaTuDen(den);
	return copiaIzq;
}
template<typename T>
FraccionT<T> FraccionT<T>::operator--(T){
	FraccionT<T> copiaIzq;
	num--;
	den--;
	copiaIzq.modificaTuNum(num);
	copiaIzq.modificaTuDen(den);
	return copiaIzq;
}




template<typename T>
FraccionT<T> sumaF(FraccionT<T> X, FraccionT<T> Y) {
	FraccionT<T> R;
	R.modificaTuNum(X.dameTuNum() * Y.dameTuDen() + X.dameTuDen() * Y.dameTuNum());
	R.modificaTuDen(X.dameTuDen() * Y.dameTuDen());
	return R;
}

template<typename T>
FraccionT<T> restaF(FraccionT<T> X, FraccionT<T> Y) {
	FraccionT<T> R;
	R.modificaTuNum(X.dameTuNum() * Y.dameTuDen() - X.dameTuDen() * Y.dameTuNum());
	R.modificaTuDen(X.dameTuDen() * Y.dameTuDen());
	return R;
}

template<typename T>
FraccionT<T> multiplicaF(FraccionT<T> X, FraccionT<T> Y) {
	FraccionT<T> R;
	R.modificaTuNum(X.dameTuNum()*Y.dameTuNum());
	R.modificaTuDen(X.dameTuDen() * Y.dameTuDen());
	return R;
}

template<typename T>
FraccionT<T> divideF(FraccionT<T> X, FraccionT<T> Y) {
	FraccionT<T> R;
	R.modificaTuNum(X.dameTuNum() * Y.dameTuDen());
	R.modificaTuDen(+X.dameTuDen() * Y.dameTuNum());
	return R;
}

template<typename T>
FraccionT<T> operator+(FraccionT<T> A, FraccionT<T> B){
	return sumaF(A,B);
}

template<typename T>
FraccionT<T> operator-(FraccionT<T> A, FraccionT<T> B){
	return restaF(A,B);
}

template<typename T>
FraccionT<T> operator*(FraccionT<T> A, FraccionT<T> B){
	return multiplicaF(A,B);
}

template<typename T>
FraccionT<T> operator/(FraccionT<T> A, FraccionT<T> B){
	return divideF(A,B);
}


template<typename T>
istream& operator>>(istream& Izq,FraccionT<T>& C){
	C.pideleAlUsuarioTusDatos();
	return Izq;
}

template<typename T>
ostream& operator<<(ostream& Izq,FraccionT<T> C){
	C.muestraTusDatos();
	return Izq;
}

#endif // FRACCIONT_H
