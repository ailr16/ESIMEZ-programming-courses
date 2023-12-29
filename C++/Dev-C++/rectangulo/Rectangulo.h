#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo
{
	private:
		double base, altura, area, perimetro;
		void verificaDatos(void);
		void calculaArea(void);
		void calculaPerimetro(void);
	public:
		Rectangulo(void);
		void muestraTusDatos();
		void pideleAlUsuarioTusDatos(void);
		double dameTuBase(void);
		double dameTuAltura(void);
		double dameTuArea(void);
		double dameTuPerimetro(void);
		void modificaTuBase(double base);
		void modificaTuAltura(double altura);
};

#endif
