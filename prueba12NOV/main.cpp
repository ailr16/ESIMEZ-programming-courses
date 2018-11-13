#include <iostream>
#include<fstream>
#include<stdlib.h>
#include <iomanip>
#include<time.h>
#include<math.h>
#define MAXLARGO 21

#define TOTALNUM 100        //Total de numeros que genera
using namespace std;

int main()
{
    int i, x;
    float prom, sum = 0;
    double sum2 = 0, des;

    char nombrearchivo[MAXLARGO] = "numeros.txt";

    //Creacion del archivo
    ofstream archivo_out;
    archivo_out.open(nombrearchivo);
    if(archivo_out.fail()){
        cout << "El archivo no se abrio con exito";
        exit(1);
    }
    cout << setiosflags(ios::fixed)
         << setiosflags(ios::showpoint)
         << setprecision(4);
    srand(time(NULL));
    for(i=1;i<=6;i++){
        archivo_out << (rand());
        archivo_out << " ";
    }
    archivo_out.close();
    //Cierre del archivo

    //int long desplazamiento, ultimo;
    ifstream archivo_in;
    archivo_in.open(nombrearchivo);
    if(archivo_in.fail()){
        cout<<"El archivo no se abrio con exito";
        exit(1);
    }

    archivo_in.seekg(0L, ios::beg);
    //ultimo = archivo_in.tellg();

    /*  Primer recorrido del archivo
        Obtiene media aritmetica        */
    while(!archivo_in.eof()){
        archivo_in >> x;
        sum = sum + x;
    }
    sum = sum - x;                  //Restar el numero entero que agrega al leer al archivo
    prom=sum/6.0;
    archivo_in.close();

    archivo_in.open(nombrearchivo);
    if(archivo_in.fail()){
        cout<<"El archivo no se abrio con exito";
        exit(1);
    }
    archivo_in.seekg(0L, ios::beg);
    /*  Segundo recorrido del archivo   */
    while(!archivo_in.eof()){
        archivo_in >> x;
        sum2 = sum2 + pow(((x-prom)),2);
    }
    sum2 = sum2 - pow(((x-prom)),2);                  //Restar el numero entero que agrega al leer al archivo
    des = sqrt(sum2/6.0);

    cout << "Promedio= " << prom << endl;
    cout<<"La desviacion estandar es: "<<des<<endl;
    archivo_in.close();
    cin.ignore();

    return 0;
}
