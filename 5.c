#include <stdio.h>
#include <stdlib.h>

int main()
{

   int n[4][4] = {{29,43,59,78},{3,5,45,55},{33,5,4,8},{22,319,99,88}};
   int i,j,o,q;
   for ( i=0;i<4;i++)
   {
       printf ("\n");
       for (j=0;j<4;j++)
       {
           printf("%4d",n[i][j]);
       }
   }
   getchar();
   for (q=0;q<4;q++)
   {
    for (i=0;i<4;i++)
    {
       for (j=1;j<4;j++)
       {
          if (n[i][j-1]>n[i][j])
          {
              o = n[i][j-1];
              n[i][j-1]=n[i][j];
              n[i][j]=o;
          }
       }
    }
   }
   getchar();
   for (q=0;q<4;q++)
   {
    for (j=0;j<4;j++)
    {
       for (i=1;i<4;i++)
       {
          if (n[i-1][j]>n[i][j])
          {
              o = n[i-1][j];
              n[i-1][j]=n[i][j];
              n[i][j]=o;
          }
       }
    }
   }
   printf ("\n");
   for ( i=0;i<4;i++)
   {
       printf ("\n");
       for (j=0;j<4;j++)
       {
           printf("%4d",n[i][j]);
       }
   }
   getchar();

    return 0;
}
