#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float leer(void);

void main(void)
  {
   float a,b,c;
   int n,i;
   clrscr();
   printf("Numero de veces a repetir:\t");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
     {
       printf("\nDa el valor de a:\t");
       a=leer();
       printf("\nDa el valor de b:\t");
       b=leer();
       printf("\nDa el valor de c:\t");
       c=leer();
       if(a!=b && a!=c && b!=c)
	 {
	  if(a>b && a>c)
	    {
	     if(b>c)
	       {
		printf("\na=%f",a);
		printf("\nb=%f",b);
		printf("\nc=%f",c);
		getch();
	       }
	      else
		{
		  printf("\na=%f",a);
		  printf("\nb=%f",c);
		  printf("\nc=%f",b);
		  getch();
		}
	    }
	  else if(b>a && b>c)
	    {
	     if(a>c)
	       {
		printf("\na=%f",b);
		printf("\nb=%f",a);
		printf("\nc=%f",c);
		getch();
	       }
	     else
	       {
		printf("\na=%f",b);
		printf("\nb=%f",c);
		printf("\nc=%f",a);
		getch();
	       }
	    }
	   else if(c>a && c>b)
	     {
	      if(a>b)
		{
		  printf("\na=%f",c);
		  printf("\nb=%f",a);
		  printf("\nc=%f",b);
		  getch();
		}
	      else
		{
		 printf("\na=%f",c);
		 printf("\nb=%f",b);
		 printf("\nc=%f",a);
		 getch();
		}
	     }
	 }
       else
	 {
	   printf("\nSalir del programa");
	   getch();
	   exit(0);
	 }
     }
  }

float leer(void)
  {
   float r;
   scanf("%f",&r);
   return(r);
  }