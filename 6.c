#include <stdio.h>

void swap (int *x,int *y);
void swap (int *x,int *y)
{
    int p = *x;
    *x = *y;
    *y = p;
}

int main()
{
    int a[12]={2,1,4,7,4,8,3,6,4,7,9,2};
    int i;
     for (i=0;i<12;i++)
    {
       printf("%d",a[i]);
    }
    getchar();

    for (i=0;i<6;i++)
    {
      swap (&a[i],&a[11-i]);
    }
    getchar();
    for (i=0;i<12;i++)
    {
       printf("%d",a[i]);
    }
    getchar();

    return 0;
}
