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
Punto Punto::operator+(Punto Der){
    Punto R;
    R.x = x + Der.x;
    R.y = y + Der.y;
    return R;
}
bool Punto::operator>(Punto Der){
    Punto O, CopiaIzq(x,y);
    if(distanciaEntre(CopiaIzq,O)
       >
       distanciaEntre(Der,O)
    )
        return true;
    else
        return false;
}
Punto Punto::operator-=(double Der){
    Punto copiaIzq;
    x -= Der;
    y -= Der;
    copiaIzq.modificaTuX(x);
    copiaIzq.modificaTuY(y);
    return copiaIzq;
}
Punto Punto::operator--(void){
    Punto CopiaOriginal(--x,--y);
    return CopiaOriginal;
}
Punto Punto::operator--(int){
    Punto CopiaOriginal(x--,y--);
    return CopiaOriginal;
}



double distanciaEntre(Punto P, Punto Q){
    return sqrt(
                pow(P.dameTuX()-Q.dameTuX(),2)
                +
                pow(P.dameTuY()-Q.dameTuY(),2)
            );
}
double pendiente(Punto P, Punto Q){
    return (
                (P.dameTuY()-Q.dameTuY())
                /
                (P.dameTuX()-Q.dameTuX())
            );
}
Punto suma(Punto P, Punto Q){
    Punto R;
    R.modificaTuX(P.dameTuX()+Q.dameTuX());
    R.modificaTuY(P.dameTuY()+Q.dameTuY());
    return R;
}
Punto resta(Punto P, Punto Q){
    Punto R;
    R.modificaTuX(P.dameTuX()-Q.dameTuX());
    R.modificaTuY(P.dameTuY()-Q.dameTuY());
    return R;
}
/*Punto operator+(Punto Izq, Punto Der) {
	Punto R;
	R.modificaTuX(Izq.dameTuX() + Der.dameTuX());
	R.modificaTuY(Izq.dameTuY() + Der.dameTuY());
	return R;
}*/
Punto operator-(Punto Izq, Punto Der) {
	Punto R;
	R.modificaTuX(Izq.dameTuX() - Der.dameTuX());
	R.modificaTuY(Izq.dameTuY() - Der.dameTuY());
	return R;
}
istream& operator>>(istream& Izq, Punto& Der) {
	Der.pideleAlUsuarioTusDatos();
	return Izq;
}
ostream& operator<<(ostream& Izq, Punto Der) {
	Der.muestraTusDatos();
	return Izq;
}
bool operator<(Punto Izq, Punto Der){
    Punto O;
    if(distanciaEntre(Izq,O)
       <
       distanciaEntre(Der,O)
    )
        return true;
    else
        return false;
}
Punto& operator+=(Punto& Izq, double Der){
    Izq.modificaTuX(Izq.dameTuX()+Der);
    Izq.modificaTuY(Izq.dameTuY()+Der);
    return Izq;
}
Punto& operator++(Punto&Izq){
    Izq.modificaTuX(Izq.dameTuX() + 1);
    Izq.modificaTuY(Izq.dameTuY() + 1);
    return Izq;
}
Punto operator++(Punto&Izq, int){
    Punto CopiaOriginal(Izq.dameTuX(),Izq.dameTuY());
    Izq.modificaTuX(Izq.dameTuX() + 1);
    Izq.modificaTuY(Izq.dameTuY() + 1);
    return CopiaOriginal;
}
