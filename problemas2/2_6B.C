#include <stdio.h>
#include <math.h>

float func1(int m);
float func2(int n);

void main(void)
  {
   int m,n;
   float a,b;
   scanf("%d%d",&m,&n);
   a=func1(m);
   b=func2(n);

   if(a>b)
     printf("a=%f",a);
   else
     printf("b=%f",b);
  }

float func2(int n)
  {
   int j;
   float s=0;
   for(j=1;j<=n;j++)s=s+pow(j,j);
   return(s);
  }

float func1(int m)
  {
   int i,k;
   float s,f;
   s=0;
   for(i=1;i<=m;i++){
   f=1;
   for(k=1;k<=i;k++)f=f*k;
   s=s+f;}
   return(s);
  }