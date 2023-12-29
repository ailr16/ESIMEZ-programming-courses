#include "Rectangulo.h"
#include <iostream>

using namespace std;

Rectangulo::Rectangulo(void){
	base = 0;
	altura = 0;
	this->calculaArea();
	this->calculaPerimetro();
}
void Rectangulo::verificaDatos(void){
	if(base < 0 || altura < 0){
		base = 0;
		altura = 0;
	}
}
void Rectangulo::muestraTusDatos(){
	cout << "Base= " << base << endl
		 << "Altura= " << altura << endl
		 << "Area= " << area << endl
		 << "Perimetro= " << perimetro << endl;
}
void Rectangulo::calculaArea(void){
	area = base * altura;
}
void Rectangulo::calculaPerimetro(void){
	perimetro = 2*(base + altura);
}
void Rectangulo::pideleAlUsuarioTusDatos(void){
	cout << "Dame mi base: ";
	cin >> base;
	cout << "Dame mi altura: ";
	cin >> altura;
	verificaDatos();
	this->calculaArea();
	this->calculaPerimetro();
}
double Rectangulo::dameTuBase(void){
	return base;
}
double Rectangulo::dameTuAltura(void){
	return altura;
}
double Rectangulo::dameTuArea(void){
	return area;
}
double Rectangulo::dameTuPerimetro(void){
	return perimetro;
}
void Rectangulo::modificaTuBase(double base){
	this -> base = base;
	verificaDatos();
	this -> calculaArea();
	this -> calculaPerimetro();
}
void Rectangulo::modificaTuAltura(double altura){
	this -> altura = altura;
	verificaDatos();
	this -> calculaArea();
	this -> calculaPerimetro();
}
