#include <stdio.h>
#include <conio.h>
#include <math.h>

float calcf(float);
float calcg(float);
void imprimir(float,float,float);

void main(void)
  {
   float x,fx,gf;
   clrscr();
   printf("\n\t\tIntroduzca el valor de x:\t");
   scanf("%f",&x);
   fx=calcf(x);
   gf=calcg(fx);
   imprimir(x,fx,gf);
  }

float calcf(float x)
  {
   float fx;
   if(x<0)
     fx=pow(x,3)+x-1;
   else
     fx=x+sin(x*x);
   return(fx);
  }

float calcg(float fx)
  {
   float gf;
   if(fx<=-3)
     gf=pow(fx,5)-cos(fx)*cos(fx);
   else
   {
     if(fx>3)
       gf=exp(fx*fx)+1;
     else
     printf("\t\t x no esta dentro de intervalo");
   }
   return(gf);
  }

void imprimir(float x,float fx,float gf)
  {
   printf("\t\tPara x=%.3f , f(x)=%f , g(f)=%f",x,fx,gf);
   getch();
  }