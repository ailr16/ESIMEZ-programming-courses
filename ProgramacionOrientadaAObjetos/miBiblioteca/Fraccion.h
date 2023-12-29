#ifndef FRACCION_H
#define FRACCION_H


#include <iostream>
using namespace std;

class Fraccion{
    private:
        int num,den;
    public:
        Fraccion(void);
        Fraccion(int n, int d);
        ~Fraccion(void);
        void pideleAlUsuarioTusDatos(void);
        void muestraTusDatos(void);
        int dameTuNum(void);
        void modificaTuNum(int num);
        int dameTuDen(void);
        void modificaTuDen(int den);
};
Fraccion operator+(Fraccion C1, Fraccion C2);
Fraccion operator-(Fraccion C1, Fraccion C2);
Fraccion operator*(Fraccion C1, Fraccion C2);
Fraccion operator/(Fraccion C1, Fraccion C2);
istream& operator>>(istream& Izq, Fraccion& Der);
ostream& operator<<(ostream& Izq, Fraccion Der);

Fraccion suma(Fraccion F1, Fraccion F2);
Fraccion resta(Fraccion F1, Fraccion F2);
Fraccion multiplica(Fraccion F1, Fraccion F2);
Fraccion divide(Fraccion F1, Fraccion F2);

#endif // FRACCION_H
