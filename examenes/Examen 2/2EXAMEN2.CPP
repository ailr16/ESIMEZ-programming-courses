#include <stdio.h>
#include <conio.h>

double factorial(int);
float suma(double);
float entrada(void);
int leer(void);

void main(void)
  {
   double f;
   float s;
   int n;
   clrscr();
   printf("Da valor de n: ");
   n=leer();
   f=factorial(n);
   s=suma(f);
   printf("\nS=%f",s);
   getch();
  }

double factorial(int n)
  {
   double f=1;
   int i;
   for(i=1;i<=n;i++)
     f=f*i;
   return(f);
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

float suma(double f)
  {
   int i;
   float s=0,x;
   for(i=1;i<=f;i++)
     {
      printf("\nDa x[%d] = ",i);
      x=entrada();
      if(x>0 && x<10)
	{
	 s=s+x;
	 printf("\nX=%f  S=%f",x,s);
	}
      else
	printf("\nX=%f no est  en (0,10)",x);
     }
   return(s);
  }