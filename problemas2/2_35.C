#include <stdio.h>
#include <conio.h>

unsigned long factorial(int);
unsigned long suma(int,unsigned long);
int leer(void);

void main(void)
  {
   int m,n;
   unsigned long s,j;
   clrscr();
   printf("\nDa el valor de n:\t");
   n=leer();
   printf("\nDa el valor de m:\t");
   m=leer();
   j=factorial(n);
   s=suma(m,j);
   printf("\nS = %16.0lu",s);
   getch();
  }

unsigned long factorial(int n)
  {
   int k=1;
   unsigned long f;
   for(k=1;k<=n;k++)
     f=f*k;
   return(f);
  }

unsigned long suma(int m, unsigned long f)
  {
   int i;
   unsigned long s=0;
   for(i=1;i<=m;i++)
     s=s+i*f;
   return(s);
  }

int leer(void)
  {
   int e;
   scanf("%d",&e);
   return(e);
  }