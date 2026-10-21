#include<stdio.h>
int main()
{
    int units;
    float bill;
    printf("Enter the units");
    scanf("%d", &units);
    if(units<0)
    {
        printf("Invalid units");
    }
    else if(units<=100)
    {
        bill=units*2;
        printf("Total bill = %.2f",bill);
    }
    else if(units<=200)
    {
        bill=200+(units-100)*3;
        printf("Total bill = %.2f",bill);
    }
    else
    {
        bill=200+300+(units-200)*5;
        printf("Total bill = %.2f",bill);
    }
    return 0;
}