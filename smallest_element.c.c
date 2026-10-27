#include<stdio.h>
int main()
{
int arr[5]={32,14,56,8,27};
int smallest=arr[0];
for(int i=1;i<5;i++)
if(arr[i]<smallest)
{
    smallest=arr[i];
}
printf("smallest=%d\n",smallest);
return 0;
}