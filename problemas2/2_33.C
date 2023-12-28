#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

float potencia(int,int);
float multiplicacion(int,int);
float division(int,int);
float raiz(int,int);
int leer(void);

float residuo;

void main(void)
  {
   char sel;
   int x,y;
   float res;

   while(1)
     {
       clrscr();

       printf("Selecciona una opcion:");
       printf("\nA. Elevacion de un numero a una potencia");
       printf("\nB. Multiplicacion de dos numeros");
       printf("\nC. Division de dos numeros");
       printf("\nD. Raiz enesima de un numero");
       printf("\nE. Salir del programa");

       sel=getch();

       switch(sel)
	 {
	  case 'a':
	  case 'A':
	    printf("\n\nDa el valor de la base:\t");
	    x=leer();
	    printf("\nDa el valor del exponente:\t");
	    y=leer();
	    if(x>0 && y>0)
	      {
	       res=potencia(x,y);
	       printf("R = %f",res);
	      }
	    else
	      printf("\n\nNo diste un numero mayor que cero");
	  break;

	  case 'b':
	  case 'B':
	    printf("\n\nDa el primer numero:\t");
	    x=leer();
	    printf("\nDa el segundo numero:\t");
	    y=leer();
	    if(x>0 && y>0)
	      {
	       res=multiplicacion(x,y);
	       printf("R = %f",res);
	      }
	    else
	      printf("\n\nNo diste un numero mayor que cero");
	  break;

	  case 'c':
	  case 'C':
	    printf("\n\nDa el dividendo:\t");
	    x=leer();
	    printf("\nDa el divisor:\t");
	    y=leer();
	    if(x>0 && y>0 && x>=y)
	      {
	       res=division(x,y);
	       printf("R = %f",res);
	      }
	    else
	      printf("\n\nNo diste un numero mayor que cero o el dividendo es menor que el divisor");
	  break;

	  case 'd':
	  case 'D':
	    printf("\n\nDa el valor del radicando:\t");
	    x=leer();
	    printf("\nDa el valor del indice:\t");
	    y=leer();
	    if(x>0 && y>0)
	      {
	       res=raiz(x,y);
	       printf("R = %f",res);
	      }
	    else
	      printf("\n\nNo diste un numero mayor a cero");
	  break;

	  case 'e':
	  case 'E':
	    printf("\n\nSalir del programa");
	    getch();
	    exit(0);
	  break;

	  default:
	    printf("\n\nOpcion incorrecta");
	    getch();
	  break;
	 }
     getch();
    }
  }


int leer(void)
  {
   int e;
   scanf("%d",&e);
   return(e);
  }

float potencia(int b,int p)
  {
   float r=1;
   int i;
   for(i=1;i<=p;i++)
     {
      r=b*r;
     }
   return(r);
  }

float multiplicacion(int x,int y)
  {
   int i;
   float r=0;
   for(i=1;i<=y;i++)
     {
      r=r+x;
     }
   return(r);
  }

float division(int x,int y)
  {
   int i,q=0;
   float p=0;
   while(x-y>=q)
     {
      q=y*p;
      p++;
     }
   printf("\n\nResiduo = %d\t\t",x-q);
   return(p-1);
  }

float raiz(int x,int y)
  {
   float r;
   r=pow(x,1./y);
   return(r);
  }