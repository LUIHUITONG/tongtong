#include<stdio.h>
#include<stdarg.h>
//c�������ͣ�����������ȷ����
//�Զ��巽��


int Sum( int Num,...);
int Sum( int Num,...)
{
    int i, T;
    int S = 0;
    int n = Num;
    va_list ap;
    va_start(ap,Num);
    while ( n > 0)
    {
        S+=n;
        n = va_arg(ap,int);

    }
    va_end (ap);
    return S;

}

int main()
{
    printf("%d",Sum(1,2,3,-2014));

    return 0;
}



