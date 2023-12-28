#include <stdio.h>
#include <conio.h>
#include <math.h>

float leerpi(void);
double leerm(void);
void imprimir(double,float,double);
double calcz(float,float,float,float,double);

void main(void)
  {
   float pi,a,b,c,d;
   double m,z;
   clrscr();

   pi=leerpi();
   m=leerm();
   a=sqrt(sin(pi/3*pi/3));
   c=a*cos(pi-3/2)/pi;
   d=pow(c*exp(pi/2),2);
   b=pow(d,1./5);
   z=calcz(a,c,d,b,m);;
   imprimir(z,pi,m);

   getch();
  }

float leerpi(void)
  {
   float pi;
   printf("\Da valor de pi = ");
   scanf("%f",&pi);
   return(pi);
  }

double leerm(void)
  {
   double m;
   printf("\nIntroduce el valor de m = ");
   scanf("%lf",&m);
   return(m);
  }

void imprimir(double z,float pi,double m)
  {
   printf("\n Z=%e  PI=%f  M=%e",z,pi,m);
  }

double calcz(float a,float c,float d,float b,double m)
  {
   double z;
   z=m*(a+b)/(c-d);
   return(z);
  }