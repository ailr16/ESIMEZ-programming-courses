#include <stdio.h>
#include <conio.h>
#include <math.h>

#define ne 20

void leevec(int,float [ne]);
void impvec(int,float [ne]);
void calcf(int,int,float [ne]);

void main(void)
  {
   int m;
   float a[ne],t;
   clrscr();
   printf("Da el valor de t:  ");
   scanf("%f",&t);
   printf("\nDa el tama¤o del vector:  ");
   scanf("%d",&m);
   printf("\nDa los elementos del arreglo:  ");
   leevec(m,a);
   printf("\nArreglo o vector:  ");
   impvec(m,a);
   calcf(m,t,a);
   getch();
  }

void leevec(int m,float a[ne])
  {
   int i;
   for(i=1;i<=m;i++)
     scanf("%f",&a[i]);
  }

void impvec(int m,float a[ne])
  {
   int i;
   for(i=1;i<=m;i++)
     printf("\na[%d] = %f\n",i,a[i]);
  }

void calcf(int m,int t,float a[ne])
  {
   int i;
   float p=1,s=0;
   for(i=1;i<=m;i++)
     {
       if(a[i]>=-1 && a[i]<=2 && t!=1)
	 s=s+exp(a[i])/(t-1);
       else
	 if(a[i]>=3 && a[i]<=8 && t!=5)
	   p=p*sin(a[i])/(t-5);
       else
	 printf("No se puede calcular f");
    }
   printf("Suma = %f",s);
   printf("Producto = %f",p);
  }