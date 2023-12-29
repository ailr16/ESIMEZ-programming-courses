#include <stdio.h>
#include <conio.h>

#define nf 10
#define nc 10

#include <lim.h>

float suma(int,int,float [nf][nc]);
float producto(int,int,float [nf][nc]);

void main(void)
  {
   float b[nf][nc],s,p;
   int m,n;
   clrscr();

   printf("Da el numero  de filas:  ");
   m=leer();
   printf("\nDa el numero de columnas:  ");
   n=leer();
   printf("\nDa los elementos de la matriz:  ");
   leemat(m,n,b);
   printf("\n\nMATRIZ:");
   impmat(m,n,b);

   s=suma(m,n,b);
   p=producto(m,n,b);

   printf("\n\n\n\nLa suma de los elementos de la matriz es = %.3f",s);
   printf("\n\nEl producto de los elementos de la matriz es = %.3f",p);

   getch();
  }

float suma(int m,int n,float b[nf][nc])
  {
   int i,j;
   float s=0;

   for(i=1;i<=m;i++)
     for(j=1;j<=n;j++)
       s=s+b[i][j];

   return(s);
  }

float producto(int m,int n,float b[nf][nc])
  {
   int i,j;
   float p=1;

   for(i=1;i<=m;i++)
     for(j=1;j<=n;j++)
       p=p*b[i][j];

   return(p);
  }