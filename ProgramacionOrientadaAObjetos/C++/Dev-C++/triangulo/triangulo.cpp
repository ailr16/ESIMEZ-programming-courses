#include "triangulo.h" // class's header file
#include <math.h>
#include <iostream>

using namespace std;

void Triangulo::calculaArea(void){
	area = (sqrt(3)/4)*pow(lado,2);
}
void Triangulo::calculaPerimetro(void){
	perimetro = 3*lado;
}
Triangulo::Triangulo(void){
	lado = 0;
	this -> calculaArea();
	this -> calculaPerimetro();
}
Triangulo::Triangulo(double l){
	lado = l;
	compruebaLado();
	this -> calculaArea();
	this -> calculaPerimetro();
}
void Triangulo::muestraTusDatos(void){
	cout << "Lado= " << lado << endl
		 << "Perimetro= " << perimetro << endl
		 << "Area= " << area << endl;
}
void Triangulo::pideleAlUsuarioTusDatos(void){
	cout << "Dame mi lado: ";
	cin >> lado;
}
double Triangulo::dameTuArea(void){
	return area;
}
double Triangulo::dameTuPerimetro(void){
	return perimetro;
}
double Triangulo::dameTuLado(void){
	return lado;
}
void Triangulo::modificaTuLado(double lado){
	this->lado = lado;
	compruebaLado();
	this -> calculaArea();
	this -> calculaPerimetro();
}
void Triangulo::compruebaLado(void){
	if(lado < 0)
		lado = 0;
}
