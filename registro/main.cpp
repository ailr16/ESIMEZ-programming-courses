#include <iostream>
#include "registro.h"
#include "Hora.h"
#include "Fecha.h"

#include "stdlib.h"
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    Registro A,B;

    A.leeDatos();
    A.muestraTusDatos();

    /*Fecha fx;
    Hora hx;
    int entero;
    char car;
    float flotante;
    string cadena;
    ifstream archivo_in;

        stringstream datosRegistro;
        string datos, dato, dato2, dato3;

        archivo_in.open("SSNMX_catalogo_20181001_20181026.csv");
        //getline(archivo_in, datos);

        datosRegistro.str(datos);

        //Secuencia para leer fecha
            archivo_in >> entero;
            fx.modificaTuA(entero);
                archivo_in >> car;
            archivo_in >> entero;
            fx.modificaTuM(entero);
                archivo_in >> car;
            archivo_in >> entero;
            fx.modificaTuD(entero);
                archivo_in >> car;
            A.modificaTuFecha(fx);
        //Secuencia para leer hora
            archivo_in >> entero;
            hx.modificaTuH(entero);
                archivo_in >> car;
            archivo_in >> entero;
            hx.modificaTuM(entero);
                archivo_in >> car;
            archivo_in >> entero;
            hx.modificaTuS(entero);
                archivo_in >> car;
            A.modificaTuHora(hx);
        //Secuencia para otros datos
            archivo_in >> flotante;
            A.modificaTuMagnitud(flotante);
                archivo_in >> car;
            archivo_in >> flotante;
            A.modificaTuLatitud(flotante);
                archivo_in >> car;
            archivo_in >> flotante;
            A.modificaTuLongitud(flotante);
                archivo_in >> car;
            archivo_in >> flotante;
            A.modificaTuProfundidad(flotante);
                archivo_in >> car;
                archivo_in >> car;
        //Leer cadena (referencia)
            getline(archivo_in,dato,',');
            getline(archivo_in,dato2,'"');
            dato3 = dato + "," + dato2;
            A.modificaTuReferencia(dato3);
            archivo_in >> car;
        //Secuencia para leer fecha
            archivo_in >> entero;
            fx.modificaTuA(entero);
                archivo_in >> car;
            archivo_in >> entero;
            fx.modificaTuM(entero);
                archivo_in >> car;
            archivo_in >> entero;
            fx.modificaTuD(entero);
                archivo_in >> car;
            A.modificaTuFechaUTC(fx);
        //Secuencia para leer hora
            archivo_in >> entero;
            hx.modificaTuH(entero);
                archivo_in >> car;
            archivo_in >> entero;
            hx.modificaTuM(entero);
                archivo_in >> car;
            archivo_in >> entero;
            hx.modificaTuS(entero);
                archivo_in >> car;
            A.modificaTuHoraUTC(hx);
        //Secuencia para leer estatus
            archivo_in >> cadena;
            A.modificaTuEstatus(cadena);
            archivo_in >> car;




            archivo_in >> entero;
            fx.modificaTuA(entero);
                archivo_in >> car;
            archivo_in >> entero;
            fx.modificaTuM(entero);
                archivo_in >> car;
            archivo_in >> entero;
            fx.modificaTuD(entero);
                archivo_in >> car;
            B.modificaTuFecha(fx);
        //Secuencia para leer hora
            archivo_in >> entero;
            hx.modificaTuH(entero);
                archivo_in >> car;
            archivo_in >> entero;
            hx.modificaTuM(entero);
                archivo_in >> car;
            archivo_in >> entero;
            hx.modificaTuS(entero);
                archivo_in >> car;
            B.modificaTuHora(hx);
        //Secuencia para otros datos
            archivo_in >> flotante;
            B.modificaTuMagnitud(flotante);
                archivo_in >> car;
            archivo_in >> flotante;
            B.modificaTuLatitud(flotante);
                archivo_in >> car;
            archivo_in >> flotante;
            B.modificaTuLongitud(flotante);
                archivo_in >> car;
            archivo_in >> flotante;
            B.modificaTuProfundidad(flotante);
                archivo_in >> car;
                archivo_in >> car;
        //Leer cadena (referencia)
            getline(archivo_in,dato,',');
            getline(archivo_in,dato2,'"');
            dato3 = dato + "," + dato2;
            B.modificaTuReferencia(dato3);
            archivo_in >> car;
        //Secuencia para leer fecha
            archivo_in >> entero;
            fx.modificaTuA(entero);
                archivo_in >> car;
            archivo_in >> entero;
            fx.modificaTuM(entero);
                archivo_in >> car;
            archivo_in >> entero;
            fx.modificaTuD(entero);
                archivo_in >> car;
            B.modificaTuFechaUTC(fx);
        //Secuencia para leer hora
            archivo_in >> entero;
            hx.modificaTuH(entero);
                archivo_in >> car;
            archivo_in >> entero;
            hx.modificaTuM(entero);
                archivo_in >> car;
            archivo_in >> entero;
            hx.modificaTuS(entero);
                archivo_in >> car;
            B.modificaTuHoraUTC(hx);
        //Secuencia para leer estatus
            archivo_in >> cadena;
            B.modificaTuEstatus(cadena);
            archivo_in >> car;
            */


    return 0;
}

