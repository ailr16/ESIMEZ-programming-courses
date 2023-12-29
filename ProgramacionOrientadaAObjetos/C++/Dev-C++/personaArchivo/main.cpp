#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include "F:/C++/miLibreria/miBiblioteca/Persona.cpp"
#include "F:/C++/miLibreria/miBiblioteca/Evento.cpp"
#include "F:/C++/miLibreria/miBiblioteca/Fecha.cpp"
#include "F:/C++/miLibreria/miBiblioteca/Hora.cpp"

using namespace std;
int main(void){
    Persona J("Alan","Flores","Aguirre","M",16,1,1999,9,57,32,1.7);
    Persona JJ;
    ofstream ASal("datosP.txt");

    cout<<"JJ inicial"<<endl;
    JJ.muestraTusDatos();
    ASal<<J.dameTuAPaterno()<<","
        <<J.dameTuAMaterno()<<","
        <<J.dameTuNombre()<<","
        <<J.dameTuGenero()<<","
        <<J.dameTuDia()<<","
        <<J.dameTuMes()<<","
        <<J.dameTuAnio()<<","
        <<J.dameTuHora()<<","
        <<J.dameTuMinuto()<<","
        <<J.dameTuSegundo()<<","
        <<J.dameTuEstatura()<<endl;
    ASal.close();

    system("pause");

    ifstream AEnt("datosP.txt");
    stringstream datosPersona;
    string datosDeArchivo, dato;int i,vInt;float vFloat;

    getline(AEnt,datosDeArchivo);
    datosPersona.str(datosDeArchivo);
    
    getline(datosPersona,dato,',');
    JJ.modificaTuAPaterno(dato);
    getline(datosPersona,dato,',');
    JJ.modificaTuAMaterno(dato);
    getline(datosPersona,dato,',');
    JJ.modificaTuNombre(dato);
    getline(datosPersona,dato,',');
    JJ.modificaTuGenero(dato);
    getline(datosPersona,dato,',');
    JJ.modificaTuDia(atoi(dato.c_str()));
    getline(datosPersona,dato,',');
    JJ.modificaTuMes(atoi(dato.c_str()));
    getline(datosPersona,dato,',');
    JJ.modificaTuAnio(atoi(dato.c_str()));
    getline(datosPersona,dato,',');
    JJ.modificaTuHora(atoi(dato.c_str()));
    getline(datosPersona,dato,',');
    JJ.modificaTuMinuto(atoi(dato.c_str()));
    getline(datosPersona,dato,',');
    JJ.modificaTuSegundo(atoi(dato.c_str()));
    getline(datosPersona,dato,',');
    JJ.modificaTuEstatura(atof(dato.c_str()));
    AEnt.close();

    cout<<"JJ final"<<endl;
    JJ.muestraTusDatos();
    return 0;
}
















