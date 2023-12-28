/*
 Lozano Ramirez Angel Ivan     1CM3    PE18041900
 Elaborarun programa para calcular Y, teniendo como dato de entrada el
 valor de pi
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(void)
  {
   float a,b,c,d,f,pi,y;
   clrscr();

   printf("\n\n\n\t\t Ingrese el valor de pi: \n\n\t");
   scanf("%f",&pi);

   b=4./3*pi;
   c=cos(b);
   f=sin(b);
   d=c/f;
   a=sqrt(d-f);
   y=(a+b-c)/(d+f);

   printf("\n\n\t Valor de pi = %f",pi);
   printf("\n\n\n\t\t Resultados: \n");
   printf("\n\n\t A = %f \n\n\t B = %f",a,b);
   printf("\n\n\t C = %f \n\n\t D = %f",c,d);
   printf("\n\n\t F = %f \n\n\t Y = %f",f,y);
   getch();
  }