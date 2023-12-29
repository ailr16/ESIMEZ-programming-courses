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

#endif // FRACCION_H
