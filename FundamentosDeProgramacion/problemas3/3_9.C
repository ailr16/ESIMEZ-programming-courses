#include <stdio.h>
#include <conio.h>

#define nf 10
#define nc 10

#include <lim.h>

void main(void)
  {
   float a[nf][nc];
   int m,n,i,j;
   clrscr();
   printf("\nDa el numero de filas:  ");
   m=leer();
   printf("\nDa el numero de columnas:   ");
   n=leer();
   printf("\nDa los elementos de la matriz:  ");
   leemat(m,n,a);
   printf("\nMatriz Original:  ");
   impmat(m,n,a);

   for(i=1;i<=m;i++)
     for(j=1;j<=n;j++)
       if(a[i][j]>=-100 && a[i][j] <=100)
	 a[i][j]=0;

   printf("\nMatriz resultado:   ");
   impmat(m,n,a);

   getch();
  }