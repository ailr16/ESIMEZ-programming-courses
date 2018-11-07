#include "Persona.h"
void Persona::verificaDatos(void){
    if(estatura<0.3 || estatura>3.5)
        estatura = 0.3;
}
Persona::Persona(void){
    estatura = 0.3;
}
Persona::Persona(string Nombre, string APaterno, string AMaterno,string Genero, Evento FNacimiento, float estatura){
    this->Nombre = Nombre;
    this->APaterno = APaterno;
    this->AMaterno = AMaterno;
    this->Genero = Genero;
    this->estatura = estatura;
    this->FNacimiento.modificaTuF(FNacimiento.dameTuF()) ;
    this->FNacimiento.modificaTuH(FNacimiento.dameTuH()) ;
    this->verificaDatos();
}
Persona::Persona(string Nombre, string APaterno, string AMaterno,string Genero, Fecha FN, Hora HN, float estatura){
    this->Nombre = Nombre;
    this->APaterno = APaterno;
    this->AMaterno = AMaterno;
    this->Genero = Genero;
    this->estatura = estatura;
    this->FNacimiento.modificaTuF(FN) ;
    this->FNacimiento.modificaTuH(HN);
    this->verificaDatos();
}
Persona::Persona(string Nombre, string APaterno, string AMaterno,string Genero, int d, int mes, int a, int h, int m, int s, float estatura){
    this->Nombre = Nombre;
    this->APaterno = APaterno;
    this->AMaterno = AMaterno;
    this->Genero = Genero;
    this->estatura = estatura;
    this->FNacimiento.modificaTuDia(d) ;
    this->FNacimiento.modificaTuMes(mes) ;
    this->FNacimiento.modificaTuAnio(a) ;
    this->FNacimiento.modificaTuHora(h) ;
    this->FNacimiento.modificaTuMinuto(m) ;
    this->FNacimiento.modificaTuSegundo(s) ;
    this->verificaDatos();
}
Persona::~Persona(void){
}
void Persona::pideleAlUsusarioTusDatos(void){
    cout<<"Dame mi Nombre: ";
    cin>>Nombre;
    cout<<"Dame mi Paterno: ";
    cin>>APaterno;
    cout<<"Dame mi Materno: ";
    cin>>AMaterno;
    cout<<"Dame mi Genero: ";
    cin>>Genero;
    cout<<"Dame mi Estatura: ";
    cin>>estatura;
    cout<<"Dame mi Fecha de Nacimiento: "<<endl;
    FNacimiento.pideleAlUsuarioTusDatos();
    this->verificaDatos();
}
void Persona::muestraTusDatos(void){
    cout<<"Nombre: "<<Nombre<<endl
        <<"Paterno: "<<APaterno<<endl
        <<"Materno: "<<AMaterno<<endl
        <<"Genero: "<<Genero<<endl
        <<"Estatura: "<<estatura<<endl
        <<"Nacimiento: "<<endl;
    FNacimiento.muestraTusDatos();
}
string Persona::dameTuNombre(void){
    return Nombre;
}
void Persona::modificaTuNombre(string Nombre){
    this->Nombre=Nombre;
}
string Persona::dameTuAPaterno(void){
    return APaterno;
}
void Persona::modificaTuAPaterno(string APaterno){
    this->APaterno=APaterno;
}
string Persona::dameTuAMaterno(void){
    return AMaterno;
}
void Persona::modificaTuAMaterno(string AMaterno){
    this->AMaterno=AMaterno;
}
string Persona::dameTuGenero(void){
    return Genero;
}
void Persona::modificaTuGenero(string Genero){
    this->Genero=Genero;
}
float Persona::dameTuEstatura(void){
    return estatura;
}
void Persona::modificaTuEstatura(float estatura){
    this->estatura=estatura;
    this->verificaDatos();
}
Evento Persona::dameTuFNacimiento(void){
    return FNacimiento;
}
void Persona::modificaTuFNacimiento(Evento FNacimiento){
    this->FNacimiento.modificaTuF(FNacimiento.dameTuF());
    this->FNacimiento.modificaTuH(FNacimiento.dameTuH());
}
int Persona::dameTuHora(void){
    return FNacimiento.dameTuHora();
}
void Persona::modificaTuHora(int h){
    this->FNacimiento.modificaTuHora(h);
}
int Persona::dameTuMinuto(void){
    return FNacimiento.dameTuMinuto();
}
void Persona::modificaTuMinuto(int m){
    this->FNacimiento.modificaTuMinuto(m);
}
int Persona::dameTuSegundo(void){
    return FNacimiento.dameTuSegundo();
}
void Persona::modificaTuSegundo(int s){
    this->FNacimiento.modificaTuSegundo(s);
}
int Persona::dameTuDia(void){
    return FNacimiento.dameTuDia();
}
void Persona::modificaTuDia(int d){
    this->FNacimiento.modificaTuDia(d);
}
int Persona::dameTuMes(void){
    return FNacimiento.dameTuMes();
}
void Persona::modificaTuMes(int m){
    this->FNacimiento.modificaTuMes(m);
}
int Persona::dameTuAnio(void){
    return FNacimiento.dameTuAnio();
}
void Persona::modificaTuAnio(int a){
    this->FNacimiento.modificaTuAnio(a);
}
