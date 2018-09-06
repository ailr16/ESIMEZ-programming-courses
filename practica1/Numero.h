#ifndef NUMERO_H
#define NUMERO_H

class Numero
{
	private:
		int a,b=1,c[31],cont=0;
		void verificaDatos(void);
		void calculaBinario(void);
		void imprimeBinario(void);
		
	public:
		Numero(void);
		Numero(int a);
		void muestraTusDatos(void);
		void pideleAlUsuarioTusDatos(void);
};

#endif
