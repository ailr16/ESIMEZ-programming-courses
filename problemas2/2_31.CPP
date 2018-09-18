#include <stdio.h>
#include <conio.h>
#include <math.h>

float  factorial(int);
float calce(int);
float calcex(int,float);
float calcpi(int);
int leer(void);
float entrada(void);

void main(void)
  {
   int sel,n;
   float e,ex,pi,x;
   clrscr();

   printf("Seleccione una opcion:\n\n1. e\n\n2. e^x\n\n3. pi\n\n4. Salir\n");
   scanf("%d",&sel);
   switch(sel)
     {
      case 1:
       printf("Da el valor de n:\t");
       n=leer();
       e=calce(n);
       printf("\ne=%f",e);
       getch();

      case 2:
       printf("Da el valor de n:\t");
       n=leer();
       printf("\nDa el valor de x:\t");
       x=entrada();
       ex=calcex(n,x);
       printf("\ne^x=%f",ex);
       getch();

      case 3:
       printf("Da el valor de n:\t");
       n=leer();
       pi=calcpi(n);
       printf("\npi=%f",pi);
       getch();
     }
  }

int leer(void)
  {
    int n;
    scanf("%d",&n);
    return(n);
  }

float entrada(void)
  {
   float x;
   scanf("%f",&x);
   return(x);
  }

float factorial(int n)
  {
   float f=1;
   int k;
   for(k=1;k<=n;k++)
     f=f*k;
   return(f);
  }

float calce(int n)
  {
    float e=0,f;
    int i;
    for(i=0;i<=n;i++)
      {
       f=factorial(i);
       e=e+1/f;
      }
    return(e);
  }

float calcex(int n,float x)
  {
   float ex=0,f;
   int i;
   for(i=0;i<=n;i++)
     {
      f=factorial(i);
      ex=ex+pow(x,i)/f;
     }
   return(ex);
  }

float calcpi(int n)
  {
   float pi=0;
   int i,j;
   for(i=1;i<=n;i+=2)
     {
      for(j=2;j<=n+1;j++)
	{
	 pi=pi+(4*pow(-1,j))/i;
	}
     }
   return(pi);
  }