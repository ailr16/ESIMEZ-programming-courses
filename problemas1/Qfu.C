/*
 Lozano Ramirez Angel Ivan   1CM3   PE18041900
 Elaborar un programa para calcular Q utilizando una funcion de usuario
 para cada expresion
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

void calcz(void);
void calcy(void);
void calcx(void);

float beta,alpha,x,y,z;

void main(void)
  {
   float pi,gamma,delta,q;
   clrscr();
   printf("\n\n\n\t\t\t Ingrese el valor de pi:\t");
   scanf("%f",&pi);
   gamma=3/pi;
   delta=gamma-2*pi;
   beta=delta+gamma;
   alpha=gamma+beta;
   calcz();
   calcx();
   calcy();
   q=(sin(x)+cos(x+y)/(y+z))/(y-x);
   printf("\n\n\t\t\t Aplha =%f \n\n\t\t\t Beta = %f",alpha,beta);
   printf("\n\n\t\t\t Gamma = %f \n\n\t\t\t Delta = %f",gamma,delta);

   printf("\n\n\t\t\t X = %f \n\n\t\t\t Y = %f",x,y);
   printf("\n\n\t\t\t Z = %f \n\n\t\t\t Q = %f",z,q);
   getch();
  }

void calcz(void)
  {
   z=exp(cos(beta));
  }

void calcy(void)
  {
   y=tan(beta);
  }

void calcx(void)
  {
   x=exp(alpha);
  }