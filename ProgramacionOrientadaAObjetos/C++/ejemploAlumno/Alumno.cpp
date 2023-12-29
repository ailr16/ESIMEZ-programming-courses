#include "Alumno.h"

Alumno::Alumno(void){
    semestre = 1;
    promedio = 0;
}
Alumno::Alumno(string Nombre, string APaterno, string AMaterno,string Genero,Evento FNacimiento, float estatura, string Carrera, string Boleta, int semestre, float promedio):Persona(Nombre,APaterno,AMaterno,Genero,FNacimiento,estatura){
    this->Carrera = Carrera;
    this->Boleta = Boleta;
    this->semestre = semestre;
    this->promedio = promedio;
}
void Alumno::muestraTusDatos(void){
    Persona::muestraTusDatos();
    cout << "Carrera: " << Carrera << endl
         << "Boleta: " << Boleta << endl
         << "Semestre: " << semestre << endl
         << "Promedio: " << promedio << endl;
}
