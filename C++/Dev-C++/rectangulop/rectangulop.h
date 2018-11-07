#ifndef RECTANGULOP_H
#define RECTANGULOP_H
#include <iostream>

#include "Punto.h"

using namespace std;

class RectanguloP
{
	private:
		Punto P, Q;
	public:
		RectanguloP(void);
		RectanguloP(Punto P, Punto Q);
		RectanguloP(double x1, double y1, double x2, double y2);
		void muestraTusDatos(void);
		void pideAlUsuarioTusDatos();
		Punto dameP(void);
		Punto dameQ(void);
		double calculaArea(void);
		double dameTuArea(void);
		double dameTuArea(void);
};

#endif // RECTANGULOP_H

