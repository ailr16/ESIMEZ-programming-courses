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


#endif // PUNTO_H
