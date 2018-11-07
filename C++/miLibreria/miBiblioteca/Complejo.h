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
        Complejo operator+=(double Der);
        Complejo operator-=(double Der);
        bool operator>(Complejo Der);
        bool operator<(Complejo Der);
        Complejo operator*=(double Der);
        Complejo operator/=(double Der);
        Complejo operator++(int);
        Complejo operator--(int);
};

Complejo sumaC(Complejo A, Complejo B);
Complejo restaC(Complejo A, Complejo B);
Complejo multiplicaC(Complejo A, Complejo B);
Complejo divideC(Complejo A, Complejo B);


Complejo operator+(Complejo A, Complejo B);
Complejo operator-(Complejo A, Complejo B);
Complejo operator*(Complejo A, Complejo B);
Complejo operator/(Complejo A, Complejo B);



istream& operator>>(istream& Izq,Complejo& C);
ostream& operator<<(ostream& Izq,Complejo C);

double modulo(Complejo A);
#endif // COMPLEJO_H
