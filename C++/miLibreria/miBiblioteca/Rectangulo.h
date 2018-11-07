#ifndef RECTANGULO_H
#define RECTANGULO_H

#include<iostream>
using namespace std;
class Rectangulo{
    private:
        double base, altura;
    public:
        Rectangulo(void);
        Rectangulo(double b, double a);
        ~Rectangulo(void);
        void pideleAlUsuarioTusDatos(void);
        void muestraTusDatos(void);
        double dameTuBase(void);
        void modificaTuBase(double base);
        double dameTuAltura(void);
        void modificaTuAltura(double altura);
};

double calculaArea(Rectangulo X);
double calculaPerimetro(Rectangulo X);
#endif // RECTANGULO_H
