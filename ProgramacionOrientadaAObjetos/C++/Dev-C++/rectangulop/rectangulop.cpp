#include "rectangulop.h" // class's header file
#include <math.h>

RectanguloP::RectanguloP(void){
	
}
RectanguloP::RectanguloP(Punto P, Punto Q){
	this->P = P;
	this->Q = Q;
}
void RectanguloP::muestraTusDatos(void){
	cout << "Punto P: " << endl
		 << P << endl
		 << "Punto Q: " << endl
		 << Q << endl;
}
RectanguloP::RectanguloP(double x1, double y1, double x2, double y2){
	P.modificaTuX(x1);
	P.modificaTuY(y1);
	Q.modificaTuX(x2);
	Q.modificaTuY(y2);
}
void RectanguloP::pideAlUsuarioTusDatos(){
	cout << "Dame P: " << endl;
	cin >> P;
	cout << "Dame Q: " << endl;
	cin >> Q;
}
Punto RectanguloP::dameP(void){
	return P;
}
Punto RectanguloP::dameQ(void){
	return Q;
}
double RectanguloP::calculaArea(void){
	return fabs(Q.dameTuX()-P.dameTuX()) * fabs(Q.dameTuY()-P.dameTuY());
}
double RectanguloP::dameTuArea(void){
	return calculaArea();
}
