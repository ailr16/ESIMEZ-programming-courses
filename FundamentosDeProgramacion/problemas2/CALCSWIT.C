/*
 Lozano Ramirez Angel Ivan    1CM3    PE18041900
 Elaborar un programa que contenga las opciones para calcular el seno,
 coseno y la tangente de X.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int sel(void);
void imp(void);
void imprimir(float,float);
float leerx(void);

void main(void)
  {
   int s;
   float x,res;
   clrscr();
   printf("\n\n\t\tEscribe el n£mero de la funci¢n a calcular:\n");
   printf("\n\t\t\t 1. Seno \n\t\t\t 2. Coseno \n\t\t\t 3. Tangente\n");
   printf("\t\t\t 4. Salir");
   printf("\n\n\t\t\t\t");
   s=sel();
     switch(s)
       {
	case 1:
	   imp();
	   x=leerx();
	   res=sin(x*3.1416/180);
	   printf("\n\n\t\tResultado para Seno de X\n\n\t\t");
	   imprimir(x,res);
	   break;

	case 2:
	   imp();
	   x=leerx();
	   res=cos(x*3.1416/180);
	   printf("\n\n\t\tResultado para Coseno de X\n\n\t\t");
	   imprimir(x,res);
	   break;

	case 3:
	   imp();
	   x=leerx();
	   res=tan(x*3.1416/180);
	   printf("\n\n\t\tResultado para Tangente de X\n\n\t\t");
	   imprimir(x,res);
	   break;

	case 4:
	   printf("\n\n\t\t\t\t Salir");
	   getch();
	   break;

	default:
	   printf("\n\n\t\t\t\tOpci¢n no valida");
	   getch();
       }
  }


int sel(void)
  {
    int s;
    scanf("%d",&s);
    return(s);
  }

void imprimir(float x,float res)
  {
   printf("\n\t\tX = %f \t Resultado = %f",x,res);
   getch();
  }

float leerx(void)
  {
   float x;
   scanf("%f",&x);
   return(x);
  }

void imp(void)
  {
   printf("\n\t\tIntroduce el valor de X en grados: \n\n\t\t\t\t");
  }