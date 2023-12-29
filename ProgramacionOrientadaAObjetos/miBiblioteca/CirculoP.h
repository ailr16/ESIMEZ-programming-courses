#ifndef CIRCULOP_H
#define CIRCULOP_H

#include "Punto.h"
#include <iostream>
#include <math.h>
using namespace std;
class CirculoP{
private:
    Punto C, P;
public:
    CirculoP();
    CirculoP(Punto C, Punto P);
    CirculoP(double xC, double yC, double xP, double yP);
    ~CirculoP();
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    Punto dameTuC(void);
    void modificaTuC(Punto C);
    Punto dameTuP(void);
    void modificaTuP(Punto P);
    double dameTuRadio(void);
    double dameTuDiametro(void);
    double dameTuArea(void);
    double dameTuPerimetro(void);
};

#endif // CIRCULOP_H
