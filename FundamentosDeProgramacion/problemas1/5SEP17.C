#include <stdio.h>
#include <math.h>
#include <conio.h>

void main(void)
   {
    float a,k;
    int b,c,d;
    clrscr();

    a=6;
    b=4;
    c=3;
    d=5;

    k=cos(sin(2.-d/2)*3/2+1)+c/b+pow(a,1/3)*d/c/a;

    printf("\n\n\n \t\t\t Datos:");
    printf("\n\n \t\t A=%.1f \t\t B=%d",a,b);
    printf("\n\n \t\t C=%d   \t\t D=%d",c,d);
    printf("\n\n\n \t\t\t Resultado:");
    printf("\n\n\  \t\t\t K=%f",k);
    getch();
   }