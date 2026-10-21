#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks");
    scanf("%d", &marks);
    if(marks<0|| marks>100)
    {
        printf("invalid marks");
    }
     else if(marks>=90)
    {
printf("Grade A");
    }
    else if(marks>=75)
    {
        printf("Grade B");
    }
        else if(marks>=60)
        {
            printf("Grade c");
        }
        else if(marks>=40)
        {
            printf("Grade D");
        }
        else
        {
            printf("Fail");
        }
}