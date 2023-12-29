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
Fraccion suma(Fraccion F1, Fraccion F2){
    Fraccion Resultado;
    Resultado.modificaTuNum(
        F1.dameTuNum()*F2.dameTuDen()
        +
        F1.dameTuDen()*F2.dameTuNum()
    );
    Resultado.modificaTuDen(F1.dameTuDen()*F2.dameTuDen());
    return Resultado;
}
Fraccion resta(Fraccion F1, Fraccion F2){
    Fraccion Resultado;
    Resultado.modificaTuNum(
        F1.dameTuNum()*F2.dameTuDen()
        -
        F1.dameTuDen()*F2.dameTuNum()
    );
    Resultado.modificaTuDen(F1.dameTuDen()*F2.dameTuDen());
    return Resultado;
}
Fraccion multiplica(Fraccion F1, Fraccion F2){
    Fraccion Resultado;
    Resultado.modificaTuNum(F1.dameTuNum()*F2.dameTuNum());
    Resultado.modificaTuDen(F1.dameTuDen()*F2.dameTuDen());
    return Resultado;
}
Fraccion divide(Fraccion F1, Fraccion F2){
    Fraccion Resultado;
    Resultado.modificaTuNum(F1.dameTuNum()*F2.dameTuDen());
    Resultado.modificaTuDen(F1.dameTuDen()*F2.dameTuNum());
    return Resultado;
}
Fraccion operator+(Fraccion C1, Fraccion C2) {
	return suma(C1, C2);
}
Fraccion operator-(Fraccion C1, Fraccion C2) {
	return resta(C1, C2);
}
Fraccion operator*(Fraccion C1, Fraccion C2) {
	return multiplica(C1, C2);
}
Fraccion operator/(Fraccion C1, Fraccion C2) {
	return divide(C1, C2);
}
istream& operator>>(istream& Izq, Fraccion& Der) {
	Der.pideleAlUsuarioTusDatos();
	return Izq;
}
ostream& operator<<(ostream& Izq, Fraccion Der) {
	Der.muestraTusDatos();
	return Izq;
}

