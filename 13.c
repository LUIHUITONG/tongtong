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
    int n;
    int i,o,j;
    printf("输入总元素的个数:\n");
    scanf("%d",&n);

    int numbers[n];
    for (i=0;i<n;i++)
    {
        printf("输入第%d个元素:\n",i+1);
        scanf("%d",&numbers[i]);
    }
        getchar();
    for (j=0;j<n-1;j++)
    {
        for (i=0;i<n-1-j;i++)
        {

        if (numbers[i]>numbers[i+1])
        {
           o = numbers[i];
           numbers[i] = numbers[i+1];
           numbers[i+1] = o;
        }
        }
    }


    printf("\n由小到大排序为:\n");
    for (i=0;i<n;i++)
    {
        printf(" %d ",numbers[i]);
    }
    getchar();

     for ( i=0;i<n/2;i++)
     {
         swap(&numbers[i],&numbers[n-1-i]);
     }
    printf("由大到小排序为:\n");
    for (i=0;i<n;i++)
    {
        printf(" %d ",numbers[i]);
    }

    return 0;

}
