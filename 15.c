#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long x;
    int y;
    printf("Enter a tegeter:\n");
    scanf("%lld",&x);
    while (x>=1)
    {
        y=x%10;
        x=x/10;
        printf("%d",y);
    }
    return 0;
}
