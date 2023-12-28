#include <stdio.h>
#include <conio.h>
#include <math.h>

float leer(void);
int entrada(void);

void main(void)
  {
   float p,x;
   int i,m;
   clrscr();
   printf("\n\t\tDa el valor de X:\t");
   x=leer();
   printf("\n\t\tDa el valor de M:\t");
   m=entrada();
   p=1;
   if(x>=-3 && x<=3)
     {
      for(i=1;i<=m;i++)
	{
	 p=p*pow(x,i);
	}
      printf("\n\t\tResultado = %f",p);
     }
     else
       {
	printf("\n\t\tX no est  en el intervalo [-3,3]");
       }
   getch();
  }

float leer(void)
  {
   float x;
   scanf("%f",&x);
   return(x);
  }

int entrada(void)
  {
   int e;
   scanf("%d",&e);
   return(e);
  }