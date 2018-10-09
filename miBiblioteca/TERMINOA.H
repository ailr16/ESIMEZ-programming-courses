#ifndef TERMINOA_H
#define TERMINOA_H


#include <iostream>
using namespace std;

class TerminoA
{
    private:
        int coeficiente;
        char literal = 'x';
        int exponente;

    public:
        TerminoA(void);
        TerminoA(int c,int e);
        TerminoA(int c, char l,int e);
        int dameTuExponente(void);
        int dameTuCoeficiente(void);
        char dameTuLiteral(void);
        void modificaTuExponente(int e);
        void modificaTuLiteral(char l);
        void modificaTuCoeficiente(int c);
        void muestraTusDatos(void);



};

TerminoA::TerminoA(void){
    coeficiente = 0;
    exponente = 0;
}

TerminoA::TerminoA(int c,int e){
    this->coeficiente = c;
    this->literal = 'x';
    this->exponente = e;
}

TerminoA::TerminoA(int c, char l,int e){
    this->coeficiente = c;
    this->literal = l;
    this->exponente = e;
}

int TerminoA::dameTuExponente(void){
    return exponente;
}

int TerminoA::dameTuCoeficiente(void){
    return coeficiente;
}
char TerminoA::dameTuLiteral(void){
    return literal;
}

void TerminoA::modificaTuExponente(int e){
    this->exponente = e;
}

void TerminoA::modificaTuCoeficiente(int c){
    this->coeficiente = c;
}

void TerminoA::modificaTuLiteral(char l){
    this->literal = l;
}

void TerminoA::muestraTusDatos(void){
    if(coeficiente == 0)
        cout << "0" ;
    else if(exponente == 0)
        cout << coeficiente;
    else if(coeficiente == 1)
        cout << literal << "^" << exponente;
    else
        cout << coeficiente << literal << "^" << exponente;
}

ostream& operator<<(ostream &Izq,TerminoA C){
	C.muestraTusDatos();
	return Izq;
}

bool operator<(TerminoA Izq, TerminoA Der){
    if(Izq.dameTuExponente() < Der.dameTuExponente())
        return true;
    else
        return false;
}

bool operator<=(TerminoA Izq, TerminoA Der){
    if(Izq.dameTuExponente() <= Der.dameTuExponente())
        return true;
    else
        return false;
}

bool operator>(TerminoA Izq, TerminoA Der){
    if(Izq.dameTuExponente() > Der.dameTuExponente())
        return true;
    else
        return false;
}

bool operator==(TerminoA Izq, TerminoA Der){
    if(Izq.dameTuExponente() == Der.dameTuExponente())
        return true;
    else
        return false;
}

#endif // TERMINOA_H
