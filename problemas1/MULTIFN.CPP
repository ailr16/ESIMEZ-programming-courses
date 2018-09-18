/*
 Lozano Ramirez Angel Ivan   1CM3   PE18041900
 Elaborar un programa para calcular la multifuncion g(t),para un valor
 propuesto de t cualesquiera. Utilizar funciones de paso por valor.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

float leer(void);
float calcg(float);
void imprimir(float,float);

void main(void)
  {
   float t,g;
   clrscr();
   printf("Introduce el valor de t:  ");
   t=leer();
   g=calcg(t);
   imprimir(t,g);
   getch();
  }

float leer(void)
  {
   float R;
   scanf("%f",&R);
   return(R);
  }

float calcg(float t)
  {
   float gt;
   if(t<=-5) gt=t*t-t-1;
   else
     {
      if(t<=0) gt=exp(2*t);
      else gt=cos(t*t);
     }
   return(gt);
  }

void imprimir(float t,float g)
  {
   printf("\n\n\n \t\t Con t = %f, se obtuvo g(t) = %f",t,g);
  }
