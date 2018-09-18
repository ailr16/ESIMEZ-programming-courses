#include <stdio.h>
#include <conio.h>

double factorial(int);
//double cociente()
int leer(void);
double sumatoria(int);

void main(void)
  {
   double s;
   int n;
   clrscr();
   printf("Da el valor de n:\t");
   n=leer();
   //f=factorial(n);
   s=sumatoria(n);
   printf("F=%f",s);
   getch();
  }

int leer(void)
  {
   int r;
   scanf("%d",&r);
   return(r);
  }

double sumatoria(int n)
  {
   double s=0,f;
   int i;
   for(i=1;i<=n;i++)
     {
      f=factorial(i);
      s=s+(i/f);
     }
   return(s);
  }

double factorial(int n)
  {
   double f=1;
   int k;
   for(k=1;k<=n;k++)
     {
      f=f*k;
     }
   return(f);
  }

