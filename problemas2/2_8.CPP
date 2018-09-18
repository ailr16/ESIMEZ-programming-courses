#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int leer(void);
float calct(int,float);
float entrada(void);
float calcg(float);

void main(void)
  {
   char sel;
   int i,a,b,n;
   float s,t,x,f,g;
   sel=getch();
   clrscr();

   printf("\n\t\tSeleccione una opci¢n:\n");
   printf("\t\tA. Tabulacion\n");
   printf("\t\tB. Multifuncion\n");
   printf("\t\tC. Salir");
   switch(sel)
     {
      case 'A':
      case 'a':
       printf("\n\t\tDa el valor de n");
       n=leer();
       s=0;
       printf("\n\ti\ta\tb\ts\n");
       for(i=1;i<=n;i++)
	 {
	  a=9+i;
	  b=10-i;
	  s=s+(a-b);
	  printf("\t%d\t%d\t%d\t%f\n",i,a,b,s);
	 }
       t=calct(n,s);
       printf("\t\t t = %f",t);
       getch();
      break;

      case 'B':
      case 'b':
       printf("\n\t\tDa el valor de X:\t");
       x=entrada();
	if(x<0)
	  {
	    f=x*x+x-1;
	  if(x>0)
	    {
	      f=x+cos(x);
	      if(x==0)
		{
		  printf("\n\n\t\tSalir del programa\n");
		  getch();
		  exit(0);
		}
	    }
	  }

	g=calcg(f);
	printf("\n\t\tPara X = %f, f(x) = %f, g(x) = %f\n",x,f,g);
	getch();
      break;

      case 'C':
      case 'c':
	printf("\n\n\t\tSalir del programa\n");
	getch();
	exit(0);
      break;

      default:
	printf("\n\n\t\tOpcion incorrecta\n");
	getch();
      }
   }

int leer(void)
  {
   int n;
   scanf("%d",&n);
   return(n);
  }

float calct(int n,float s)
  {
   float t;
   t=s/n;
   return(t);
  }

float entrada(void)
  {
   float r;
   scanf("%f",&r);
   return(r);
  }

float calcg(float f)
  {
   float g;
     if(f<=-3)
       g=f*f+sin(f);
     else
       g=exp(f*f)+1;
   return(g);
  }