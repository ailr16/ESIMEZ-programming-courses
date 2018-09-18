#ifndef RECTANGULOT_H
#define RECTANGULOT_H

#include<iostream>
using namespace std;

template<typename T>
class RectanguloT
{
    private:
        T base, altura;
        void verificaDatos(void);

    public:
        RectanguloT<T>(void);
        void muestraTusDatos(void);
        void pideleAlUsuarioTusDatos(void);
        void modificaTuBase(T base);
        T dameTuBase(void);
};


template<typename T>
RectanguloT<T>::RectanguloT(void){
    base = 0;
    altura = 0;
}
template<typename T>
void RectanguloT<T>::muestraTusDatos(void){
    cout << "Base = " << base << endl
         << "Altura = " << altura << endl;
}
template<typename T>
void RectanguloT<T>::pideleAlUsuarioTusDatos(void){
    cout << "Dame mi base: ";
    cin >> base;
    cout << "Dame mi altura: ";
    cin >> altura;
    verificaDatos();
}
template<typename T>
void RectanguloT<T>::modificaTuBase(T base){
    this->base = base;
    verificaDatos();
}
template<typename T>
T RectanguloT<T>::dameTuBase(void){
    return base;
}
template<typename T>
void RectanguloT<T>::verificaDatos(void){
    if(base <= 0 || altura <= 0){
        base = 0;
        altura = 0;
    }
}
#endif // RECTANGULOT_H
