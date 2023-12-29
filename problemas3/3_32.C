#include <stdio.h>
#include <conio.h>

#define ne 20

#include <liv.h>

void vec(int,float [ne]);

void main(void)
  {
   int m,i;
   float a[ne];
   clrscr();
   printf("Da el numero de alumnos:");
   m=leer();
   printf("Da las calificaciones:");
   leevec(m,a);
   printf("Calificaciones:");
   impvec(m,a);
   vec(m,a);
   getch();
  }

void vec(int m,float a[ne])
  {
   int i;
   for(i=1;i<=m;i++)
     {
      if(a[i]>=8.5) printf("\n [%d] ICE\n",i);
      else if(a[i]>=7.5 && a[i]<8.5) printf("\n [%d] IM\n",i);
      else if(a[i]>=6 && a[i]<7.5) printf("\n [%d] IE\n",i);
      else if(a[i]<6.0) printf("\n [%d] No se asigna\n",i);
     }
  }