#include <stdio.h>
#include <conio.h>

#define ne 10

void generar(int,float [ne]);
int leer(void);
void impvec(int,float [ne]);

void main(void)
  {
   int m;
   float x[ne];
   clrscr();
   printf("Da el tama¤o del vector:  ");
   m=leer();
   generar(m,x);
   printf("\nVector: \n ");
   impvec(m,x);
   getch();
  }

void generar(int m,float x[ne])
  {
   int i;
   x[0]=1;
   for(i=1;i<=m;i++)
     x[i]=x[i-1]*2;
  }

void impvec(int m,float a[ne])
  {
   int i;
   for(i=0;i<=m;i++)
     printf("\n[%d] = %.3f\n",i,a[i]);
  }

int leer(void)
  {
   int e;
   scanf("%d",&e);
   return(e);
  }