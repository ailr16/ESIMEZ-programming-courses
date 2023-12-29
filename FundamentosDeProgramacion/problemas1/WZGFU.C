/*
 Lozano Ramirez Angel Ivan    1CM3   PE18041900
 Elaborar un programa para calcular las siguientes expresiones, utilizando
 una funcion de usuario para cada expresion, proporcionando los datos
 necesarios e imprimiendo los resultados en el programa principal
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void calcw(void);
void calcz(void;
void calcg(void);

float z,g,w;

void main(void)
  {
   clrscr();
   calcz();
   calcg();
   calcw();

   printf("\n\n\n\t\t\t Resultados:");
   printf("\n\n\t\t\t Z = %f \n\n\t\t\t G = %f \n\n\t\t\t W = %f",z,g,w);
   getch();
  }

void calcz(void)
  {
   float a,b,y,phi,phir;
   printf("Introduce valores de A, B, Y y Phi(en grados): \t");
   scanf("%f,%f,%f,%f",&a,&b,&y,&phi);
   phir=phi*3.1416/180;
   z=(a*a+pow(b,5))/(3*y)+sin(phir)*sin(phir);
   printf("\n\n\t\t\t Datos: \n\n\t\t A= %f \t\t B = %f",a,b);
   printf("\n\n\t\t Y = %f \t\t Phi = %f",y,phi);
  }

void calcw(void)
  {
   float aplha,d,r;
   printf("\n\n\t\t\tIntroduce valores de aplha, d y r:\t");
   scanf("%f,%f,%f",&aplha,&d,&r);
   w=pow(alpha/(2*d),1./3)-r;
   printf("\n\n\t Alpha = %f \t\t D = %f \t\t R = %f",alpha,d,r);
  }

void calcg(void)
  {
   float x,p,tet,tetr;
   printf("\n\n\t\t\t Introduce los valores de X, P y Tetha:\t");
   scanf("%f,%f,%f",&x,&p,&tet);
  }