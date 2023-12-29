#include <stdio.h>
#include <conio.h>
#include <math.h>

int leer(void);
float entrada(void);
float factorial(int);
void calcy(int,float);

void main(void)
  {
   float f;
   int m,n;
   clrscr();
   printf("Da numero de valores de X:  ");
   m=leer();
   printf("Da valor de n = ");
   n=leer();
   f=factorial(n);
   calcy(m,f);
   getch();
  }

float factorial(int n)
  {
   int k;
   float f=1;
   for(k=1;k<=n;k++)
     f=f*k;
   return(f);
  }

void calcy(int m,float f)
  {
   float x,y;
   int i;
   for(i=1;i<=m;i++)
     {
      printf("\nDa x[%d] ",i);
      x=entrada();
      if(x>=0 && x<1)
	{
	 y=pow(x,f);
	 printf("Y[x[%d]] = %f",i,y);
	}
      else
	printf("X[%d] = %f no est  en (0,1)",i,x);
     }
  }

int leer(void)
  {
   int e;
   scanf("%d",&e);
   return(e);
  }

float entrada(void)
  {
   float r;
   scanf("%f",&r);
   return(r);
  }