#include <stdio.h>
#include <conio.h>

int leer(void);
float factorial(int);
float sumaimpar(int);
void imprimir(int,float);

void main(void)
  {
   int n;
   float f,s;
   clrscr();
   printf("\n\n\t\tA que numero limite deseas sumar: \t");
   n=leer();
   // f=factorial(n);
   s=sumaimpar(n);
   imprimir(n,s);
   getch();
  }

float sumaimpar(int n)
  {
   int i;
   float s=0,f;
   for(i=1;i<=n;i+=2)
     {
      f=factorial(i);
      s=s+f;
     }
   return(s);
  }

float factorial(int n)
  {
   int k;
   float f=1;
   for(k=1;k<=n;k++)
      f=f*k;
   return(f);
  }

void imprimir(int n,float s)
  {
   printf("\n\n\t\t Suma de factoriales impares hasta %d = %.0f",n,s);
  }

int leer(void)
  {
   int e;
   scanf("%d",&e);
   return(e);
  }