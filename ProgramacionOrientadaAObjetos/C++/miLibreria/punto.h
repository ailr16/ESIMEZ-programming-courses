#include <iostream>

#ifndef PUNTO_H
#define PUNTO_H

class punto
{
	private:
		double x,y;
		
	public:
		~punto(void){
		};
		
		punto(void){
			x=0;
			y=0;
		};
		
		punto(double a, double b){
			x = a;
			y = b;
		};
		
		void pideAlUsuarioTusDatos(void){
			cout << "Da x:";
			cin >> x;
			cout << "Da y:";
			cin >> y;
		};
		
		void muestraTusDatos(void){
			cout << "X = " << x << "," << "Y =" << y;
		};
		
		double dameTuX(void){
			return x;
		};
		
		double dameTuY(void){
			return y;
		};
		
		void modificaTuX(double x){
			this -> x = x;
		};
		
		void modificaTuY(double y){
			this -> y = y;
		};
};

#endif // PUNTO_H

