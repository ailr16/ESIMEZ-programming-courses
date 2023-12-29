#include <stdio.h>
#include <conio.h>

#define nf 10
#define nc 10

#include <lim.h>

float sup(int,float [nf][nc]);
float inf(int,float [nf][nc]);

void main(void)
  {
   int m;
   float a[nf][nc],ss,si;
   clrscr();
   printf("Da el numero de filas y columnas (matriz cuadrada):  ");
   m=leer();
   printf("\n\nDa los elementos de la matriz:  ");
   leemat(m,m,a);
   printf("\n\nMatriz:");
   impmat(m,m,a);
   ss=sup(m,a);
   si=inf(m,a);
   printf("\n\nSuma de los elementos del triangulo superior = %.3f",ss);
   printf("\n\nSuma de los elementos del triangulo inferior = %.3f",si);

   if(ss>si)
     printf("\n\n\nSuma de triangulo superior es mayor");
   else if(si>ss)
     printf("\n\n\nSuma de triangulo inferior es mayor");
   else if(si==ss)
     printf("\n\n\nLas sumas son iguales");

   getch();
  }

float sup(int m,float a[nf][nc])
  {
   int i,j;
   float s=0;
   for(i=1;i<=m;i++)
     for(j=1;j<=m;j++)
       if(i<j)
	 s=s+a[i][j];

   return(s);
  }

float inf(int m,float a[nf][nc])
  {
   int i,j;
   float s=0;
   for(i=1;i<=m;i++)
     for(j=1;j<=m;j++)
       if(i>j)
	 s=s+a[i][j];

   return(s);
  }