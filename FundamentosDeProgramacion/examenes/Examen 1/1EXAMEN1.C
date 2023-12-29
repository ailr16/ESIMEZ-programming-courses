#include <stdio.h>
void main(void)
  {
   int x,y,z=2;
   float a,b=3.5;
   x=3/z-b;
   y=x+5/z*3/2-b;
   x=x+y;
   z=b/3;
   b=y/2;
   a=x+y+b/2-z;
   printf("\nX=%d Y=%d Z=%d A=%f B=%f",x,y,z,a,b);
  }