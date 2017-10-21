#include <stdio.h>
#include <stdlib.h>

void swap ( int *x , int *y);
void swap ( int *x ,int *y)
{
    int p = *x;
    *x = *y;
    *y = p;
}

int main()
{
    int a[4][4] ={{1,2,3,4},{3,2,1,4},{0,1,7,7},{6,5,8,7}};
    int i,j;
    printf ("输出二维数组：\n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {

         printf("%d ",a[i][j]);
        }
    }


    for (i=0;i<2;i++)
    {

        swap (&a[i][i],&a[3-i][3-i]);

    }
    getchar();
    printf ("输出二维数组：\n");
    for (i=0;i<4;i++)
    {
      for (j=0;j<4;j++)
      {

          printf("%d ",a[i][j]);

      }

    }
    getchar();


    return 0;

}
