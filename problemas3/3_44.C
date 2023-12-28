#include <stdio.h>
#include <conio.h>

#define nf 10
#define nc 10

#include <lim.h>

float prom(int,int,float [nf][nc]);
void frecuencia(int,int,float [nf][nc]);

void main(void)
  {
   int m,n;
   float a[nf][nc],p;
   clrscr();
   printf("Da el numero de filas:");
   m=leer();
   printf("Da el numero de columnas");
   n=leer();
   printf("Da elementos de la matriz:");
   leemat(m,n,a);
   p=prom(m,n,a);
   printf("\nPromedio = %f",p);
   frecuencia(m,n,a);
   getch();
  }

float prom(int m,int n,float a[nf][nc])
  {
   float s=0,p;
   int i,j;
   for(i=1;i<=m;i++)
     for(j=1;j<=n;j++)
       s=s+a[i][j];
   p=s/(m*n);
   return(p);
  }

void frecuencia(int m,int n,float a[nf][nc])
  {
   int i,j,x=0,y=0,z=0,f;
   for(i=1;i<=m;i++)
     for(j=1;j<=n;j++)
       {
	if(a[i][j]==5.) x++;
	if(a[i][j]==10.) y++;
	if(a[i][j]==20.) z++;
       }
   printf("\n\tNumero\tFrecuencia\tAsteriscos\n");
   printf("\n\t5\t\t%d\t\t",x);
   for(f=0;f<x;f++) printf("*");
   printf("\n\t10\t\t%d\t\t",y);
   for(f=0;f<y;f++) printf("*");
   printf("\n\t20\t\t%d\t\t",z);
   for(f=0;f<z;f++) printf("*");
  }