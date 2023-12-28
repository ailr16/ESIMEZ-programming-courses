/*
 Lozano Ramirez Angel Ivan   1CM3   PE18041900    04.10.2017

 Elaborar un programa para calcular la multifuncion f(x), para un solo
 valor de x cualesquiera. El programa debera salvar las singularidades que se
 puedan dar. Utilizar funciones de usuario de paso por valor.
*/

#include <stdio.h>
#include <conio.h>

void funx(void);
float leer(void);
void imprimir(float,float);

void main(void)
  {
   clrscr();
   funx();
   getch();
  }

float leer(void)
  {
   float x;
   scanf("%f",&x);
   return(x);
  }

void imprimir(float x,float fx)
  {
   printf("\n\n\n \t\t\t Para X = %f,   f(x) = %f",x,fx);
  }

void funx(void)
  {
   float x,fx;
   printf("\n\n\n\t\t\tIngrese el valor de X:   ");
   x=leer();
   if(x<0 && x!=-1)
     {
      fx=1/(x+1);
      imprimir(x,fx);
     }
   else
     {
      if(x>1 && x<3 &&x!=2)
	{
	 fx=1/(x-2);
	 imprimir(x,fx);
	}
      else
	{
	 if(x>=4 && x!=5)
	   {
	    fx=1/(x-5);
	    imprimir(x,fx);
	   }
	 else printf("\n\n\n\t\t\t Con X = %f, no se puede calcular f(x)",x);
	}
     }
  }