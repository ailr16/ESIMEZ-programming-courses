#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>
#include <math.h>
using namespace std;

class Complejo{
    private:
        double real, imaginario;
    public:
        Complejo(void);
        Complejo(double r, double i);
        ~Complejo(void);
        void pideleAlUsuarioTusDatos(void);
        void muestraTusDatos(void);
        double dameTuReal(void);
        void modificaTuReal(double real);
        double dameTuImaginario(void);
        void modificaTuImaginario(double imaginario);
};

Complejo operator+(Complejo C1, Complejo C2);
Complejo operator-(Complejo C1, Complejo C2);
Complejo operator*(Complejo C1, Complejo C2);
Complejo operator/(Complejo C1, Complejo C2);
bool operator<(Complejo C1, Complejo C2);
istream& operator>>(istream& Izq, Complejo& Der);
ostream& operator<<(ostream& Izq, Complejo Der);


Complejo suma(Complejo C1, Complejo C2);
Complejo resta(Complejo C1, Complejo C2);
Complejo multiplica(Complejo C1, Complejo C2);
Complejo divide(Complejo C1, Complejo C2);
Complejo powZ(Complejo base, int exponente);
double mod(Complejo z);

#endif // COMPLEJO_H
