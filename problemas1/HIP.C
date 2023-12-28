/*
 Lozano Ramirez Angel Ivan    1CM3    PE18041900
 Elaborar un programa para calcular la hipotenusa de un triangulo rectangulo
 utilizando funciones de usuario de paso por valor
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

float leer(void);
float hipotenusa(float,float);
void imprimir(float,float,float);

void main(void)
  {
   float a,b,hip;
   clrscr();
   printf("\n\n\tIntroduce cateto adyacente en cm:  ");
   a=leer();
   printf("\n\n\tIntroduce cateto opuesto en cm:  ");
   b=leer();
   hip=hipotenusa(a,b);
   imprimir(a,b,hip);
   getch();
  }

float leer()
  {
   float r;
   scanf("%f",&r);
   return(r);
  }

float hipotenusa(float x,float y)
  {
   float h;
   h=sqrt(x*x+y*y);
   return(h);
  }

void imprimir(float x,float y,float z)
  {
   printf("\n\n\n\n\t\t Cateto opuesto = %.2fcm",y);
   printf("\n\n\n\t\t Cateto adyacente = %.2fcm",x);
   printf("\n\n\n\t\t Hipotenusa = %.2fcm",z);
  }