#include <stdio.h>
#include <conio.h>

#define ne 20

#include <liv.h>

void generar(int,float [ne],float [ne]);

void main(void)
  {
   int m;
   float d[ne],h[ne];
   clrscr();

   printf("Da el tama¤o del arreglo:  ");
   m=leer();
   printf("\nDa los elementos del arreglo:  ");
   leevec(m,d);
   printf("\nArreglo d[]:");
   impvec(m,d);
   generar(m,d,h);
   getch();
  }

void generar(int m,float d[ne],float h[ne])
  {
   int i,j=1;
   for(i=1;i<=m;i++)
     if(d[i]>=-50 && d[i]<=200)
       {
	h[j]=d[i];
	j++;
       }

   printf("\n\nArreglo h[]: ");
   impvec(j-1,h);
  }