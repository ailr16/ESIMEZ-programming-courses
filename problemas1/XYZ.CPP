/*
 Lozano Ramirez Angel Ivan    1CM3   PE18041900
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(void)
  {
   float a,b,x,y,z;
   int c,d;
   clrscr();

   a=3;
   b=8;
   c=3;
   d=2;

   x=cos(sin(c/d-1.))/b*c/cos(d/c);
   y=a/b*c/d*a/b;
   z=exp(cos(sin(1.-c/d)/a)/b/c);

   printf("\n\n\n\t\t Datos:");
   printf("\n\n\t A = %.1f \t B = %f.1",a,b);
   printf("\n\n\t C = %d \t D = %d",c,d);
   printf("\n\n\t\t Resultados:");
   printf("\n\n\t X = %f",x);
   printf("\n\n\t Y = %f",y);
   printf("\n\n\t Z = %f",z);
   getch();
  }