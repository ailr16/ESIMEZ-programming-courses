#include "Rectangulo.h"

Rectangulo::Rectangulo(void){
    base=0.0;
    altura=0.0;
}
Rectangulo::Rectangulo(double b, double a){
    base=b;
    altura=a;
}
Rectangulo::~Rectangulo(void){
}
void Rectangulo::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi base ";cin>>base;
    cout<<"Dame mi altura ";cin>>altura;
}
void Rectangulo::muestraTusDatos(void){
    cout<<"Base: "<<base<<endl
        <<"Altura: "<<altura<<endl;
}
double Rectangulo::dameTuBase(void){
    return base;
}
void Rectangulo::modificaTuBase(double base){
    this->base=base;
}
double Rectangulo::dameTuAltura(void){
    return altura;
}
void Rectangulo::modificaTuAltura(double altura){
    this->altura=altura;
}
double calculaArea(Rectangulo X) {
	return X.dameTuBase()*X.dameTuAltura();
}

double calculaPerimetro(Rectangulo X) {
	return X.dameTuBase() * 2 + X.dameTuAltura() * 2;
}