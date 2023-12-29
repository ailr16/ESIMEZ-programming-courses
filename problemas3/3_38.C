#include <stdio.h>
#include <conio.h>

#define nf 10
#define nc 10
#define ne 20

#include <lime.H>

int vertical(int,int,int [nf][nc]);
int horizontal(int,int,int [nf][nc]);
int diagp(int,int,int [nf][nc]);
int diags(int,int [nf][nc]);
int comp(int,int,int);

void main(void)
  {
   int m=3,dip,dis,dp,ds,i,j,vc,hc;
   int a[nf][nc],v[ne],h[ne];
   clrscr();
   printf("Da los 9 elementos del cuadro magico (por filas):  ");
   leemat(m,m,a);
   printf("Cuadro m gico: ");
   impmat(m,m,a);

   for(i=1;i<=m;i++)
     v[i]=vertical(m,i,a);
   for(i=1;i<=m;i++)
     h[i]=horizontal(i,m,a);
   dp=diagp(m,m,a);
   ds=diags(m,a);

   printf("\nVerticales:");
   for(i=1;i<=m;i++)
       printf("\n[%d] = %d\n",i,v[i]);

   printf("\nHorizontales:");
   for(i=1;i<=m;i++)
     printf("\n[%d] = %d\n",i,h[i]);

   printf("\nDiagonal principal = %d",dp);
   printf("\nDiagonal secundaria = %d",ds);

   vc=comp(v[1],v[2],v[3]);
   hc=comp(h[1],h[2],h[3]);

   if(vc==hc && vc==dp && dp == ds)
     printf("\n\nEs cuadro magico");
   else
     printf("\n\nNo es cuadro magico");

   getch();
  }

int vertical(int m,int n, int a[nf][nc])
  {
   int i,j,s=0;
   for(i=1;i<=m;i++)
     s=s+a[i][n];
   return(s);
  }

int horizontal(int m,int n, int a[nf][nc])
  {
   int i,j,s=0;
   for(i=1;i<=n;i++)
     s=s+a[m][i];
   return(s);
  }

int diagp(int m,int n,int a[nf][nc])
  {
   int i,j,s=0;
   for(i=1;i<=m;i++)
     for(j=1;j<=n;j++)
       if(i==j)
	 s=s+a[i][j];
   return(s);
  }

int diags(int m,int a[nf][nc])
  {
   int i,j,s=0;
   for(i=1,j=m;i<=m;i++,j--)
     s=s+a[i][j];
   return(s);
  }

int comp(int a1, int a2,int a3)
  {
   if(a1==a2 &&a1==a3)
     return(a1);
   else
     return(0);
  }