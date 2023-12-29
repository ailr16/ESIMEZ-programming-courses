#include <iostream>
#include "Persona.h"
#include "Alumno.h"

using namespace std;

int main()
{
    Evento FN(16,01,1999,9,57,32);
    Alumno A("X","Y","Z","D",FN,1.7,"IE","123456789",2,9.5);
    A.muestraTusDatos();
    return 0;
}
