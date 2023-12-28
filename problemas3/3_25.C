#include <stdio.h>
#include <conio.h>

#define nf 10
#define nc 10

#include <lim.H>

float sump(int,float [nf][nc]);
float sums(int,float [nf][nc]);

void main(void)
  {
   int m,n;
   float a[nf][nc],sp,ss;
   clrscr();
   printf("Da el numero de filas y columnas (matriz cuadrada):  ");
   m=leer();
   printf("\nDa los elementos de la matriz");
   leemat(m,m,a);
   printf("\nMatriz:");
   impmat(m,m,a);
   sp=sump(m,a);
   ss=sums(m,a);

   printf("\n\n\nSuma diagonal principal = %.3f",sp);
   printf("\n\n\nSuma diagonal secundaria = %.3f",ss);

   if(sp>ss)
     printf("\n\n\nSuma diagonal principal es mayor");
   else if(ss>sp)
     printf("\n\n\nSuma diagonal secundaria es mayor");
   else if(ss==sp)
     printf("\n\n\nLas sumas son iguales");

   getch();
  }

float sump(int m,float a[nf][nc])
  {
   int i,j;
   float s=0;
   for(i=1;i<=m;i++)
     for(j=1;j<=m;j++)
       if(i==j)
	 s=s+a[i][j];
   return(s);
  }

float sums(int m,float a[nf][nc])
  {
   int i,j;
   float s=0;
   for(i=1,j=m;i<=m;i++,j--)
     s=s+a[i][j];
   return(s);
  }