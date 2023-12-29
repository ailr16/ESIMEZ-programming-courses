#include <stdio.h>
#include <math.h>
#include <conio.h>

void func1(int m);
float func2(void);

void main(void)
  {
   float x;
   int m;
   clrscr();
   scanf("%d",&m);
   func1(m);
   x=func2();
   printf("x = %f",x);
  }

void func1(int l)
  {
   int i;
   for(i=1;i<l;i++)
     {
      if(i/2*2-i<0)
	 printf("%d",i); else
	 printf("par %d",i);
     }
  }

float func2(void)
  {
   float y;
   printf("yyyy\n");
   y=5/2;
   return(y);
  }