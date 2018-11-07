#include <iostream>
#include "registro.h"
#include "Hora.h"

#include "stdlib.h"
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    Registro A, B;
    Fecha x;
    Hora y;
    /*A.muestraTusDatos();
    A.modificaTuHora(x);
    A.modificaTuHoraUTC(y);
    A.modificaTuFecha(m);
    A.modificaTuFechaUTC(n);
    A.modificaTuMagnitud(2.56);
    A.modificaTuEstatus("verificado");
    A.modificaTuReferencia("29 km al SUROESTE");
    A.muestraTusDatos();
    */

    ifstream archivo("SSNMX_catalogo_20181001_20181026.csv");

        stringstream datosRegistro;
        string datos, dato, dato2, dato3;
        int datoEntero;
        float datoFlotante;

        getline(archivo, datos);
        datosRegistro.str(datos);

        getline(datosRegistro,dato,'-');
        x.modificaTuA(atoi(dato.c_str()));
        getline(datosRegistro,dato,'-');
        x.modificaTuM(atoi(dato.c_str()));
        getline(datosRegistro,dato,',');
        x.modificaTuD(atoi(dato.c_str()));
        A.modificaTuFecha(x);
        getline(datosRegistro,dato,':');
        y.modificaTuH(atoi(dato.c_str()));
        getline(datosRegistro,dato,':');
        y.modificaTuM(atoi(dato.c_str()));
        getline(datosRegistro,dato,',');
        y.modificaTuS(atoi(dato.c_str()));
        A.modificaTuHora(y);
        getline(datosRegistro,dato,',');
        A.modificaTuMagnitud(atof(dato.c_str()));
        getline(datosRegistro,dato,',');
        A.modificaTuLatitud(atof(dato.c_str()));
        getline(datosRegistro,dato,',');
        A.modificaTuLongitud(atof(dato.c_str()));
        getline(datosRegistro,dato,',');
        A.modificaTuProfundidad(atof(dato.c_str()));
        getline(datosRegistro,dato,',');
        getline(datosRegistro,dato2,',');
        dato3 = dato+","+dato2;
        A.modificaTuReferencia(dato3);
        getline(datosRegistro,dato,'-');
        x.modificaTuA(atof(dato.c_str()));
        getline(datosRegistro,dato,'-');
        x.modificaTuM(atof(dato.c_str()));
        getline(datosRegistro,dato,',');
        x.modificaTuD(atof(dato.c_str()));
        A.modificaTuFechaUTC(x);
        getline(datosRegistro,dato,':');
        y.modificaTuH(atof(dato.c_str()));
        getline(datosRegistro,dato,':');
        y.modificaTuM(atof(dato.c_str()));
        getline(datosRegistro,dato,',');
        y.modificaTuS(atof(dato.c_str()));
        A.modificaTuHoraUTC(y);
        getline(datosRegistro,dato,',');
        A.modificaTuEstatus(dato);

    archivo.close();

    A.muestraTusDatos();

    return 0;
}

