#ifndef TERMINOA_H
#define TERMINOA_H


#include <iostream>
using namespace std;

class TerminoA
{
    private:
        double coeficiente;
        char literal = 'x';
        int exponente;

    public:
        TerminoA(void);
        TerminoA(double c,int e);
        TerminoA(double c, char l,int e);
        int dameTuExponente(void);
        double dameTuCoeficiente(void);
        char dameTuLiteral(void);
        void modificaTuExponente(int e);
        void modificaTuLiteral(char l);
        void modificaTuCoeficiente(double c);
        void muestraTusDatos(void);
};

TerminoA::TerminoA(void){
    coeficiente = 0;
    exponente = 0;
    this->literal = 'x';
}

TerminoA::TerminoA(double c,int e){
    this->coeficiente = c;
    this->literal = 'x';
    this->exponente = e;
}

TerminoA::TerminoA(double c, char l,int e){
    this->coeficiente = c;
    this->literal = l;
    this->exponente = e;
}

int TerminoA::dameTuExponente(void){
    return exponente;
}

double TerminoA::dameTuCoeficiente(void){
    return coeficiente;
}
char TerminoA::dameTuLiteral(void){
    return literal;
}

void TerminoA::modificaTuExponente(int e){
    this->exponente = e;
}

void TerminoA::modificaTuCoeficiente(double c){
    this->coeficiente = c;
}

void TerminoA::modificaTuLiteral(char l){
    this->literal = l;
}

void TerminoA::muestraTusDatos(void){
    if(coeficiente > 0){
        if(exponente == 0)
            cout << "+ " << coeficiente;
        else if(exponente == 1)
            cout << "+ " << coeficiente << literal;
        else if(coeficiente == 1)
            cout << "+ " << literal << "^" << exponente;
        else if(coeficiente == 0)
            cout << "0" ;
        else
            cout << "+ " << coeficiente << literal << "^" << exponente;
    }
    else{
        if(exponente == 0)
            cout << coeficiente;
        else if(exponente == 1)
            cout << coeficiente << literal;
        else if(coeficiente == 1)
            cout << literal << "^" << exponente;
        else if(coeficiente == 0)
            cout << "0" ;
        else
            cout << coeficiente << literal << "^" << exponente;
    }

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

TerminoA operator*(TerminoA a, double b){
    TerminoA r;
    r.modificaTuCoeficiente(a.dameTuCoeficiente()*b);
    r.modificaTuLiteral(a.dameTuLiteral());
    r.modificaTuExponente(a.dameTuExponente());
    return r;
}
TerminoA operator*(double b, TerminoA a){
    TerminoA r;
    r.modificaTuCoeficiente(a.dameTuCoeficiente()*b);
    r.modificaTuLiteral(a.dameTuLiteral());
    r.modificaTuExponente(a.dameTuExponente());
    return r;
}
TerminoA operator*(TerminoA a, TerminoA b){
    TerminoA r;
    if(a.dameTuLiteral() == b.dameTuLiteral()){
        r.modificaTuCoeficiente(a.dameTuCoeficiente() * b.dameTuCoeficiente());
        r.modificaTuLiteral(a.dameTuLiteral());
        r.modificaTuExponente(a.dameTuExponente() + b.dameTuExponente());
    }
    else;
    return r;
}
TerminoA operator/(TerminoA a, double b){
    TerminoA r;
    r.modificaTuCoeficiente(a.dameTuCoeficiente()/b);
    r.modificaTuLiteral(a.dameTuLiteral());
    r.modificaTuExponente(a.dameTuExponente());
    return r;
}
TerminoA operator+(TerminoA a, TerminoA b){
    TerminoA r;
    if(a.dameTuLiteral() == b.dameTuLiteral() && a.dameTuExponente() == b.dameTuExponente()){
        r.modificaTuLiteral(a.dameTuLiteral());
        r.modificaTuExponente(a.dameTuExponente());
        r.modificaTuCoeficiente(a.dameTuCoeficiente() + b.dameTuCoeficiente());
    }
    else;
    return r;
}
#endif // TERMINOA_H
