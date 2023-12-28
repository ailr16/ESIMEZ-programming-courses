#include <stdio.h>
#include <conio.h>
#include <math.h>

float leer(void);
float calcy(float);
void funy(void);
void imprimir(float,float);

void main(void)
  {
   clrscr();
   funy();
   getch();
  }

float leer(void)
  {
   float x;
   scanf("%f",&x);
   return(x);
  }

float calcy(float x)
  {
   float y;
   y=exp(x)/(x-3);
   return(y);
  }

void imprimir(float x,float y)
  {
   printf("\n\n\n \t\tX = %f \t, Y=%f",x,y);
  }

void funy(void)
  {
   float x,y;
   printf("\n\n\t\t\t Introduce x:   ");
   x=leer();

   if(x!=3)
     {
      y=calcy(x);
      imprimir(x,y);
     }
   else printf("\n\n\t\tCon X = %f Y no se puede calcular");
  }