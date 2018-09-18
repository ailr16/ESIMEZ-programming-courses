#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <e:\include\portada.H>

void calcyz(void);
void imprimir(float,float,float);

void main(void)
  {
   clrscr();
   caratula();
   getch();
   clrscr();
   calcyz();
   getch();
  }

void calcyz(void)
  {
   float x,y,z;
   x=-5;
   printf("\n\n\t\t     X \t\t    Y \t\t    Z \n\n\n");
      while(x<=5)
	{
	 if(x!=-3 && x!=2)
	 {
	   y=exp(x)/(x-2)/(x+3);
	   if(y!=2)
	   {
	     z=y/(y-2);
	     imprimir(x,y,z);
	   }
	   else
	     {
	     printf("\t\t %.0f \t\t %.0f \t\t No se puede calcular Z",x,y);
	     printf("\n\n");
	     }
	 }
	 else printf("\t\t %.0f \t\t No se puede calcular Y ni Z \n\n",x);
	 x++;
	}
  }

void imprimir(float x,float y,float z)
  {
   printf("\t\t %.0f \t\t %f \t %f \n\n",x,y,z);
  }