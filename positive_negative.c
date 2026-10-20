#include<stdio.h>
int main()
{
    int N;
    printf("Enter the Number");
    scanf("%d", &N);
    if(N>0)
{
    printf("The Number is positive");
}
else if(N<0)
{
    printf("The Number is negative");
}
else
{
    printf("The Number is zero");
}
return 0;
}