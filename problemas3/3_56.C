#include <stdio.h>
#include <conio.h>

#define nf 10
#define nc 10

void leemed(int,float [nf][nc]);
void impmat(int,int,float [nf][nc]);
void conv(int,float [nf][nc]);

void main(void)
  {
   int m=3,n;
   float conversion[nf][nc];
   clrscr();
   printf("\n\t\tDa el numero de filas: ");
   scanf("%d",&n);
   printf("\n\t\tDa las medidas en metros: ");
   leemed(n,conversion);
   conv(n,conversion);
   printf("\n\t\tMATRIZ:");
   impmat(m,n,conversion);
   getch();
  }

void leemed(int n,float a[nf][nc])
  {
   int i;
   for(i=1;i<=n;i++)
     scanf("%f",&a[i][1]);
  }

void conv(int n,float a[nf][nc])
  {
   int i;
   for(i=2;i<=n;i++)
     {
       a[i][2]=a[i-1][1]*100;
       a[i][3]=a[i-1][1]*0.914;
     }
  }

void impmat(int m,int n,float a[nf][nc])
  {
   int i,j;
   for(i=1;i<=m;i++)
     {
       printf("\n\n");
       for(j=1;j<=n;j++)
	 printf("  %.2f",a[i][j]);
     }
  }