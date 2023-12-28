#include <stdio.h>
#include <conio.h>
#include <math.h>

float calcz(void);
float calcg(void);
float calcx(void);

void main(void)
  {
   float z,g,x;
   clrscr();

   z=calcz();
   g=calcg();
   x=calcx();

   printf("Resultado\n");
   printf("Z=%f  G=%f  X=%f",z,g,x);

   getch();
  }

float calcz(void)
  {
   float z,a,b,d;
   printf("Da valores de A,B y D  ");
   scanf("%f%f%f",&a,&b,&d);
   z=(a*a-pow(b,5)/(5*d)-cos(20*3.1416/180));
   printf("Datos:\n a=%f  b=%f  d=%f",a,b,d);
   return(z);
  }

float calcg(void)
  {
   float g,y,p;
   printf("Da valor de Y y P");
   scanf("%f%f",&y,&p);
   g=exp(y)-y*log(p*p)+sin(30*3.1416/180)-tan(y)*tan(y);
   printf("Datos:\n y=%f  p=%f",y,p);
   return(g);
  }

float calcx(void)
  {
   float g,b,a,c,x;
   printf("Da A,B y C");
   scanf("%f%f%f",&a,&b,&c);
   x=(-b+sqrt(b*b-4*a*c))/(2*a);
   printf("Datos\n a=%f  b=%f  c=%f",a,b,c);
   return(x);
  }