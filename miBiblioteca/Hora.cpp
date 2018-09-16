#include "Hora.h"


void Hora::verificaHora(void){
    if(h<0 || h>23 || m<0 || m>59 || s<0 || s>59){
        h=0;
        m=0;
        s=0;
    }
}
Hora::Hora(void){
    h=0;
    m=0;
    s=0;
}
Hora::Hora(int h, int m, int s){
    this->h = h;
    this->m = m;
    this->s = s;
    this->verificaHora();
}
Hora::~Hora(){
}
void Hora::muestraTusDatos(void){
    cout<<h<<":"<<m<<":"<<s<<endl;
}
void Hora::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi h ";
    cin>>h;
    cout<<"Dame mi m ";
    cin>>m;
    cout<<"Dame mi s ";
    cin>>s;
    this->verificaHora();
}
int Hora::dameTuH(void){
    return h;
}
void Hora::modificaTuH(int h){
    this->h=h;
    this->verificaHora();
}
int Hora::dameTuM(void){
    return m;
}
void Hora::modificaTuM(int m){
    this->m=m;
    this->verificaHora();
}
int Hora::dameTuS(void){
    return s;
}
void Hora::modificaTuS(int s){
    this->s=s;
    this->verificaHora();
}

//Sobrecargas
bool operator<(Hora Izq, Hora Der){
    if(Izq.dameTuH()<Der.dameTuH()){
        return true;
    }
    else if(Izq.dameTuH()==Der.dameTuH()&&Izq.dameTuM()<Der.dameTuM()){
        return true;
    }
    else if(Izq.dameTuH()==Der.dameTuH()&&Izq.dameTuM()==Der.dameTuM()&&Izq.dameTuS()<Der.dameTuS()){
        return true;
    }
    else{
        return false;
    }
}

bool operator<=(Hora Izq, Hora Der){
    if(Izq.dameTuH() <= Der.dameTuH()){
        return true;
    }
    else if( (Izq.dameTuH() == Der.dameTuH()) && (Izq.dameTuM() <= Der.dameTuM()) ){
        return true;
    }
    else if( (Izq.dameTuH() == Der.dameTuH()) && (Izq.dameTuM() == Der.dameTuM()) && (Izq.dameTuS() <= Der.dameTuS()) ){
        return true;
    }
    else{
        return false;
    }
}

bool operator>(Hora Izq, Hora Der){
    if(Izq.dameTuH() > Der.dameTuH()){
        return true;
    }
    else if( (Izq.dameTuH() == Der.dameTuH()) && (Izq.dameTuM() > Der.dameTuM()) ){
        return true;
    }
    else if( (Izq.dameTuH() == Der.dameTuH()) && (Izq.dameTuM()==Der.dameTuM()) && (Izq.dameTuS()>Der.dameTuS()) ){
        return true;
    }
    else{
        return false;
    }
}

bool operator==(Hora Izq,Hora Der){
    return (Izq.dameTuH()==Der.dameTuH()&&Izq.dameTuM()==Der.dameTuM()&&Izq.dameTuS()==Der.dameTuS());
}

ostream& operator<<(ostream& Izq, Hora Der){
    Der.muestraTusDatos();
    return Izq;
}































