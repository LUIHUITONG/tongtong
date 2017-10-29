#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[]="1023fase415#145#123";
    long sum=0,date[3];
    int i=0,top=0;

    while (str[i]!='\0')
    {
        if (str[i]>='0'&&str[i]<='9')
        {
            sum=sum*10+(str[i]-'0');
        }
        else
        {
            if(sum!=0)
            {
                date[top++]=sum;
                sum=0;
            }
        }
        i++;
    }
    if (sum!=0)
    {
        date[top++]=sum;
    }


    for (i=0;i<top;i++)
    {
        printf (" %ld ",date[i]);
    }

    return 0;
}
