#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include "Evento.h"
using namespace std;
class Persona{
private:
    string Nombre, APaterno, AMaterno, Genero;
    Evento FNacimiento;
    float estatura;
    void verificaDatos(void);
public:
    Persona(void);
    Persona(string Nombre, string APaterno, string AMaterno,string Genero,Evento FNacimiento, float estatura);
    Persona(string Nombre, string APaterno, string AMaterno,string Genero,Fecha FN, Hora HN, float estatura);
    Persona(string Nombre, string APaterno, string AMaterno,string Genero,int d, int mes, int a, int h, int m, int s, float estatura);
    ~Persona(void);
    void pideleAlUsusarioTusDatos(void);
    void muestraTusDatos(void);
    string dameTuNombre(void);
    void modificaTuNombre(string Nombre);
    string dameTuAPaterno(void);
    void modificaTuAPaterno(string APaterno);
    string dameTuAMaterno(void);
    void modificaTuAMaterno(string AMaterno);
    string dameTuGenero(void);
    void modificaTuGenero(string Genero);
    float dameTuEstatura(void);
    void modificaTuEstatura(float estatura);
    Evento dameTuFNacimiento(void);
    void modificaTuFNacimiento(Evento FNacimiento);
    int dameTuHora(void);
    void modificaTuHora(int h);
    int dameTuMinuto(void);
    void modificaTuMinuto(int m);
    int dameTuSegundo(void);
    void modificaTuSegundo(int s);
    int dameTuDia(void);
    void modificaTuDia(int d);
    int dameTuMes(void);
    void modificaTuMes(int m);
    int dameTuAnio(void);
    void modificaTuAnio(int a);
};

#endif // PERSONA_H
