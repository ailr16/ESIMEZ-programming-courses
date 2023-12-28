#include <stdio.h>
#include <conio.h>
#include <math.h>

double factorial(int);
int leer(void);
double producto(int);
double suma(int);

void main(void)
  {
   double q,r;
   int m;
   clrscr();

   printf("Da m= ");
   m=leer();
   q=producto(m);
   r=suma(m);
   if(q>=r)
     {
      printf("\nQ>=R");
      printf("\n%lf >= %e",q,r);
     }
   else
     {
      printf("\nQ<R");
      printf("\n%lf < %e",q,r);
     }
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

double producto(int m)
  {
   int n;
   double p=1;
   for(n=1;n<=m;n++)
     p=p*pow(n,n);
   return(p);
  }

double suma(int m)
  {
   int n;
   double s=0,f;
   for(n=2;n<=m;n+=2)
    {
     f=factorial(n);
     s=s+f;
    }
   return(s);
  }

int leer(void)
  {
   int e;
   scanf("%d",&e);
   return(e);
  }