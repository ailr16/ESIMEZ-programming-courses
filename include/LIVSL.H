/*
 Lozano Ramirez Angel Ivan    1CM3   201830207199
*/

void leevec(int p, float x[ne])
  {
   int i;
   for(i=1;i<=p;i++)
     {
      scanf("%f",&x[i]);
     }
  }

void impvec(int n, float y[ne])
  {
   int i;
   for(i=1;i<=n;i++)
     {
      printf("\n\n\t\t[%d] = %.2f",i,y[i]);
     }
  }


