#include <iostream>
#include "registro.h"
#include "Hora.h"

using namespace std;

int main()
{
    Registro A, B;
    Hora x(21,45,16), y(1,2,3);
    Fecha m(27,10,2018), n(16,01,1999);
    A.muestraTusDatos();
    A.modificaTuHora(x);
    A.modificaTuHoraUTC(y);
    A.modificaTuFecha(m);
    A.modificaTuFechaUTC(n);
    A.modificaTuMagnitud(2.56);
    A.modificaTuEstatus("verificado");
    A.modificaTuReferencia("29 km al SUROESTE");
    A.muestraTusDatos();
    B.pideleAlUsuarioTusDatos();
    B.muestraTusDatos();
    return 0;
}

