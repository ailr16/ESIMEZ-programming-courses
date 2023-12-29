#include "Evento.h"


Evento::Evento(void){
    /*Los constructores de Fecha y Hora
      inicializan F y H
    */
}
Evento::Evento(Fecha F, Hora H){
    this->F.modificaTuD(F.dameTuD());
    this->F.modificaTuM(F.dameTuM());
    this->F.modificaTuA(F.dameTuA());
    this->H.modificaTuH(H.dameTuH());
    this->H.modificaTuM(H.dameTuM());
    this->H.modificaTuS(H.dameTuS());
}
Evento::Evento(int d, int mes, int a, int h, int m, int s){
    this->F.modificaTuD(d);
    this->F.modificaTuM(mes);
    this->F.modificaTuA(a);
    this->H.modificaTuH(h);
    this->H.modificaTuM(m);
    this->H.modificaTuS(s);
}
Evento::~Evento(){
}
void Evento::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi F"<<endl;
    F.pideleAlUsuarioTusDatos();
    cout<<endl<<"Dame mi H"<<endl;
    H.pideleAlUsuarioTusDatos();
}
void Evento::muestraTusDatos(void){
    cout<<"Fecha: ";
    F.muestraTusDatos();
    cout<<"Hora: ";
    H.muestraTusDatos();
}
Fecha Evento::dameTuF(void){
    return F;
}
void Evento::modificaTuF(Fecha F){
    this->F.modificaTuD(F.dameTuD());
    this->F.modificaTuM(F.dameTuM());
    this->F.modificaTuA(F.dameTuA());
}
Hora Evento::dameTuH(void){
    return H;
}
void Evento::modificaTuH(Hora H){
    this->H.modificaTuH(H.dameTuH());
    this->H.modificaTuM(H.dameTuM());
    this->H.modificaTuS(H.dameTuS());
}
int Evento::dameTuHora(void){
    return this->H.dameTuH();
}
void Evento::modificaTuHora(int h){
    this->H.modificaTuH(h);
}
int Evento::dameTuMinuto(void){
    return this->H.dameTuM();
}
void Evento::modificaTuMinuto(int m){
    this->H.modificaTuM(m);
}
int Evento::dameTuSegundo(void){
    return this->H.dameTuS();
}
void Evento::modificaTuSegundo(int s){
    this->H.modificaTuS(s);
}
int Evento::dameTuDia(void){
    return this->F.dameTuD();
}
void Evento::modificaTuDia(int d){
    this->F.modificaTuD(d);
}
int Evento::dameTuMes(void){
    return this->F.dameTuM();
}
void Evento::modificaTuMes(int m){
    this->F.modificaTuM(m);
}
int Evento::dameTuAnio(void){
    return this->F.dameTuA();
}
void Evento::modificaTuAnio(int a){
    this->F.modificaTuA(a);
}
