#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x,y;
    printf("Enter a tegeter:\n");
    scanf("%d",&x);
    while (x>=1)
    {
        y=x%10;
        x=x/10;
        printf("%d",y);
    }
    return 0;
}
