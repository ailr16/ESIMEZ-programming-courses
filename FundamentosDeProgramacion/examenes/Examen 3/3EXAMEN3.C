#include <stdio.h>
#include <conio.h>

#define ne 20
#define nc 10
#define nf 10

#include <lim.h>
#include <livsl.h>

void mat1(float [ne],float [ne],float [nf][nc],int);

void main(void)
  {
   int n;
   float a[ne],b[ne],mat[nf][nc];
   clrscr();

   printf("Da tama¤o de vectores: ");
   n=leer();
   printf("Da elementos del vector A:");
   leevec(n,a);
   printf("Da elementos del vector B:");
   leevec(n,b);

   mat1(a,b,mat,n);

   printf("\nVector A:");
   impvec(n,a);
   printf("\nVector B:");
   impvec(n,b);
   printf("\nMATRIZ:");
   impmat(n,n,mat);
   getch();
  }

void mat1(float a[ne],float b[ne],float mat[nf][nc],int n)
  {
   int i,j;
   for(i=1;i<=n;i++)
     for(j=1;j<=n;j++)
       mat[i][j]=a[i]*b[j];
  }