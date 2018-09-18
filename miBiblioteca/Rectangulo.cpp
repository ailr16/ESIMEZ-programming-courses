#include "Rectangulo.h"

void Rectangulo::verificaDatos(void){
    if(base<=0 || altura<=0){
        base = 0;
        altura = 0;
    }
    this->calculaArea();
    this->calculaPerimetro();
}
void Rectangulo::calculaArea(void){
    area = base*altura;
}
void Rectangulo::calculaPerimetro(void){
    perimetro = 2*base + 2*altura;
}
Rectangulo::Rectangulo(void){
    base=0.0;
    altura=0.0;
    this->verificaDatos();
}
Rectangulo::Rectangulo(double base, double altura){
    this->base=base;
    this->altura=altura;
    this->verificaDatos();
}
Rectangulo::~Rectangulo(void){
}
void Rectangulo::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi base ";
    cin>>base;
    cout<<"Dame mi altura ";
    cin>>altura;
    this->verificaDatos();
}
void Rectangulo::muestraTusDatos(void){
    cout<<"Base: "<<base<<endl
        <<"Altura: "<<altura<<endl
        <<"Area: "<<area<<endl
        <<"Perimetro: "<<perimetro<<endl;
}
double Rectangulo::dameTuBase(void){
    return base;
}
void Rectangulo::modificaTuBase(double base){
    this->base=base;
    this->verificaDatos();
}
double Rectangulo::dameTuAltura(void){
    return altura;
}
void Rectangulo::modificaTuAltura(double altura){
    this->altura=altura;
    this->verificaDatos();
}
double Rectangulo::dameTuArea(void){
    return area;
}
double Rectangulo::dameTuPerimetro(void){
    return perimetro;
}
void Rectangulo::modificaTusDatos(double base, double altura){
    this->base = base;
    this->altura = altura;
    this->verificaDatos();
}

double calculaArea(Rectangulo R) {
	return R.dameTuBase()*R.dameTuAltura();
}
double calculaPerimetro(Rectangulo R) {
	return 2 * R.dameTuBase() + 2 * R.dameTuAltura();
}
