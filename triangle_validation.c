#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a>0 && b>0 && c>0 && a+b>c && b+c>a && c+a>b)
    {
    if(a==b&&b==c&&a==c)
    {
        printf("equilateral triangle");
    }
    else if(a==b||a==c||b==c)
    {
        printf("isosceles triangle");
    }
    else if(a!=b && b!=c && a!=c)
    {
        printf("scalene triangle");
    }
}
    else
    {
        printf("invalid triangle"); 
    }
    return 0;
}
