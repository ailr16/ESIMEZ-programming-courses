#include <stdio.h>
#include <conio.h>
#include <e:\include\portada.H>

void main(void)
  {
   int m,i;
   float x;
   clrscr();
   caratula();
   getch();
   clrscr();
   printf("\n\n\t\tNumero de valores:\t");
   scanf("%d",&m);
   for(i=1;i<=m;i++)
     {
      printf("\n\t\tValor de X%d: \t",i);
      scanf("%f",&x);
      printf("\n\t\t%f \n\n\n",x);
     }
   getch();
  }