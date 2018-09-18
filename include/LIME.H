void leemat(int m,int n,int x[nf][nc])
  {
   int i,j;
   for(i=1;i<=m;i++)
     for(j=1;j<=n;j++)
       scanf("%d",&x[i][j]);
  }

void impmat(int m,int n,int x[nf][nc])
  {
   int i,j;
   for(i=1;i<=m;i++)
     {
      printf("\n\n\t\t");
      for(j=1;j<=n;j++)
	printf("   %d",x[i][j]);
     }
  }

int leer(void)
  {
   int e;
   scanf("%d",&e);
   return(e);
  }