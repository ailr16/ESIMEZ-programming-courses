#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(void)
 {
  float r,x;
  clrscr();
  printf("Da el valor de X\t");
  scanf("%f",&x);
  if(x>=-5 && x<=5 && x!=1)
    {
     r=1/pow(x-1,2);
     printf("\nPara X = %f, R = %f",x,r);
     getch();
    }
  else
    printf("\nPara X = %f, R no se puede calcular",x);
    getch();
 }