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
    printf("������Ԫ�صĸ���:\n");
    scanf("%d",&n);

    int numbers[n];
    for (i=0;i<n;i++)
    {
        printf("�����%d��Ԫ��:\n",i+1);
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


    printf("\n��С��������Ϊ:\n");
    for (i=0;i<n;i++)
    {
        printf(" %d ",numbers[i]);
    }
    getchar();

     for ( i=0;i<n/2;i++)
     {
         swap(&numbers[i],&numbers[n-1-i]);
     }
    printf("�ɴ�С����Ϊ:\n");
    for (i=0;i<n;i++)
    {
        printf(" %d ",numbers[i]);
    }

    return 0;

}
