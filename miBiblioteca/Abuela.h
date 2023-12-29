#ifndef ABUELA_H
#define ABUELA_H

#include <iostream>

using namespace std;

class Abuela
{
    protected:
        int a;

    public:
        Abuela(void);
        Abuela(int a);
        void muestraTusDatos(void);
        void pideleAlUsuarioTusDatos(void);
        int dameTuA(void);
        void modificaTuA(int a);
};

#endif // ABUELA_H
