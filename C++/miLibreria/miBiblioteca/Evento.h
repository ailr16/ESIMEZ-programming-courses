#ifndef EVENTO_H
#define EVENTO_H

#include <iostream>
using namespace std;
#include "Fecha.h"
#include "Hora.h"
class Evento{
private:
    Fecha F;
    Hora H;
public:
    Evento(void);
    Evento(Fecha F, Hora H);
    Evento(int d, int mes, int a, int h, int m, int s);
    ~Evento();
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    Fecha dameTuF(void);
    void modificaTuF(Fecha F);
    Hora dameTuH(void);
    void modificaTuH(Hora H);
    int dameTuHora(void);
    void modificaTuHora(int h);
    int dameTuMinuto(void);
    void modificaTuMinuto(int m);
    int dameTuSegundo(void);
    void modificaTuSegundo(int s);
    int dameTuDia(void);
    void modificaTuDia(int d);
    int dameTuMes(void);
    void modificaTuMes(int m);
    int dameTuAnio(void);
    void modificaTuAnio(int a);
};

#endif // EVENTO_H
