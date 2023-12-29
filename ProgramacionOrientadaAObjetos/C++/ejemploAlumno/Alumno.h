#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
#include "Persona.h"

class Alumno : public Persona{
    private:
        string Boleta, Carrera;
        int semestre;
        float promedio;

    public:
        Alumno(void);
        Alumno(string Nombre, string APaterno, string AMaterno,string Genero,Evento FNacimiento, float estatura, string Carrera, string Boleta, int semestre, float promedio);
        Alumno(string Nombre, string APaterno, string AMaterno,string Genero,Fecha FN, Hora HN, float estatura, string Carrera, string Boleta, int semestre, float promedio);
        void muestraTusDatos(void);
};

#endif // ALUMNO_H
