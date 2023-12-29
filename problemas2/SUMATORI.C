#include <stdio.h>
#include <conio.h>

int leer(void);
float entrada(void);
float suma(int);
float sumainter(int);
int sumatodos(int);
int sumaimpares(int);
int sumapares(int);
void imprimir(int,float);

void main(void)
  {
   int m,st,si,sp;
   float sum,sinter;
   clrscr();
   printf("\n\n\t\t\tN£mero de X a sumar:\t");
   m=leer();

   sum=suma(m);
   sinter=sumainter(m);
   st=sumatodos(m);
   si=sumaimpares(m);
   sp=sumapares(m);

   printf("\n\n\t\t\tLa suma de %d valores de X = %.3f\n",m,sum);
   printf("\n\t  La suma de valores de X dentro del inervalo [-3,3] ");
   printf("es: %.3f\n",sinter);
   printf("\n\t    La suma de todos los valores de i desde 1 hasta %d es %d\n",m,st);
   printf("\n\t\tLa suma de valores de X impares de 1 hasta %d es: %d\n",m,si);
   printf("\n\t\tLa suma de valores de X pares de 2 hasta %d es: %d\n",m,sp);

   getch();
  }

float entrada(void)
  {
   float r;
   scanf("%f",&r);
   return(r);
  }

int leer(void)
  {
   int m;
   scanf("%d",&m);
   return(m);
  }

void imprimir(int i,float x,float s)
  {
   printf("\n\t\t\tX[%d] = %.2f\ts[%d] = %.3f\n",i,x,i,s);
  }

float suma(int m)
  {
   float x,s=0;
   int i;
   printf("\n\t\t\tX\t\tSumas parciales\n\n");
   for(i=1;i<=m;i++)
     {
      printf("\nValor de X[%d] = ",i);
      x=entrada();
      s=s+x;
      imprimir(i,x,s);
     }
   return(s);
  }

float sumainter(int m)
  {
   int i;
   float s,x;
   printf("\n\n");
   for(i=1;i<=m;i++)
     {
      printf("\nValor de X[%d]= ",i);
      x=entrada();
      if(x>=-3 && x<=3)
	{
	 s=s+x;
	 imprimir(i,x,s);
	}
      else
	printf("\n\n\t\tX[%d] = %f no est  dentro del intervalo [-3,3]\n",i,x);
     }
   return(s);
  }

int sumatodos(int m)
  {
   int i,s=0;
   for(i=1;i<=m;i++)
     {
      s=s+i;
     }
   return(s);
  }

int sumaimpares(int m)
  {
   int i,s=0;
   for(i=1;i<=m;i+=2)
     {
      s=s+i;
     }
   return(s);
  }

int sumapares(int m)
  {
   int i,s=0;
   for(i=2;i<=m;i+=2)
     {
      s=s+i;
     }
   return(s);
  }