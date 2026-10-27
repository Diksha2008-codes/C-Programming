#include<stdio.h>
int main()
{
    int arr[6]={14,27,9,35,18,42};
    int target=100;
    int i;
    for( i=0;i<6;i++)
    if(arr[i]==target)
    {
        printf("number found!\n");
        break;
    }
    if( i==6)
    {
        printf("number not found!\n");
    }
    return 0;
}