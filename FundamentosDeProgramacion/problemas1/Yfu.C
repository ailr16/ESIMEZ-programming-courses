/*
 Lozano Ramirez Angel Ivan    1CM3    PE18041900
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

float a,b,c,d,f,y,pi;

void calcf(void);
void calcd(void);
void calca(void);

void main(void)
  {
   clrscr();
   printf("\n\n\n\t\t\t Ingrese el valor de pi:\t");
   scanf("%f",&pi);

   b=4./3*pi;
   c=cos(b);
   calcf();
   calcd();
   calca();
   y=(a+b-c)/(d+f);

   printf("\n\n\n\t\t\t Resultados:");
   printf("\n\n\t\t A = %f \n\n\n\t\t B = %f",a,b);
   printf("\n\n\t\t C = %f \n\n\n\t\t D = %f",c,d);
   printf("\n\n\t\t F = %f \n\n\n\t\t Y = %f",f,y);

   getch();
  }

void calcf(void)
  {
   f=sin(b);
  }

void calcd(void)
  {
   d=c/f;
  }

void calca(void)
  {
   a=sqrt(d-f);
  }