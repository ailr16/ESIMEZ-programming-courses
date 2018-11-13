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
    int i, x;
    float media;
    float suma = 0;

    char nombrearchivo[MAXLARGO] = "numeros.txt";
    ofstream archivo_out;
    archivo_out.open(nombrearchivo);
    if(archivo_out.fail())
    {
        cout<<"Error al abrir el archivo";
        exit(1);
    }
    cout<<setiosflags(ios::fixed)
        <<setiosflags(ios::showpoint)
        <<setprecision(4);
    srand(time(NULL));
    for(i=1;i<=100;i++)
    {
        archivo_out<<(rand()) %1000 +1;
        archivo_out<<" ";
    }
    archivo_out.close();

    ifstream archivo_in;
    archivo_in.open(nombrearchivo);
    if(archivo_in.fail())
    {
        cout<<"Error al abrir el archivo";
        exit(1);
    }
    int long desplazamiento, ultimo;
    archivo_in.seekg(0L, ios::beg);
    ultimo=archivo_in.tellg();
    while(!archivo_in.eof())
    {
        archivo_in>>x;
        suma=suma+x;
    }
    media=suma/100;
    archivo_in.close();
    cout<<media;
    return 0;
}
