#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void selfun(void);
float leer(void);
void rectangulo(void);
void cuadrado(void);
void circulo(void);
void triangulo(void);
void trapecio(void);

void main(void)
  {
   clrscr();
   selfun();
   getch();
  }

void selfun(void)
  {
   char s;
   printf("\n\n\t\t\tSeleccione una opcion:\n\n");
   printf("\n\t\t\t A. Rectangulo \n\n\t\t\t B. Cuadrado \n");
   printf("\n\t\t\t C. Circulo \n\n\t\t\t D. Triangulo \n\n\t\t\t E. Trapecio\n");
   printf("\n\t\t\t F. Salir \n");
   s=getch();
     switch(s)
       {
	case 'A':
	case 'a':
	  rectangulo();
	  break;

	case 'B':
	case 'b':
	  cuadrado();
	  break;

	case 'C':
	case 'c':
	  circulo();
	  break;

	case 'D':
	case 'd':
	  triangulo();
	  break;

	case 'E':
	case 'e':
	  trapecio();
	  break;

	case 'F':
	case 'f':
	  printf("\n\t\t\t Salir del programa\n");
	  getch();
	  exit(0);

	default:
	  printf("Opcion invalida\n");
	  getch();
       }

  }

float leer(void)
  {
   float r;
   scanf("%f",&r);
   return(r);
  }

void rectangulo(void)
  {
    float b,h,a;
    printf("\n\n\t\tIntroduzca el valor de la base en cm:\n\t\t\t");
    b=leer();
    printf("\n\n\t\tIntroduzca el valor de la altura en cm:\n\t\t\t");
    h=leer();
    a=b*h;
    printf("\n\n\t\tDatos:\n b = %.3fcm \t h = %.3fcm \nResultados: A = %fcm2",b,h,a);
  }


void cuadrado(void)
  {
    float l,a;
    printf("Introduzca el valor del lado en cm:\n");
    l=leer();
    a=l*l;
    printf("Datos:\n L = %.3fcm \nResultados: A = %fcm2",l,a);
  }

void circulo(void)
  {
    float r,a;
    printf("Introduzca el valor del radio en cm:\n");
    r=leer();
    a=3.1416*r*r;
    printf("Datos:\n R = %.3f cm \nResultados: A = %fcm2",r,a);
  }

void triangulo(void)
  {
    float b,h,a;
    printf("Introduzca el valor de la base en cm:\n");
    b=leer();
    printf("Introduzca el valor de la altura en cm:\n");
    h=leer();
    a=b*h/2;
    printf("Datos:\n b = %.3fcm \t h=%.3fcm \nResultados: A = %fcm2",b,h,a);
  }

void trapecio(void)
  {
    float b,B,h,a;
    printf("Introduzca el valor de la base mayor en cm:\n");
    B=leer();
    printf("Introduzca el valor de la base menor en cm:\n");
    b=leer();
    printf("Introduzca el valor de la altura en cm:\n");
    h=leer();
    a=(B+b)*h/2;
    printf("Datos:\n B = %.3fcm \t b = .3%fcm \t h = %.3fcm \nResultados: A = %fcm2",B,b,h,a);
  }