#include <stdio.h>
#include <conio.h>

void main (void)
  {
   float r;
   int m;
   clrscr();
   printf("\n\t\tM\t\tR\n");
   for(m=-10;m<=10;m++)
     {
      if(m!=0 && m!= 1./m && m!=3./(m-(1./m)))
	{
	 r=1/(1./3*m-1/(m-1./m));
	 printf("\n\t\t%d\t\t%f\n",m,r);
	}
      else
	{
	 printf("\n\t\t%d\t\tNo se puede calcular R\n",m);
	}
     }
     getch();
  }