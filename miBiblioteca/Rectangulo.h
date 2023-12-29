#ifndef RECTANGULO_H
#define RECTANGULO_H

#include<iostream>
using namespace std;
class Rectangulo{
    private:
        double base, altura, area, perimetro;
        void verificaDatos(void);
        void calculaArea(void);
        void calculaPerimetro(void);
    public:
        Rectangulo(void);
        Rectangulo(double base, double altura);
        ~Rectangulo(void);
        void pideleAlUsuarioTusDatos(void);
        void muestraTusDatos(void);
        double dameTuBase(void);
        void modificaTuBase(double base);
        double dameTuAltura(void);
        void modificaTuAltura(double altura);
        double dameTuArea(void);
        double dameTuPerimetro(void);
        void modificaTusDatos(double base, double altura);
};

double calculaArea(Rectangulo R);
double calculaPerimetro(Rectangulo R);

#endif // RECTANGULO_H
