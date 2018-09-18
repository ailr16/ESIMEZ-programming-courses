#include <stdio.h>
#include <conio.h>

#define ne 20

#include <liv.h>

void main(void)
  {
   int m,i,nn=0,np=0;
   float x[ne],em;
   clrscr();
   printf("Da el tama¤o del vector:");
   m=leer();
   printf("Da los elementos del vector:");
   leevec(m,x);
   printf("Vector:");
   impvec(m,x);
   for(i=1;i<=m;i++)
     if(x[i]<0)
       nn++;
     else if(x[i]>0)
       np++;
   printf("\n\n%d numeros negativos",nn);
   printf("\n\n%d numeros positivos",np);
   getch();
  }