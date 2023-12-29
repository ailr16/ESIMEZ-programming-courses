#include "Abuela.h"

Abuela::Abuela(void){
    a = 0;
}
Abuela::Abuela(int a){
    this->a = a;
}
void Abuela::muestraTusDatos(void){
    cout << "a = " << a << endl;
}
void Abuela::pideleAlUsuarioTusDatos(void){
    cout << "Dame mi a: ";
    cin >> a;
}
int Abuela::dameTuA(void){
    return a;
}
void Abuela::modificaTuA(int a){
    this->a = a;
}
