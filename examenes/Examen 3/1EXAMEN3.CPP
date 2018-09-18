#include <stdio.h>
#include <conio.h>

#define ne 20
#define nf 10
#define nc 10
void mayor(int,int,float [nf][nc],float [ne]);
float promedio(int,float [ne]);
void impvec(int,float [ne]);
int leer(void);
void leemat(int,int,float [nf][nc]);
void impmat(int,int,float [nf][nc]);

void main(void)
  {
   int m,n;
   float a[nf][nc],b[ne],p;
   printf("\nDa el numero de alumnos:  ");
   m=leer();
   printf("\nDa el numero de calificaciones:  ");
   n=leer();
   printf("\nDa las calificaciones:  ");
   leemat(m,n,a);
   printf("\nCALIFICACIONES:  ");
   impmat(m,n,a);
   mayor(m,n,a,b);
   impvec(m,b);
   p=promedio(m,b);
   printf("\n Promedio = %f",p);
  }

void leemat(int m,int n,float a[nf][nc])
  {
   int i,j;
   for(i=1;i<=m;i++)
     for(j=1;j<=n;j++)
       scanf("%f",&a[i][j]);
  }

void impmat(int m,int n,float a[nf][nc])
  {
   int i,j;
   for(i=1;i<=m;i++)
     {
       printf("   \n");
       for(j=1;j<=n;j++)
	 printf("   %f",a[i][j]);
     }
  }

int leer(void)
  {
   int e;
   scanf("%d",&e);
   return(e);
  }

float promedio(int m,float b[ne])
  {
   int i;
   float s=0,prom;
   for(i=1;i<=m;i++)
     s=s+b[i];
   prom=s/m;
   return(prom);
  }

void mayor(int m,int n,float a[nf][nc],float b[ne])
  {
   int i,j;
   float em=a[1][1];
   for(i=1;i<=m;i++);
     for(j=1;j<=n;j++);
       if(em<a[i][j])
	 {
	  b[i]=a[i][j];
	 }
  }

void impvec(int m,float b[ne])
  {
   int i;
   for(i=1;i<=m;i++)
     printf("\nb[%d] = %f\n",b[i]);
  }