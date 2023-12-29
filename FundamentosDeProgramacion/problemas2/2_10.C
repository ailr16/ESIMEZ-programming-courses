#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

float producto(int);
float suma(int);
int leer(void);
float entrada(void);

void main(void)
  {
   float s,p,x,g;
   int m;
   clrscr();
   printf("\n\n\tDa el valor de m:\t");
   m=leer();
   printf("\n\n\tDa el valor de X:\t");
   x=entrada();
   if(x>-8 && x<8 && x!=0)
     {
      p=producto(m);
      g=p/x;
     }
   else if(x>=8 && x<100 && x!=10)
     {
      s=suma(m);
      g=s/(x-10);
     }
   else
     {
       printf("\n\t\tNo se puede calcular g(x)\n");
       getch();
       exit(0);
     }
   printf("\n\t\tPara x = %f y m = %d, g(x) = %f",x,m,g);
   getch();
  }

int leer(void)
  {
   int e;
   scanf("%d",&e);
   return(e);
  }

float entrada(void)
  {
   float r;
   scanf("%f",&r);
   return(r);
  }

float producto(int m)
  {
   float p=1;
   int n;
   for(n=1;n<=m;n++)
      p=p*(1./n);
      printf("%f",p);

   return(p);
  }

float suma(int m)
  {
   float s;
   int n;
   s=0;
   for(n=1;n<=m;n++)
     s=s+pow(n,n);

   return(s);
  }