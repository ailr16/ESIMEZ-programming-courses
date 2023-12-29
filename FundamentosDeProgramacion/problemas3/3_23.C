#include <stdio.h>
#include <conio.h>

#define nf 10
#define nc 10
#define ne 20

#include <lim.H>
#include <livsl.H>

void mat(int,float [nf][nc],float [ne]);

void main(void)
  {
   int m;
   float a[nf][nc], v[ne];
   clrscr();

   printf("Da el numero de filas y columnas (matriz cuadrada):  ");
   m=leer();
   printf("\nDa los elementos de la matriz:");
   leemat(m,m,a);
   printf("\n\nMATRIZ:");
   impmat(m,m,a);
   mat(m,a,v);
   printf("\n\nMatriz resultado:");
   impmat(m,m,a);
   printf("\n\nVector de elementos sustituidos:");
   impvec(m,v);

   getch();
  }

void mat(int m,float a[nf][nc],float v[ne])
  {
   int i,j;

   for(i=1;i<=m;i++)
     for(j=1;j<=m;j++)
       if(i==j)
	 {
	   v[i]=a[i][j];
	   a[i][j]=1;
	 }
  }