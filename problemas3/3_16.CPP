#include <stdio.h>

#define NF 10
#define NC 10
void Prob(int m,int n,float b[NF][NC]);
void imprimeMat(int m,int n,float x[NF][NC]);

void main(void)
  {
   int w,z;
   float a[NF][NC];
   scanf("%d%d",&w,&z);

   Prob(w,z,a);
   imprimeMat(w,z,a);
  }

void Prob(int m,int n,float b[NF][NC])
  {
   int i,j;
   for(i=0;i<m;i++){
   for(j=0;j<n;j++){
     b[i][j]=0;
   }
   b[i][j]=i+1.0;
  }
  }

void imprimeMat(int m,int n,float x[NF][NC])
  {
   int i,j;
   for(i=0;i<m;i++){
   for(j=0;j<n;j++){
   printf("%f",x[i][j]);}
   printf("\n");}
  }