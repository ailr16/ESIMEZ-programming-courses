#include "Punto.h"

Punto::Punto(void){
    x=0.0;
    y=0.0;
}
Punto::Punto(double a, double b){
    x=a;
    y=b;
}
Punto::~Punto(void){
}
void Punto::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi x ";
    cin>>x;
    cout<<"Dame mi y ";
    cin>>y;
}
void Punto::muestraTusDatos(void){
    cout<<"("<<x<<","<<y<<")";
}
double Punto::dameTuX(void){
    return x;
}
void Punto::modificaTuX(double x){
    this->x = x;
}
double Punto::dameTuY(void){
    return y;
}
void Punto::modificaTuY(double y){
    this->y = y;
}


double distanciaEntre(Punto P, Punto Q){
    return sqrt(
                pow(P.dameTuX()-Q.dameTuX(),2)
                +
                pow(P.dameTuY()-Q.dameTuY(),2)
            );
}
