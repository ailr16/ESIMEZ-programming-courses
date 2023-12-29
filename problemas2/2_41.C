#include <stdio.h>
#include <conio.h>

float leer(void);

void main(void)
  {
   float a,b,c,d,z;
   clrscr();
   printf("\nDa el valor de a\t");
   a=leer();
   printf("\nDa el valor de b:\t");
   b=leer();
   printf("\nDa el valor de c:\t");
   c=leer();
   printf("\nDa el valor de d:\t");
   d=leer();

   if(d!=1 && c/(d-1)!=1 && b!=1)
     {
      z=(1-a/(b-1))/(1-c/(d-1));
      printf("\na=%f\tb=%f\tc=%f\td=%f",a,b,c,d);
      printf("\nz=%f",z);
     }
   else
     printf("\nNo se puede calcular Z");

   getch();
  }

float leer(void)
  {
   float r;
   scanf("%f",&r);
   return(r);
  }