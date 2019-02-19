#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int e;                  //
    float f;
    char c;
    double d;
    long int eL;            //
    //long float fL;        *No existe
    long double dL;
    unsigned int eU;        //
    short int eS;           //

    //Para int
    int i = 0;
    e = 1;
    while(e >= 0){
        ++i;
        e = pow(2.0, i) - 1;
    }
    e = pow(2.0, i-1) - 1;
    cout << "Valor maximo int = " << e << " = (2^" << i-1 << ") - 1" << endl;

    //Para long int
    i = 0;
    eL = 1;
    while(eL > 0){
        ++i;
        eL = pow(2.0, i) - 1;
    }
    eL = pow(2.0, i-1) - 1;
    cout << "Valor maximo long int = " << eL << " = (2^" << i-1 << ") - 1" << endl;

    //Para unsigned int
    i = 0;
    eU = 1;
    while(eU > 0){
        ++i;
        eU = pow(2.0, i) - 1;
    }
    eU = pow(2.0, i-1) - 1;
    cout << "Valor maximo long int = " << eU << " = (2^" << i-1 << ") - 1" << endl;

    //Para short int
    i = 0;
    eS = 1;
    while(eS > 0){
        ++i;
        eS = pow(2.0, i) - 1;
    }
    eS = pow(2.0, i-1) - 1;
    cout << "Valor maximo short int = " << eS << " = (2^" << i-1 << ") - 1" << endl;
    return 0;
}
