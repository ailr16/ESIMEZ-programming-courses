#include <stdio.h>
#include <conio.h>

#define ne 20

#include <liv.h>

void promedio(int,float [ne]);
float entrada(void);

void main(void)
  {
   float a[ne];
   int m=5,i,j=0,x=5;
   while(x){
   clrscr();
   printf("Da las 5 calificaciones:  ");
   leevec(m,a);
   printf("Calificaciones: ");
   impvec(m,a);
   for(i=1;i<=m;i++)
     if(a[i]>=6)
       j++;
     if(j>=3)
       printf("\n\n%d materias aprobadas, derecho a inscripcion",j);
     else
       printf("\n\n%d materias reprobadas, sin derecho a inscripcion",5-j);
   promedio(m,a);
   getch();
   x--;
   }
  }

float entrada(void)
  {
   float r;
   scanf("%f",&r);
   return(r);
  }

void promedio(int m,float a[ne])
  {
   int i;
   float s=0,p;
   for(i=1;i<=m;i++)
     s=s+a[i];
   p=s/m;
   printf("\n\nPromedio = %.3f",p);
  }