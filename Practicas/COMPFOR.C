#include <stdio.h>
#include <conio.h>
#include <e:\include\portada.H>

void main(void)
  {
   int i,j,b,c,l;
   b=5;
   clrscr();
   caratula();
   getch();
   clrscr();

   printf("\n\n\t\t\t valor de i= ");
   for(i=1;i<=3;i++)
     printf("%d ",i);

   printf("\n\n\t\t\t valor de j= ");
   for(j=5;j;j--)
     printf("%d ",j);

   printf("\n\n\t\t\t diferencia b-c= ");
   for(c=1;b-c;c++)
     printf("%d ",b-c);

   printf("\n\n\t\t\t valor de l= ");
   for(l=1;l<=5;l+=2)
     printf("%d ",l);

   getch();
  }