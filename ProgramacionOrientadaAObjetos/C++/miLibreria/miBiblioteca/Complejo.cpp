#include "Complejo.h"
#include <math.h>

Complejo::Complejo(void){
	real=0.0;
	imaginario=0.0;
}
Complejo::Complejo(double r, double i){
	real=r;
	imaginario=i;
}
Complejo::~Complejo(void){
}
void Complejo::pideleAlUsuarioTusDatos(void){
	cout<<"Dame mi real ";cin>>real;
	cout<<"Dame mi imaginario ";cin>>imaginario;
}
void Complejo::muestraTusDatos(void){
	cout<<real;
	if(imaginario<0)
		cout<<imaginario;
	else
		cout<<"+"<<imaginario;
	cout<<"i";
}
double Complejo::dameTuReal(void){
	return real;
}
void Complejo::modificaTuReal(double real){
	this->real=real;
}
double Complejo::dameTuImaginario(void){
	return imaginario;
}
void Complejo::modificaTuImaginario(double imaginario){
	this->imaginario=imaginario;
}
Complejo Complejo::operator+=(double Der){
	Complejo copiaIzq(real + Der, imaginario + Der);
	return copiaIzq;
}
Complejo Complejo::operator-=(double Der){
	Complejo copiaIzq(real - Der, imaginario - Der);
	return copiaIzq;
}
bool Complejo::operator>(Complejo Der){
	Complejo Z(real, imaginario);
	
	if(modulo(Z) > modulo(Der))
		return true;
		
	else
		return false;
}
bool Complejo::operator<(Complejo Der){
	Complejo Z(real, imaginario);
	
	if(modulo(Z) < modulo(Der))
		return true;
		
	else
		return false;
}
Complejo Complejo::operator*=(double Der){
	Complejo copiaIzq(real * Der, imaginario * Der);
	return copiaIzq;
}
Complejo Complejo::operator/=(double Der){
	Complejo copiaIzq(real / Der, imaginario / Der);
	return copiaIzq;
}
Complejo Complejo::operator++(int){
	Complejo copiaIzq;
	real++;
	imaginario++;
	copiaIzq.modificaTuReal(real);
	copiaIzq.modificaTuImaginario(imaginario);
	return copiaIzq;
}
Complejo Complejo::operator--(int){
	Complejo copiaIzq;
	real--;
	imaginario--;
	copiaIzq.modificaTuReal(real);
	copiaIzq.modificaTuImaginario(imaginario);
	return copiaIzq;
}


Complejo sumaC(Complejo A, Complejo B) {
	Complejo R;
	R.modificaTuReal(A.dameTuReal() + B.dameTuReal());
	R.modificaTuImaginario(A.dameTuImaginario() + B.dameTuImaginario());
	return R;
}
Complejo restaC(Complejo A, Complejo B) {
	Complejo R;
	R.modificaTuReal(A.dameTuReal() - B.dameTuReal());
	R.modificaTuImaginario(A.dameTuImaginario() - B.dameTuImaginario());
	return R;
}
Complejo multiplicaC(Complejo A, Complejo B) {
	Complejo R;
	R.modificaTuReal(A.dameTuReal()*B.dameTuReal() - A.dameTuImaginario()*B.dameTuImaginario());
	R.modificaTuImaginario(A.dameTuReal()*B.dameTuImaginario() + A.dameTuImaginario()*B.dameTuReal());
	return R;
}
Complejo divideC(Complejo A, Complejo B) {
	Complejo R;
	R.modificaTuReal((A.dameTuReal() * B.dameTuReal() + A.dameTuImaginario()*B.dameTuImaginario())
		/
		(pow(B.dameTuReal(), 2) + (pow(B.dameTuImaginario(), 2)))
	);
	R.modificaTuImaginario((A.dameTuImaginario()*B.dameTuReal() - A.dameTuReal()*B.dameTuImaginario())
		/
		(pow(B.dameTuReal(), 2) + (pow(B.dameTuImaginario(), 2)))
	);
	return R;
}
double modulo(Complejo A){
	return sqrt( pow(A.dameTuReal(),2) + pow(A.dameTuImaginario(),2));
}



Complejo operator+(Complejo A, Complejo B){
	return sumaC(A,B);
}
Complejo operator-(Complejo A, Complejo B){
	return restaC(A,B);
}
Complejo operator*(Complejo A, Complejo B){
	return multiplicaC(A,B);
}
Complejo operator/(Complejo A, Complejo B){
	return divideC(A,B);
}
istream& operator>>(istream& Izq,Complejo& C){
	C.pideleAlUsuarioTusDatos();
	return Izq;
}
ostream& operator<<(ostream& Izq,Complejo C){
	C.muestraTusDatos();
	return Izq;
}
