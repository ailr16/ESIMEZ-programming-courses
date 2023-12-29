#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float leer(void);

void main(void)
  {
   float a,b,c;
   while(1)
     {
       printf("\n\t\tDa el valor [1]:\t");
       a=leer();
       printf("\n\t\tDa el valor [2]:\t");
       b=leer();
       printf("\n\t\tDa el valor [3]:\t");
       c=leer();
       if(a==b==c)
	 {
	  printf("\n\t\tSalir");
	  getch();
	  exit(0);
	 }
       else
	 {
	   if(a<b && a<c)
	     {
	      printf("\n\t\t%f es el numero menor",a);
	      getch();
	     }
	   else
	     {
	      if(b<a && b<c)
		{
		 printf("\n\t\t%f es el numero menor",b);
		 getch();
		}
	      else
		{
		 printf("\n\t\t%f es el numero menor",c);
		 getch();
		}
	     }
	 }
	 clrscr();
      }
   }

float leer(void)
  {
   float r;
   scanf("%f",&r);
   return(r);
  }