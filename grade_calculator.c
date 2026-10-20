#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks");
    scanf("%d", &marks);
    if(marks>=90)
    {
        printf("The grade is A");
    }
    else if(marks>=75)
    {
    printf("The grade is B");
    }
    else if(marks>=60)
        {
            printf("The grade is C");
    }
    else
    {
        printf("The grade is D");
    }
    return 0;
}