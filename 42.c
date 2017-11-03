#include <stdio.h>
#include <stdlib.h>

typedef struct Struct{
    int id;
    double grades;
}student;

void struct_sort(student* student);
int main()
{
    int n;
    printf("Please input the number of students :\n");
    scanf("%d",&n);

    struct Struct student[n];
    struct Struct stu;

    int cnt ;
    for ( cnt = 0; cnt < n; cnt++)
    {
     printf("Please input No.%d student id : \n",(cnt+1));
     scanf("%d",&student[cnt].id);
     printf("Please input No.%d student grades : \n",(cnt+1));
     scanf("%lf",&student[cnt].grades);
    }
    int i , j;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-1-i; j++)
        {
            if ( student[j].grades < student[j+1].grades)
            {
                stu = student[j];
                student[j] = student[j+1];
                student[j+1] = stu;
            }
        }
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",student[i].id);
        printf("%.2lf\n",student[i].grades);
    }




    return 0;
}
