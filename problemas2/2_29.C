#include <stdio.h>
#include <conio.h>

long double leer(void);
long double factorial(long double);

void main(void)
  {
   long double x,f,f2;
   clrscr();
   printf("Da el valor 1:\t");
   x=leer();
   f=factorial(x);
   f2=factorial(f);
   printf("\nf = %Lf \t\f2 = %Lf",f,f2);
   getch();
  }

long double factorial(long double n)
  {
   long double f=1;
   int i;
   for(i=1;i<=n;i++)
      f=f*i;
   return(f);
  }

long double leer(void)
  {
   long double x;
   scanf("%Lf",&x);
   return(x);
  }