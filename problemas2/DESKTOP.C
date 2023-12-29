#include <stdio.h>
#include <conio.h>
#include <math.h>

void tabla(void);
float calcy(float);
void imprimir(float,float);

void main(void)
  {
   clrscr();
   tabla();
   getch();
  }

float calcy(float x)
  {
   float y;
   y=exp(sin(x));
   return(y);
  }

void imprimir(float x,float y)
  {
   printf("\t\t\t%.0f \t %f \n\n",x,y);
  }

void tabla(void)
  {
   float x,y;
   x=-5;
   printf("\n\n\t\t\t X \t Y\n\n");
   do
     {
     y=calcy(x);
     imprimir(x,y);
     x++;
     }while(x<=10);
  }