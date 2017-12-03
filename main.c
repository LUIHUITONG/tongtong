#include <stdio.h>
#include <stdlib.h>

//void quicksort( int left , int right );
void Mysort(void* base , size_t num, size_t size, int (*comparator)(const void *,const void*));
int compare( const void* left, const void* right)
{
    return *(int*)right-*(int*)left;
}

int main()
{

   int i , n;
   printf("Please inpput the size of the array:\n");
   scanf("%d",&n);
   int a[n];
   for ( i = 0; i < n ; i++)
   {
       printf("Please input a integer:\n");
       scanf("%d", &a[i]);
   }
    Mysort(a, n, sizeof(int), compare);
   printf("\nThe sorted :\n");
   for ( i = 0; i < n ; i++)
   {

       printf(" %d  ", a[i]);

   }
   getchar();
    return 0;
}
void Mysort(void* base , size_t num, size_t size, int (*comparator)(const void *,const void*))
{
   int i, o, j ;
   int *ptr;
   ptr = base;
    for ( j = 0; j < num ; j ++)
    {
        for ( i = 0 ; i < num -1-j; i++)
        {
            if (ptr[i] > ptr[i+1] )
            {
                o = ptr[i+1];
                ptr[i+1] = ptr[i];
                ptr[i] = o;
            }
        }

    }
    getchar();
}

/*void quicksort( int left , int right )
{

    int i, j, t,temp;
    if ( left > right )
    {
        return;
    }
        temp = a[left];
        i = left;
        j = right;
        while ( i != j )
        {
            while( a[j] >= temp && i < j )
            {
                j--;
            }
            while( a[i] <= temp && i < j )
            {
                i++;
            }
            if ( i < j )
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        a[left] = a[i];
        a[i] = temp;
        quicksort( left , i-1 );
        quicksort( i+1 , right );
}*/

