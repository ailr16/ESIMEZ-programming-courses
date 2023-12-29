#include <stdio.h>
#include <conio.h>
#include <math.h>

int leer(void);
float entrada(void);
float prodab(float,float);
float sumaa(float);
float sumab(float);

void main(void)
  {
   float a,b,sp=0,s1,sa=0,sb=0,spow=0;
   int i,n;
   clrscr();
   printf("Ingresa numero de valores a[n] y b[n] a leer. n= ");
   n=leer();
   for(i=1;i<=n;i++)
     {
      printf("a[%d] = ",i);
      a=entrada();
      printf("b[%d] = ",i);
      b=entrada();
      sp=sp+prodab(a,b);
      sa=sa+pow(a,2);
      sb=sb+pow(b,2);
     }
   s1=pow(sp,2);
   spow=spow+sa*sb;
   //printf("%f y %f",sp,s1);
   //printf("\n %f",spow);
   if(s1<=spow)
     printf("\n%f <= %f",s1,spow);
   else
     printf("\n%f > %f",s1,spow);
   getch();
  }

float prodab(float a,float b)
  {
   float p=1;
   p=p*a*b;
   return(p);
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