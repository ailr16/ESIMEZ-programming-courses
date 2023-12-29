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
        Punto operator+(Punto Der);
        bool operator>(Punto Der);
        Punto operator-=(double Der);
        Punto operator--(void);
        Punto operator--(int);
};

double distanciaEntre(Punto P, Punto Q);
double pendiente(Punto P, Punto Q);
Punto suma(Punto P, Punto Q);
Punto resta(Punto P, Punto Q);

//Punto operator+(Punto Izq, Punto Der);
Punto operator-(Punto Izq, Punto Der);
istream& operator>>(istream& Izq, Punto& Der);
ostream& operator<<(ostream& Izq, Punto Der);

bool operator<(Punto Izq, Punto Der);
Punto& operator+=(Punto& Izq, double Der);
Punto& operator++(Punto&Izq);
Punto operator++(Punto&Izq, int);


#endif // PUNTO_H
