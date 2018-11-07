#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>
#include <math.h>
using namespace std;

class Punto{
    private:
        double x,y;
    public:
        Punto(void);
        Punto(double a, double b);
        ~Punto(void);
        void pideleAlUsuarioTusDatos(void);
        void muestraTusDatos(void);
        double dameTuX(void);
        void modificaTuX(double x);
        double dameTuY(void);
        void modificaTuY(double y);
};

double distanciaEntre(Punto P, Punto Q);
double pendiente(Punto P, Punto Q);
Punto suma(Punto M, Punto N);
Punto resta(Punto M, Punto N);

Punto operator+(Punto A,Punto B);
Punto operator-(Punto A,Punto B);

istream& operator>>(istream&,Punto& C);
ostream& operator<<(ostream&,Punto& C);

#endif // PUNTO_H
