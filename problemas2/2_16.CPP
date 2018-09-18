#include <stdio.h>
#include <conio.h>
#include <math.h>

float factorial(int);
float leer(void);
int entrada(void);

void main(void)
  {
   float x,f;
   double y;
   int n;
   clrscr();
   printf("Da el valor de X:\t");
   x=leer();
   if(x>=5 && x<=15)
     {
       printf("Da el valor de n:\t");
       n=entrada();
       if(n>=1 && n<=5)
	 {
	   f=factorial(n);
	   y=pow(x,f);
	   printf("Y = %e",y);
	 }
       else
	 printf("n no esta dentro del intervalo [1,5]\n");
     }
     else
       printf("x no esta dentro del intervalo [5,15]\n");
   getch();
  }

float leer(void)
  {
   float r;
   scanf("%f",&r);
   return(r);
  }

int entrada(void)
  {
   int e;
   scanf("%d",&e);
   return(e);
  }

float factorial(int n)
  {
   float f=1;
   int k;
   for(k=1;k<=n;k++)
     {
      f=f*k;
     }
   return(f);
  }