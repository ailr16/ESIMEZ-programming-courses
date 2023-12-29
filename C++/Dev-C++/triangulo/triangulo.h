#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo
{
	private:
		double lado, area, perimetro;
		void calculaArea(void);
		void calculaPerimetro(void);
		void compruebaLado(void);
		
	public:
		Triangulo(void);
		Triangulo(double l);
		double dameTuArea(void);
		double dameTuPerimetro(void);
		double dameTuLado(void);
		void modificaTuLado(double lado);
		void muestraTusDatos(void);
		void pideleAlUsuarioTusDatos(void);
};

#endif

