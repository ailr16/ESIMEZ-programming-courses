#include <stdio.h>
#include <conio.h>
#include <e:\include\portada.H>
#include <math.h>

void funy(void);
void calcy(float);
void imprimir(float,float);

void main(void)
  {
   clrscr();
   caratula();
   getch();
   clrscr();
   funy();
   getch();
  }

void funy(void)
  {
   float x;
   x=-10;
   printf("\n\n\t\t\t   X \t     Y\n");
   while(x<=10)
   {
    if(x!=0 && x!=1)
      {
       calcy(x);
      }
    else
    printf("\t\t\t No se puede calcular\n\n");

    x++;
   }
  }

void calcy(float x)
 {
  float y;
  y=exp(sin(x)/x)/(x-1);
  imprimir(x,y);
 }

void imprimir(float x, float y)
  {
   printf("\t\t\t %.1f \t %f\n\n",x,y);
  }