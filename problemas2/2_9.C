#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float leer(void);

void main(void)
  {
   int sel;
   float x,y;
   while(1){
     clrscr();
     printf("\n\n\t\t\tSeleccione una opcion:\n\n");
     printf("\t\t\t1. %cF a %cC\n",167,167);
     printf("\t\t\t2. %cC a %cF\n",167,167);
     printf("\t\t\t3. in a cm\n");
     printf("\t\t\t4. cm a in\n");
     printf("\t\t\t5. lb a kg\n");
     printf("\t\t\t6. kg a lb\n");
     printf("\t\t\t7. Terminar el programa\n");

     printf("\n\t\t\t\t  ");
     scanf("%d",&sel);

     switch(sel)
       {
	case 1:
	  printf("\n\n\t\tDa la temperatura en %cF:\t",167);
	  x=leer();
	  y=5./9*(x-32);
	  printf("\n\t\tPara %cF = %f, %cC = %f",167,x,167,y);
	  getch();
	break;

	case 2:
	  printf("\n\n\t\tDa la temperatura en %cC:\t",167);
	  x=leer();
	  y=9./5*x+32;
	  printf("\n\t\tPara %cC = %f, %cC = %f",167,x,167,y);
	  getch();
	break;

	case 3:
	  printf("\n\n\t\t\tDa la longitud en pulgadas:\t");
	  x=leer();
	  y=2.54*x;
	  printf("\n\t\t\tPara %fin, %fcm",x,y);
	  getch();
	break;

	case 4:
	  printf("\n\n\t\t\tDa la longitud en centimetros:\t");
	  x=leer();
	  y=x/2.54;
	  printf("\n\t\t\tPara %fcm, %fin",x,y);
	  getch();
	break;

	case 5:
	  printf("\n\n\t\t\tDa la masa en libras:\t");
	  x=leer();
	  y=0.454*x;
	  printf("\n\t\t\tPara %flb, %fkg",x,y);
	  getch();
	break;

	case 6:
	  printf("\n\n\t\t\tDa la masa en kilogramos:\t");
	  x=leer();
	  y=x/0.454;
	  printf("\n\t\t\tPara %fkg, %flb",x,y);
	  getch();
	break;

	case 7:
	  printf("\n\n\t\t\tTerminar el programa");
	  getch();
	  exit(0);
	break;

	default:
	  printf("\n\n\t\t\tOpcion incorrecta");
	  getch();
       }
    }
  }

float leer(void)
  {
   float r;
   scanf("%f",&r);
   return(r);
  }