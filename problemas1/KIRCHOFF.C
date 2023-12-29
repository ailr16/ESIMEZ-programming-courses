/*
 Lozano Ramirez Angel Ivan    1CM3    PE18041900
 Elaborar un programa para calcular la caida de voltaje entre los nodos a y b,
 c y d, del siguiente circuito electrico
*/

#include <stdio.h>
#include <conio.h>

void main(void)
  {
   float r1,r2,r3,r4,r5,r6,va;
   float ra,rb,det,i1,i2,vab,vcd;
   clrscr();

   printf("\n Da las resistencias del circuito \n\n\t");
   scanf("%f%f%f%f%f%f",&r1,&r2,&r3,&r4,&r5,&r6);
   printf("\n Da el voltaje de alimentacion \n\n\t");
   scanf("%f",&va);

   ra=r1+r2+r3;
   rb=r3+r4+r5+r6;
   det=ra*rb-r3*r3;
   i1=va*rb/det;
   i2=va*r3/det;
   vab=r3*(i1-i2);
   vcd=r6*i2;

   printf("\n\n\t\t Resistencias: \n\n\t R1 = %.0f ohms",r1);
   printf("\n\t R2 = %.0f ohms \n\t R3 = %.0f ohms",r2,r3);
   printf("\n\t R4 = %.0f ohms \n\t R5 = %.0f ohms",r4,r5);
   printf("\n\t R6 = %.0f ohms",r6);
   printf("\n\n\t\t Voltaje de alimentacion:");
   printf("\n\n\t Va = %.2f volts",va);
   printf("\n\n\t\t Corrientes: \n\n\t I1 = %f amperes",i1);
   printf("\n\t I2 = %f amperes",i2);
   printf("\n\n\t\t Voltajes entre nodos: \n\n\t Vab = %f",vab);
   printf("\n\t Vcd = %f",vcd);
   getch();
  }