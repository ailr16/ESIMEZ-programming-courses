#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ne 100

#include <liv.h>

void buscar(float,float [ne]);

void main(void)
  {
   int m,i,j=0,x;
   float a[ne];
   clrscr();
   printf("Da el numero de elementos:");
   m=leer();
   if(m>=1 && m<=100)
     {
      printf("Da los elementos del vector:");
      leevec(m,a);
     }
   else
     {
       printf("De 1 a 100 elementos");
       getch();
       exit(0);
     }
   printf("Da el numero a buscar:");
   x=leer();

   for(i=1;i<=m;i++)
     if(x==a[i])
       j=i;
     else;
   if(j!=0)
     printf("\n\n%d encontrado en [%d]",x,j);
   else
     printf("\n\n%d no encontrado",x);
   getch();
  }