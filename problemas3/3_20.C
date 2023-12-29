#include <stdio.h>
#include <conio.h>

#define nf 10
#define nc 10

#include <lim.h>

float mayor(int,int,float [nf][nc]);
float menor(int,int,float [nf][nc]);

void main(void)
  {
   int m,n;
   float b[nf][nc],may,men,suma=0;
   clrscr();
   printf("Da el numero de filas:  ");
   m=leer();
   printf("\nDa el numero de columnas:   ");
   n=leer();
   printf("\nDa los elementos de la matriz:  ");
   leemat(m,n,b);
   printf("\n\nMATRIZ:");
   impmat(m,n,b);

   may=mayor(m,n,b);
   men=menor(m,n,b);
   suma=may+men;

   printf("\n\n\nElemento mayor = %.3f",may);
   printf("\n\n\nElemento menor = %.3f",men);
   printf("\n\n\nSuma de elemento mayor y elemento menor = %.3f",suma);

   getch();
  }

float mayor(int m,int n,float b[nf][nc])
  {
   int i,j;
   float em=b[1][1];

   for(i=1;i<=m;i++)
     for(j=1;j<=n;j++)
       if(em<b[i][j])
	 em=b[i][j];
   return(em);
  }

float menor(int m,int n,float b[nf][nc])
  {
   int i,j;
   float em=b[1][1];

   for(i=1;i<=m;i++)
     for(j=1;j<=n;j++)
       if(em>b[i][j])
	 em=b[i][j];
   return(em);
  }