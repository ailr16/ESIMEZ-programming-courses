#ifndef HIJA_H
#define HIJA_H

#include "Abuela.h"

class Hija : public Abuela
{
    protected:
        float h;

    public:
        Hija(void);
        Hija(int a, float h);
        void muestraTusDatos(void);
        void pideleAlUsuarioTusDatos(void);
        float dameTuH(void);
        void modificaTuH(float h);
};

#endif // HIJA_H
