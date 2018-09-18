#ifndef NIETA_H
#define NIETA_H

#include "Hija.h"

#include <iostream>

using namespace std;

class Nieta : public Hija
{
    protected:
        string N;

    public:
        Nieta(void);
        Nieta(int a, float h, string N);
        void muestraTusDatos(void);
        void pideleAlUsuarioTusDatos(void);
        string dameTuN(void);
        void modificaTuN(string N);
};

#endif // NIETA_H
