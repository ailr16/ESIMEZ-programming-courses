/*
 Lozano Ramirez Angel Ivan    1CM3    PE18041900
 Elaborar un programa para calcular Q.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(void)
  {
   float pi,gamma,d,beta,alfa,z,y,x,Q;
   clrscr();

   printf("\n\n\n\t\t\t Introduzca el valor de pi:\n\n\t\t\t\t");
   scanf("%f",&pi);

   gamma=3/pi;
   d=gamma-2*pi;
   beta=d+gamma;
   alfa=gamma+beta;
   z=exp(cos(beta));
   y=tan(beta);
   x=exp(alfa);
   Q=(sin(x)+cos(x+y)/(y+z))/(y-x);

   printf("\n\n\n\t\t\t\t Resultados:");
   printf("\n\n\t\t Alfa = %f \n\n\t\t Beta = %f",alfa,beta);
   printf("\n\n\t\t Gamma = %f \n\n\t\t D = %f",gamma,d);
   printf("\n\n\t\t Z = %f \n\n\t\t Y = %f",z,y);
   printf("\n\n\t\t X = %f \n\n\t\t Q = %f",x,Q);
   getch();
  }