#ifndef HORA_H
#define HORA_H

#include <iostream>
using namespace std;
class Hora{
private:
    int h, m, s;
    void verificaHora(void);
public:
    Hora(void);
    Hora(int h, int m, int s);
    ~Hora();
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    int dameTuH(void);
    void modificaTuH(int h);
    int dameTuM(void);
    void modificaTuM(int m);
    int dameTuS(void);
    void modificaTuS(int s);
};

#endif // HORA_H
