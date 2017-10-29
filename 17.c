#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100010];
    double date[100010];

    printf("Enter character string:\n");
    scanf("%s",str);

    int l=strlen(str);
    int i=0,top=0;


    for (i=0;i<l;i++)
    {
        int sum=0;
        if(str[i]>='0'&&str[i]<='9')
        {
            int k=i;
            while (k<l&&(str[k]>='0'&&str[k]<='9')||str[k]=='.')
            {
                k++;
            }
            int j=i;
            for (j=i;j<l;j++)
            {
                if (str[j]=='.')
                    break;
                sum=sum*10+(str[j]-'0');
                date[top]=sum;
            }
            int n=1;
            for (j++;j<k;j++)
            {
              n=n*10;
              date[top]=date[top]+ 1.*(str[j]-'0')/n;
            }
            top++;
            i=k;
        }
    }
    int q=0;
    for (q=0;q<top;q++)
    {
        printf(" %lf ",date[q]);
    }


    return 0;
}


