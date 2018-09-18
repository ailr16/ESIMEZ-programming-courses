#include <stdio.h>
#include <conio.h>

#define nf 10
#define nc 10

#include <lim.h>

void mat(int,float [nf][nc]);

void main(void)
  {
   float a[nf][nc];
   int m;
   clrscr();
   printf("Da el numero de filas y columnas (matriz cuadrada):  ");
   m=leer();
   mat(m,a);
   printf("\n\nMATRIZ:");
   impmat(m,m,a);

   getch();
  }

void mat(int m,float a[nf][nc])
  {
   int i,j;

   for(i=1;i<=m;i++)
     for(j=1;j<=m;j++)
       if(i==j)
	 a[i][j]=i;
       else
	 a[i][j]=0;

   for(i=1,j=m;i<=m;i++,j--)
     a[i][j]=i;
  }