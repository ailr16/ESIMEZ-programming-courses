#include "Hija.h"

Hija::Hija(void){
    h = 0;
}
void Hija::muestraTusDatos(void){
    Abuela::muestraTusDatos();
    cout << "h = " << h << endl;
}
Hija::Hija(int a, float h) : Abuela(a){
    this->h = h;
}
void Hija::pideleAlUsuarioTusDatos(void){
    Abuela::pideleAlUsuarioTusDatos();
    cout << "Dame mi h: ";
    cin >> h;
}
float Hija::dameTuH(void){
    return h;
}
void Hija::modificaTuH(float h){
    this->h = h;
}
