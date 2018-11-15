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
    Registro A[20],B;

    Fecha fx;
    Hora hx;
    int entero, cont, numUsuario;
    char car;
    float flotante;
    string cadena;

    cout << "Ingresa el numero de registros a leer: ";
    cin >> numUsuario;

    ifstream archivo_in;

        stringstream datosRegistro;
        string datos, dato, dato2, dato3;

        archivo_in.open("SSNMX_catalogo_20181001_20181026.csv");
        datosRegistro.str(datos);

        for(cont=0;cont<numUsuario;cont++){
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
            A[cont].modificaTuFecha(fx);
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
            A[cont].modificaTuHora(hx);
        //Secuencia para otros datos
            archivo_in >> flotante;
            A[cont].modificaTuMagnitud(flotante);
                archivo_in >> car;
            archivo_in >> flotante;
            A[cont].modificaTuLatitud(flotante);
                archivo_in >> car;
            archivo_in >> flotante;
            A[cont].modificaTuLongitud(flotante);
                archivo_in >> car;
            archivo_in >> flotante;
            A[cont].modificaTuProfundidad(flotante);
                archivo_in >> car;
                archivo_in >> car;
        //Leer cadena (referencia)
            //getline(archivo_in,dato,',');
            getline(archivo_in,dato2,'"');
            //referenciaDeLocalizacion = dato + "," + dato2;
            A[cont].modificaTuReferencia(dato2);
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
            A[cont].modificaTuFechaUTC(fx);
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
            A[cont].modificaTuHoraUTC(hx);
        //Secuencia para leer estatus
            archivo_in >> cadena;
            A[cont].modificaTuEstatus(cadena);
                archivo_in >> car;
        }

    for(cont=0;cont<numUsuario;cont++){
        cout << "Datos de A[" << cont << "]:" << endl;
        A[cont].muestraTusDatos();
        cout << endl;
    }

    archivo_in.close();

    return 0;
}

