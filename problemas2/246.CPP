#include <stdio.h>
#include <conio.h>
#include <math.h>

void fun1(float);
void fun2(float);
void fun3(float);
void imprimir(float,float);

void main(void)
  {
   float x,fx;
   clrscr();
   printf("\n\n\t\tIntroduzca un valor de x: \t");
   scanf("%f",&x);
   if(x<=-3)
      fun1(x);
   else
     {
     if(x>=-2 && x<=5)
	fun2(x);
     else
       {
	if(x>=6)
	   fun3(x);
       }
   }

  }

void fun1(float x)
  {
   float fx;
   if(x!=-4)
   {
     fx=exp(x)/(x+4);
     imprimir(x,fx);
   }
   else
   {
     printf("\n\t\tNo se puede calcular f(x)");
     getch();
   }
  }

void fun2(float x)
  {
   float fx;
   if(x!=3)
   {
     fx=(x*x-2)/(x-3);
     imprimir(x,fx);
   }
   else
   {
     printf("\n\t\tNo se puede calcular f(x)");
     getch();
   }
  }

void fun3(float x)
  {
   float fx;
   if(x!=8)
   {
     fx=sin(x)/(x-8);
     imprimir(x,fx);
   }
   else
   {
     printf("\n\t\tNo se puede calcular f(x)");
     getch();
   }
  }

void imprimir(float x,float fx)
  {
   printf("\n\t\tCon x=%.3f f(x)=%f",x,fx);
   getch();
  }