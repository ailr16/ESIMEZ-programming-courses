#include <stdio.h>
#include <conio.h>
#include <math.h>

float leer(void);

void main(void)
  {
   float thetar,theta,w;
   int m;
   clrscr();
   printf("\n\t\tDa el  ngulo en grados:\t");
   theta=leer();
   thetar=theta*3.1416/180;
   printf("\n\t\tM\t\tTheta\t\tW\n");
   if(theta>=-300 && theta<=300)
     {
      for(m=-10;m<=10;m++)
	{
	 if(sin(m*thetar!=0) && m!=-1./(sin(m*thetar)))
	   {
	     w=1/(m+1/(sin(m*thetar)));
	     printf("\n\t\t%d\t\t%f\t\t%f\n",m,theta,w);
	   }
	   else
	     printf("\n\t\t%d\t\t%f\t\tNo se puede calcular W\n",m,theta);
	}
     }
    else
      {
       printf("\n\t\tTheta no est  en el intervalo [-300,300]");
      }
    getch();
  }

float leer(void)
  {
   float r;
   scanf("%f",&r);
   return(r);
  }