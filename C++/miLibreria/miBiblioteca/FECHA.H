#ifndef FECHA_H
#define FECHA_H


#include <iostream>
using namespace std;
class Fecha{
private:
    int d, m, a;
    void verificaFecha(void);
public:
    Fecha(void);
    Fecha(int d, int m, int a);
    ~Fecha();
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    int dameTuD(void);
    void modificaTuD(int d);
    int dameTuM(void);
    void modificaTuM(int m);
    int dameTuA(void);
    void modificaTuA(int a);
};

ostream& operator<<(ostream& Izq,Fecha& C);

#endif // FECHA_H
