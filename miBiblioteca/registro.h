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
    Fecha x;
    Hora y;

    ifstream archivo("SSNMX_catalogo_20181001_20181026.csv");

        stringstream datosRegistro;
        string datos, dato, dato2, dato3;

        getline(archivo, datos);
        datosRegistro.str(datos);

        getline(datosRegistro,dato,'-');
        x.modificaTuA(atoi(dato.c_str()));
        getline(datosRegistro,dato,'-');
        x.modificaTuM(atoi(dato.c_str()));
        getline(datosRegistro,dato,',');
        x.modificaTuD(atoi(dato.c_str()));
        modificaTuFecha(x);
        getline(datosRegistro,dato,':');
        y.modificaTuH(atoi(dato.c_str()));
        getline(datosRegistro,dato,':');
        y.modificaTuM(atoi(dato.c_str()));
        getline(datosRegistro,dato,',');
        y.modificaTuS(atoi(dato.c_str()));
        modificaTuHora(y);
        getline(datosRegistro,dato,',');
        modificaTuMagnitud(atof(dato.c_str()));
        getline(datosRegistro,dato,',');
        modificaTuLatitud(atof(dato.c_str()));
        getline(datosRegistro,dato,',');
        modificaTuLongitud(atof(dato.c_str()));
        getline(datosRegistro,dato,',');
        modificaTuProfundidad(atof(dato.c_str()));
        getline(datosRegistro,dato,',');
        getline(datosRegistro,dato2,',');
        dato3 = dato+","+dato2;
        modificaTuReferencia(dato3);
        getline(datosRegistro,dato,'-');
        x.modificaTuA(atof(dato.c_str()));
        getline(datosRegistro,dato,'-');
        x.modificaTuM(atof(dato.c_str()));
        getline(datosRegistro,dato,',');
        x.modificaTuD(atof(dato.c_str()));
        modificaTuFechaUTC(x);
        getline(datosRegistro,dato,':');
        y.modificaTuH(atof(dato.c_str()));
        getline(datosRegistro,dato,':');
        y.modificaTuM(atof(dato.c_str()));
        getline(datosRegistro,dato,',');
        y.modificaTuS(atof(dato.c_str()));
        modificaTuHoraUTC(y);
        getline(datosRegistro,dato,',');
        modificaTuEstatus(dato);

    archivo.close();
}
#endif // REGISTRO_H
