#include <iostream>
#include <stdio.h>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
    long double x;
    x = pow(2,15);
    cout << x << endl;
    x = pow(2,x) - 1;
    cout << x << endl;

    /*char nombreArchivo[16] = "contar.txt";
    char c;
    int i = 0;
    ifstream archivoIn;

    archivoIn.open(nombreArchivo);
        archivoIn >> c;
        while(c == '0'){
            archivoIn >> c;
            if(c == '0') i++;
        }
    archivoIn.close();

    cout << i;
    double x=1;
    for(int i=0; i<1200; i++){
        x = x/2;
        printf("x = %1.768f\t",x);
        cout << "i = " << i << endl;
    }*/

    return 0;
}
