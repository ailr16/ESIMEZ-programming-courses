#include <stdio.h>
#include <conio.h>
#include <math.h>

float leer(void);

void main(void)
  {
   float r,t,tr,p,pr;
   clrscr();
   printf("Da el valor de theta:\t");
   t=leer();
   printf("\nDa el valor de phi:\t");
   p=leer();
   if(t!=p && t!=5.*p)
     {
      tr=3.1416*t/180;
      pr=3.1416*t/180;
      r=(sin(tr)*sin(tr)+cos(pr*pr)/(t-5*p))/(t-p);
      printf("\n R = %f",r);
     }
   else
     printf("\nNo se puede calcular r");
   getch();
  }

float leer(void)
  {
   float r;
   scanf("%f",&r);
   return(r);
  }