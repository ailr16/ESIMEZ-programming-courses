#include <stdio.h>
#include <conio.h>

#define nf 10
#define nc 10

#include <lim.h>

void main(void)
  {
   int m,i,j;
   float u[nf][nc];
   clrscr();
   printf("Da el numero de filas y columnas:");
   m=leer();
   for(i=1;i<=m;i++)
     for(j=1;j<=m;j++)
       if(i==j)
	 u[i][j]=0;
       else
	 u[i][j]=1;
   for(i=1,j=m;i<=m;i++,j--)
     u[i][j]=0;
   printf("\nMatriz:");
   impmat(m,m,u);
   getch();
  }