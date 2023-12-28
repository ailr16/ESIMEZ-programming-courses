#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

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
   while(1)
   {
     printf("\n\n\t\t\tSeleccione una opcion:\n\n");
     printf("\n\t\t\t A. Rectangulo \n\n\t\t\t B. Cuadrado \n");
     printf("\n\t\t\t C. Circulo \n\n\t\t\t D. Triangulo");
     printf("\n\n\t\t\t E. Trapecio\n");
     printf("\n\t\t\t F. Salir \n");
     s=toupper(getch());
       switch(s)
	 {
	  case 'A':
	    rectangulo();
	    break;

	  case 'B':
	    cuadrado();
	    break;

	  case 'C':
	    circulo();
	    break;

	  case 'D':
	    triangulo();
	    break;

	  case 'E':
	    trapecio();
	    break;

	  case 'F':
	    printf("\n\n\t\t\t Salir del programa\n");
	    getch();
	    exit(0);

	  default:
	    printf("\n\n\t\t\tOpcion invalida\n");
	    getch();
	    clrscr();
	 }
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
    printf("\n\n\t\t\tIntroduzca el valor de la base en cm:\n\t\t\t");
    b=leer();
    printf("\n\n\t\t\tIntroduzca el valor de la altura en cm:\n\t\t\t");
    h=leer();
    a=b*h;
    printf("\n\n\t\t\tDatos:\n\t\t\tBase = %.3f cm \tAltura = %.3f cm",b,h);
    printf("\n\t\t\tResultados: Area = %f cm2",a);
    getch();
    clrscr();
  }


void cuadrado(void)
  {
    float l,a;
    printf("\n\n\t\t\tIntroduzca el valor del lado en cm:\n\t\t\t");
    l=leer();
    a=l*l;
    printf("\n\n\t\t\tDatos:\n \t\t\tLado = %.3f cm",l);
    printf("\n\t\t\tResultados: Area = %f cm2",a);
    getch();
    clrscr();
  }

void circulo(void)
  {
    float r,a;
    printf("\n\n\t\t\tIntroduzca el valor del radio en cm:\n\t\t\t");
    r=leer();
    a=3.1416*r*r;
    printf("\n\n\t\t\tDatos:\n\t\t\tRadio = %.3f cm \n\t\t\t",r);
    printf("Resultados: Area = %f cm2",a);
    getch();
    clrscr();
  }

void triangulo(void)
  {
    float b,h,a;
    printf("\n\n\t\t\tIntroduzca el valor de la base en cm:\n\t\t\t");
    b=leer();
    printf("\n\n\t\t\tIntroduzca el valor de la altura en cm:\n\t\t\t");
    h=leer();
    a=b*h/2;
    printf("\t\t\tDatos:\n\t\t\tBase = %.3f cm \t Altura =%.3f cm ",b,h);
    printf("\n\t\t\tResultados: Area = %f cm2",a);
    getch();
    clrscr();
  }

void trapecio(void)
  {
    float b,B,h,a;
    printf("\n\n\t\tIntroduzca el valor de la base mayor en cm:\n\t\t\t");
    B=leer();
    printf("\n\n\t\tIntroduzca el valor de la base menor en cm:\n\t\t\t");
    b=leer();
    printf("\n\n\t\tIntroduzca el valor de la altura en cm:\n\t\t\t");
    h=leer();
    a=(B+b)*h/2;
    printf("\t\tDatos:\n \t\tBase mayor = %.3f cm \t base menor = %.3f cm \t h = %.3f cm",B,b,h);
    printf("\n\t\tResultados: A = %f cm2",a);
    getch();
    clrscr();
  }