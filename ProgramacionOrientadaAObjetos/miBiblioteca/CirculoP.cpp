#include "CirculoP.h"



CirculoP::CirculoP(){
}
CirculoP::CirculoP(Punto C, Punto P){
    this->C.modificaTuX(C.dameTuX());
    this->C.modificaTuY(C.dameTuY());
    this->P.modificaTuX(P.dameTuX());
    this->P.modificaTuY(P.dameTuY());
}
CirculoP::CirculoP(double xC, double yC, double xP, double yP){
    this->C.modificaTuX(xC);
    this->C.modificaTuY(yC);
    this->P.modificaTuX(xP);
    this->P.modificaTuY(yP);
}
CirculoP::~CirculoP(){
}
void CirculoP::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi C"<<endl;
    cin>>this->C;
    cout<<"Dame mi P"<<endl;
    cin>>this->P;
}
void CirculoP::muestraTusDatos(void){
    cout<<"C"<<this->C<<endl
        <<"P"<<this->P<<endl
        <<"Radio: "<<this->dameTuRadio()<<endl
        <<"Diametro: "<<this->dameTuDiametro()<<endl
        <<"Area: "<<this->dameTuArea()<<endl
        <<"Perimetro: "<<this->dameTuPerimetro()<<endl;
}
Punto CirculoP::dameTuC(void){
    return C;
}
void CirculoP::modificaTuC(Punto C){
    this->C.modificaTuX(C.dameTuX());
    this->C.modificaTuY(C.dameTuY());
}
Punto CirculoP::dameTuP(void){
    return P;
}
void CirculoP::modificaTuP(Punto P){
    this->P.modificaTuX(P.dameTuX());
    this->P.modificaTuY(P.dameTuY());
}
double CirculoP::dameTuRadio(void){
    return distanciaEntre(this->C,this->P);
}
double CirculoP::dameTuDiametro(void){
    return 2 * this->dameTuRadio();
}
double CirculoP::dameTuArea(void){
    return M_PI * pow(this->dameTuRadio(),2);
}
double CirculoP::dameTuPerimetro(void){
    return  2* M_PI * this->dameTuRadio();
}




























