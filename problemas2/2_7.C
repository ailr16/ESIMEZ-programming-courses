#include <stdio.h>
#include <conio.h>

void main(void)
  {
   int i,j;
   j=1;
   scanf("%d",&i);
   if(i>0)
     {
      while(i>=1)
	{
	 j=j*i;
	 i=i-1;
	}
	printf("%d",j);
     }
   else
     printf("i<=0");
  }