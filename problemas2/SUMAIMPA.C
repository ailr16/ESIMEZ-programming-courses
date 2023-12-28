#include <stdio.h>
#include <conio.h>

int leer(void);

void main(void)
  {
   float y,s;
   int x,m,i;
   clrscr();
   printf("\n\t\tIngrese el numero de valores:\t");
   m=leer();
   s=0;
   for(i=1;i<=m;i++)
   {
     printf("Valor de X[%d]\t",i);
     x=leer();
     printf("\n");
     y=x%2;
     if(y!=0)
       s=s+x;
     else;
   }
   printf("Resultado = %f",s);
   getch();
  }

int leer(void)
  {
   int x;
   scanf("%d",&x);
   return(x);
  }