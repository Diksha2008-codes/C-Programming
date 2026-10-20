#include<stdio.h>
int main()
{
    int N;
    printf("Enter the Number");
    scanf("%d", &N);
    if(N%2==0)
    {
        printf("The Number is even");
    }
    else
    {
        printf("The Number is odd");
    }
 return 0;
}