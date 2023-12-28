/*
 Lozano Ramirez Angel Ivan    1CM3    PE18041900
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
void hipotenusa(float,float);

void main(void)
  {
   float a,b;
   clrscr();
   printf("\n\n\n\t\tIngrese la longitud en cm del cateto opuesto:  ");
   scanf("%f",&a);
   printf("\n\t\tIngrese la longitud en cm del cateto adyacente:  ");
   scanf("%f",&b);
   hipotenusa(a,b);
   printf("\n\n\t\t\t\tDatos:");
   printf("\n\n\t\t A = %f cm \t B = %f cm",a,b);
   getch();
  }
void hipotenusa(float x,float y)
  {
   float h;
   h=sqrt(x*x+y*y);
   printf("\n\n\t\t\t H = %f cm",h);
  }