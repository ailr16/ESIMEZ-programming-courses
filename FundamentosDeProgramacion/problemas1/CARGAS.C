/*
  Lozano Ramirez Angel Ivan. 1CM3.  PE18041900
  Elaborar un programa para calcular la fuerza entre dos cargas
*/

#include <stdio.h>
#include <conio.h>

void main(void)
  {
   double r,k,q1,q2,e,ep,f;
   float pi;
   clrscr();

   pi=3.1416;
   ep=8.85E-12;
   r=1E-5;
   e=1.6E-19;

   k=1/(4*pi*ep);
   q1=10*e;
   q2=-q1;
   f=k*q1*q2/(r*r);

   printf("\n\n\n \t\t\t Datos:");
   printf("\n\n\n \t Cargas: \n\n\t\t");
   printf("Q1 = %e coulombs \n\n\n \t\t",q1);
   printf("Q2 = %e coulombs",q2);
   printf("\n\n\n \t Distancia: \n\n\n \t\t r = %f metros",r);
   printf("\n\n\n\n\n\n \t\t\t Resultado:");
   printf("\n\n\n \t Fuerza:");
   printf("\n\n\n \t\t F = %e Newtons",f);
   getch();
  }