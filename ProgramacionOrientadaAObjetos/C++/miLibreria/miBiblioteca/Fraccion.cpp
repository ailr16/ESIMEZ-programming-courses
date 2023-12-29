#include "Fraccion.h"

Fraccion::Fraccion(void){
    num = 1;
    den = 1;
}
Fraccion::Fraccion(int n, int d){
    num = n;
    den = d;
}
Fraccion::~Fraccion(void){
}
void Fraccion::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi num ";
    cin>>num;
    cout<<"Dame mi den ";
    cin>>den;
}
void Fraccion::muestraTusDatos(void){
    cout<<num<<"/"<<den;
}
int Fraccion::dameTuNum(void){
    return num;
}
void Fraccion::modificaTuNum(int num){
    this->num = num;
}
int Fraccion::dameTuDen(void){
    return den;
}
void Fraccion::modificaTuDen(int den){
    this->den = den;
}
bool Fraccion::operator>(Fraccion Der){
	Fraccion copiaIzq(num, den);
	
	if((copiaIzq.dameTuNum()/copiaIzq.dameTuDen()) > (Der.dameTuNum()/ Der.dameTuDen()))
		return true;
	
	else
	 return false;
}
Fraccion Fraccion::operator+=(int Der){
	Fraccion copiaIzq(num + Der, den + Der);
	return copiaIzq;
}

Fraccion Fraccion::operator-=(int Der){
	Fraccion copiaIzq(num - Der, den - Der);
	return copiaIzq;
}
Fraccion Fraccion::operator*=(int Der){
	Fraccion copiaIzq(num*Der, den*Der);
	return copiaIzq;
}
Fraccion Fraccion::operator/=(int Der){
	Fraccion copiaIzq(num/Der, den/Der);
	return copiaIzq;
}
Fraccion Fraccion::operator++(int){
	Fraccion copiaIzq;
	num++;
	den++;
	copiaIzq.modificaTuNum(num);
	copiaIzq.modificaTuDen(den);
	return copiaIzq;
}
Fraccion Fraccion::operator--(int){
	Fraccion copiaIzq;
	num--;
	den--;
	copiaIzq.modificaTuNum(num);
	copiaIzq.modificaTuDen(den);
	return copiaIzq;
}




Fraccion sumaF(Fraccion X, Fraccion Y) {
	Fraccion R;
	R.modificaTuNum(X.dameTuNum() * Y.dameTuDen() + X.dameTuDen() * Y.dameTuNum());
	R.modificaTuDen(X.dameTuDen() * Y.dameTuDen());
	return R;
}

Fraccion restaF(Fraccion X, Fraccion Y) {
	Fraccion R;
	R.modificaTuNum(X.dameTuNum() * Y.dameTuDen() - X.dameTuDen() * Y.dameTuNum());
	R.modificaTuDen(X.dameTuDen() * Y.dameTuDen());
	return R;
}

Fraccion multiplicaF(Fraccion X, Fraccion Y) {
	Fraccion R;
	R.modificaTuNum(X.dameTuNum()*Y.dameTuNum());
	R.modificaTuDen(X.dameTuDen() * Y.dameTuDen());
	return R;
}

Fraccion divideF(Fraccion X, Fraccion Y) {
	Fraccion R;
	R.modificaTuNum(X.dameTuNum() * Y.dameTuDen());
	R.modificaTuDen(+X.dameTuDen() * Y.dameTuNum());
	return R;
}

Fraccion operator+(Fraccion A, Fraccion B){
	return sumaF(A,B);
}

Fraccion operator-(Fraccion A, Fraccion B){
	return restaF(A,B);
}

Fraccion operator*(Fraccion A, Fraccion B){
	return multiplicaF(A,B);
}

Fraccion operator/(Fraccion A, Fraccion B){
	return divideF(A,B);
}

istream& operator>>(istream& Izq,Fraccion& C){
	C.pideleAlUsuarioTusDatos();
	return Izq;
}

ostream& operator<<(ostream& Izq,Fraccion C){
	C.muestraTusDatos();
	return Izq;
}
