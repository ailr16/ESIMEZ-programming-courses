#include "Nieta.h"

Nieta::Nieta(void){
}
Nieta::Nieta(int a, float h, string N) : Hija(a,h){
    this->N = N;
}
void Nieta::muestraTusDatos(void){
    Hija::muestraTusDatos();
    cout << "N = " << N << endl;
}
string Nieta::dameTuN(void){
    return N;
}
void Nieta::modificaTuN(string N){
    this->N = N;
}
void Nieta::pideleAlUsuarioTusDatos(void){
    Hija::pideleAlUsuarioTusDatos();
    cout << "Dame mi n: ";
    cin >> N;
}
