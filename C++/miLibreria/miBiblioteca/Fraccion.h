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
        bool operator>(Fraccion Der);
        Fraccion operator+=(int Der);
        Fraccion operator-=(int Der);
        Fraccion operator*=(int Der);
        Fraccion operator/=(int Der);
        Fraccion operator++(int);
        Fraccion operator--(int);
};

Fraccion sumaF(Fraccion X, Fraccion Y);
Fraccion restaF(Fraccion X, Fraccion Y);
Fraccion multiplicaF(Fraccion X, Fraccion Y);
Fraccion divideF(Fraccion X, Fraccion Y);

Fraccion operator+(Fraccion A, Fraccion B);
Fraccion operator-(Fraccion A, Fraccion B);
Fraccion operator*(Fraccion A, Fraccion B);
Fraccion operator/(Fraccion A, Fraccion B);

istream& operator>>(istream& Izq,Fraccion& C);
ostream& operator<<(ostream& Izq,Fraccion C);

#endif // FRACCION_H
