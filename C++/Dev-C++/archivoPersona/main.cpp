#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include "Persona.h"
using namespace std;
int main(void){
    Persona J("Juan","Perez","Lopez","M",1,2,1999,5,16,57,1.8);
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

    getline(AEnt,datosDeArchivo);//Se sacan TODOS los datos de UNA Persona
    datosPersona.str(datosDeArchivo);//Se guardan en un objeto flujo desde un string (stringstream)

    //Se saca una cadena desde el inicio hasta encontrar una coma, y se asigna a un objeto
    getline(datosPersona,dato,',');
    JJ.modificaTuAPaterno(dato);
    //Se saca una cadena desde despues de la coma hasta encontrar una siguiente coma, y se asigna al objeto
    getline(datosPersona,dato,',');
    JJ.modificaTuAMaterno(dato);
    //Se saca una cadena desde despues de la coma hasta encontrar una siguiente coma, y se asigna al objeto
    getline(datosPersona,dato,',');
    JJ.modificaTuNombre(dato);
    //Se saca una cadena desde despues de la coma hasta encontrar una siguiente coma, y se asigna al objeto
    getline(datosPersona,dato,',');
    JJ.modificaTuGenero(dato);
    //Se saca una cadena desde despues de la coma hasta encontrar una siguiente coma,
    //Se convierte a vector de chars, se convierte a int, y se asigna al objeto
    getline(datosPersona,dato,',');
    JJ.modificaTuDia(atoi(dato.c_str()));
    //Se saca una cadena desde despues de la coma hasta encontrar una siguiente coma,
    //Se convierte a vector de chars, se convierte a int, y se asigna al objeto
    getline(datosPersona,dato,',');
    JJ.modificaTuMes(atoi(dato.c_str()));
    //Se saca una cadena desde despues de la coma hasta encontrar una siguiente coma,
    //Se convierte a vector de chars, se convierte a int, y se asigna al objeto
    getline(datosPersona,dato,',');
    JJ.modificaTuAnio(atoi(dato.c_str()));
    //Se saca una cadena desde despues de la coma hasta encontrar una siguiente coma,
    //Se convierte a vector de chars, se convierte a int, y se asigna al objeto
    getline(datosPersona,dato,',');
    JJ.modificaTuHora(atoi(dato.c_str()));
    //Se saca una cadena desde despues de la coma hasta encontrar una siguiente coma,
    //Se convierte a vector de chars, se convierte a int, y se asigna al objeto
    getline(datosPersona,dato,',');
    JJ.modificaTuMinuto(atoi(dato.c_str()));
    //Se saca una cadena desde despues de la coma hasta encontrar una siguiente coma,
    //Se convierte a vector de chars, se convierte a int, y se asigna al objeto
    getline(datosPersona,dato,',');
    JJ.modificaTuSegundo(atoi(dato.c_str()));
    //Se saca una cadena desde despues de la coma hasta encontrar una siguiente coma,
    //Se convierte a vector de chars, se convierte a float, y se asigna al objeto
    getline(datosPersona,dato,',');
    JJ.modificaTuEstatura(atof(dato.c_str()));
    AEnt.close();

    cout<<"JJ final"<<endl;
    JJ.muestraTusDatos();
    return 0;
}















