#include <stdio.h>
#include <conio.h>
#include <e:\include\portada.H>

int leer(void);
float entrada(void);
void imprimir(int,float);

void main(void)
  {
   int i,m;
   float x;
   clrscr();
   caratula();
   getch();
   clrscr();
   printf("Numero de X a leer:");
   m=leer();
   for(i=1;i<=m;i++)
     {
      printf("\n\nIngrese valor de X[%d]= ",i);
      x=entrada();
      imprimir(i,x);
     }
    getch();
  }

int leer(void)
  {
   int e;
   scanf("%d",&e);
   return(e);
  }

float entrada(void)
  {
   float r;
   scanf("%f",&r);
   return(r);
  }

void imprimir(int i,float x)
  {
   printf("\n X[%d] = %.3f\n",i,x);
  }