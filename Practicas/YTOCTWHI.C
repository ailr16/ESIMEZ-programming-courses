#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <e:\include\portada.H>

float calcy(float);
void imprimir(float,float);
void funy(void);

void main(void)
  {
   clrscr();
   caratula();
   getch();
   clrscr();
   funy();
   getch();
  }

void imprimir(float t,float y)
  {
   printf("\n\t\t\t %.2f \t %f \n",t,y);
  }

void funy(void)
  {
   float y,t;
   t=0.1;
   printf("\n\n\t\t\t  t \t   y(t) \n\n");
   while(t<=1.2)
     {
      y=calcy(t);
      imprimir(t,y);
      t=t+0.1;
     }
  }

float calcy(float t)
  {
   float y;
   y=(exp(-t)+exp(t))/2;
   return(y);
  }