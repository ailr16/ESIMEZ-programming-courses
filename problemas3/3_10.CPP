#include <stdio.h>
#include <conio.h>

#define nf 10
#define nc 10

#include <lim.h>

void main(void)
  {
   int m,i,j;
   float a[nf][nc];
   clrscr();
   printf("\nDa el numero de filas y columnas (matriz cuadrada):  ");
   m=leer();

   for(i=1;i<=m;i++)
     for(j=1;j<=m;j++)
       if(i!=j)
	 a[i][j]=i*j;
       else
	 a[i][j]=i+j;

   printf("\nMATRIZ:  ");
   impmat(m,m,a);

   getch();
  }