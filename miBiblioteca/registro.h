#ifndef REGISTRO_H
#define REGISTRO_H

#include <stdlib.h>
#include <fstream>
#include <sstream>

#include "Hora.h"
#include "Fecha.h"


class Registro
{
    private:
        Fecha f,
              fUTC;
        Hora h,
             hUTC;
        float magnitud,
              latitud,
              longitud,
              profundidad;
        string referenciaDeLocalizacion,
               estatus;


    public:
        Registro(void);
        void muestraTusDatos(void);
        void pideleAlUsuarioTusDatos(void);
        void modificaTuMagnitud(float m);
        void modificaTuLatitud(float l);
        void modificaTuLongitud(float l);
        void modificaTuProfundidad(float p);
        void modificaTuHora(Hora h1);
        void modificaTuHoraUTC(Hora h1);
        void modificaTuFecha(Fecha f1);
        void modificaTuFechaUTC(Fecha f1);
        void modificaTuReferencia(string r);
        void modificaTuEstatus(string e);
        void leeDatos(void);
};

Registro::Registro(void){
    magnitud = 0;
    latitud = 0;
    longitud = 0;
    profundidad = 0;
    referenciaDeLocalizacion = "N/A";
    estatus = "N/A";
}
void Registro::muestraTusDatos(void){
    cout << "Fecha: " << f << endl
         << "Hora: " << h << endl
         << "Magnitud: " << magnitud << endl
         << "Latitud: " << latitud << endl
         << "Longitud: " << longitud << endl
         << "Profundidad: " << profundidad << endl
         << "Referencia de localizacion: " << referenciaDeLocalizacion << endl
         << "Fecha UTC: " << fUTC << endl
         << "Hora UTC: " << hUTC << endl
         << "Estatus: " << estatus << endl << endl;
}
void Registro::pideleAlUsuarioTusDatos(void){
    cout << "Dame mi fecha: ";
    cin >> f;
    cout << "Dame mi hora: ";
    cin >> h;
    cout << "Dame mi magnitud: ";
    cin >> magnitud;
    cout << "Dame mi latitud: ";
    cin >> latitud;
    cout << "Dame mi longitud: ";
    cin >> longitud;
    cout << "Dame mi profundidad: ";
    cin >> profundidad;
    cout << "Dame mi referencia de localizacion: ";
    cin >> referenciaDeLocalizacion;
    cout << "Dame mi fecha UTC: ";
    cin >> fUTC;
    cout << "Dame mi hora UTC: ";
    cin >> hUTC;
    cout << "Dame mi estatus: ";
    cin >> estatus;
}
void Registro::modificaTuMagnitud(float m){
    magnitud = m;
}
void Registro::modificaTuLatitud(float l){
    latitud = l;
}
void Registro::modificaTuLongitud(float l){
    longitud = l;
}
void Registro::modificaTuProfundidad(float p){
    profundidad = p;
}
void Registro::modificaTuHora(Hora h1){
    this->h = h1;
}
void Registro::modificaTuHoraUTC(Hora h1){
    this->hUTC = h1;
}
void Registro::modificaTuFecha(Fecha f1){
    this->f = f1;
}
void Registro::modificaTuFechaUTC(Fecha f1){
    this->fUTC = f1;
}
void Registro::modificaTuReferencia(string r){
    this->referenciaDeLocalizacion = r;
}
void Registro::modificaTuEstatus(string e){
    this->estatus = e;
}
void Registro::leeDatos(void){
    Fecha fx;
    Hora hx;
    int entero;
    char car;
    float flotante;
    string cadena;
    ifstream archivo_in;

        stringstream datosRegistro;
        string datos, dato, dato2, dato3;

        archivo_in.open("SSNMX_catalogo_20181001_20181026.csv");
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
            f = fx;
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
            h = hx;
        //Secuencia para otros datos
            archivo_in >> flotante;
            magnitud = flotante;
                archivo_in >> car;
            archivo_in >> flotante;
            latitud = flotante;
                archivo_in >> car;
            archivo_in >> flotante;
            longitud = flotante;
                archivo_in >> car;
            archivo_in >> flotante;
            profundidad = flotante;
                archivo_in >> car;
                archivo_in >> car;
        //Leer cadena (referencia)
            //getline(archivo_in,dato,',');
            getline(archivo_in,dato2,'"');
            //referenciaDeLocalizacion = dato + "," + dato2;
            referenciaDeLocalizacion = dato2;
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
            fUTC = fx;
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
            hUTC = hx;
        //Secuencia para leer estatus
            archivo_in >> cadena;
            estatus = cadena;
                archivo_in >> car;

    archivo_in.close();
}
#endif // REGISTRO_H
