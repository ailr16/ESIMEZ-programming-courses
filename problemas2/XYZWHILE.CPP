#include <stdio.h>
#include <conio.h>
#include <math.h>

void calcyz(void);
void imprimir(float,float,float);

void main(void)
  {
   clrscr();
   calcyz();
   getch();
  }

void calcyz(void)
  {
   float x,y,z;
   x=-5;
   printf("\n\n\t\t X \t\t Y \t\t Z \n\n");
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
	 }

	 else;
	 x++;
	}
  }

void imprimir(float x,float y,float z)
  {
   printf("\t\t %f \t %f \t %f \n\n",x,y,z);
  }