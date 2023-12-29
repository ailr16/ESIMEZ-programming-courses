#include <stdio.h>
void main (void)
  {
   int x,y,z = 2;
   float a,b = 3.5;
   x=3/z+b;
   y=x+5/z*3/2-b;
   x=x+y;
   b=b/2;
   a=x+y+b;
   printf("x=%d y=%d a=%f b=%f",x,y,a,b);
  }