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
