#include <stdio.h>
#include <conio.h>

#define nf 10
#define nc 10

#include <lim.h>

void promedio(int,int,float [nf][nc]);

void main(void)
  {
   int m=4,n=5;
   float a[nf][nc];
   clrscr();
   printf("Ingrese las temperaturas:");
   leemat(m,n,a);
   printf("Temperaturas:");
   impmat(m,n,a);
   promedio(m,n,a);

  }

void promedio(int m,int n,float a[nf][nc])
  {
   int i,j;
   float s=0,p;

   for(j=1;j<=n;j++)
     {
      s=s+a[i][j];
     }
  }