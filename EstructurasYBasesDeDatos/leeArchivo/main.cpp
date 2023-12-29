#include <iostream>
#include<fstream>
#include<stdlib.h>
#include <iomanip>
#include<time.h>
#include<math.h>
#define MAXLARGO 21
using namespace std;

int main()
{
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
    for(int i=1;i<=8;i++){
        archivo_out << (rand());
        archivo_out << " ";
    }
    archivo_out.close();
    //Cierre del archivo


    //Apertura del archivo
    int long desplazamiento, ultimo;
    int sum = 0, x;
    float prom;
    char c;
    ifstream archivo_in;
    archivo_in.open(nombrearchivo);
    if(archivo_in.fail()){
        cout<<"El archivo no se abrio con exito";
        exit(1);
    }

    archivo_in.seekg(0L, ios::beg);
    ultimo = archivo_in.tellg();

    prom = sum/8.0;

    cout << "sum1= " << sum << endl;
    cout << "Promedio= " << prom << endl;
    archivo_in.close();
    //Cierre del archivo

    return 0;
}
