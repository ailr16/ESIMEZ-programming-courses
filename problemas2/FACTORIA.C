#include <stdio.h>
#include <conio.h>

int leer(void);
void imprimir(int,float);

void main(void)
  {
   int x,a,fact;
   fact=1;
   clrscr();
   printf("Introduzca un numero:\t");
   x=leer();
   for(a=x;a>1;a--)
     {
      fact=fact*a;
     }
   printf("Factorial de %d = %d",x,fact);
   getch();
  }

int leer(void)
  {
   int x;
   scanf("%d",&x);
   return(x);
  }