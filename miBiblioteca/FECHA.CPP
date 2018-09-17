#include "Fecha.h"

void Fecha::verificaFecha(void){
    if(d<1 || d>31 || m<1 || m>12 || a<0){
        d=1;
        m=1;
        a=2018;
    }
}
Fecha::Fecha(void){
    d=1;
    m=1;
    a=2018;
}
Fecha::Fecha(int d, int m, int a){
    this->d = d;
    this->m = m;
    this->a = a;
    this->verificaFecha();
}
Fecha::~Fecha(){
}
void Fecha::muestraTusDatos(void){
    cout<<d<<"/"<<m<<"/"<<a<<endl;
}
void Fecha::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi d ";
    cin>>d;
    cout<<"Dame mi m ";
    cin>>m;
    cout<<"Dame mi a ";
    cin>>a;
    this->verificaFecha();
}
int Fecha::dameTuD(void){
    return d;
}
void Fecha::modificaTuD(int d){
    this->d=d;
    this->verificaFecha();
}
int Fecha::dameTuM(void){
    return m;
}
void Fecha::modificaTuM(int m){
    this->m=m;
    this->verificaFecha();
}
int Fecha::dameTuA(void){
    return a;
}
void Fecha::modificaTuA(int a){
    this->a=a;
    this->verificaFecha();
}

ostream& operator<<(ostream &Izq,Fecha C){
	C.muestraTusDatos();
	return Izq;
}
bool operator<(Fecha izq, Fecha der){
    if(izq.dameTuA() < der.dameTuA())
        return true;
    else if((izq.dameTuA() == der.dameTuA()) && (izq.dameTuM() < der.dameTuM()))
        return true;
    else if( (izq.dameTuA() == der.dameTuA()) && (izq.dameTuM() == der.dameTuM()) && (izq.dameTuD() < der.dameTuD()) )
        return true;
    else
        return false;
}
