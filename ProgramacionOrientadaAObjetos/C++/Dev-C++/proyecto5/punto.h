#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>

using namespace std;

class Punto
{
	private:
		double x,y;
	public:
		~Punto(void){
		};
		
		Punto(void){
			x = 0;
			y = 0;
		};
		
		Punto(double a,double b){
			x = a;
			y = b;	
		};
		
		void pideAlUsuarioTusDatos(void){
			cout << "Da X  ";
			cin >> x;
			cout << "Da Y  ";
			cin >> y;
		};
		
		double dameTuX(void){
			return x;
		};
		
		double dameTuY(void){
			return y;
		};
		
		void modficaTuX(double x){
			this -> x = x;
		};
		
		void modificaTuY(double y){
			this -> y = y;
		};
		
		void muestraTusDatos(void){
			cout << "( " << x << " , " << y << " )";
		};
};

#endif // PUNTO_H

