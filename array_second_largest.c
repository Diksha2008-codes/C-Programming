#include<stdio.h>
int main()
{
    int arr[7]={15,42,8,67,31,56,24};
int largest=arr[0];
int secondlargest=arr[0];
for(int i=1;i<7;i++)
{
    if(arr[i]>largest)
    {
        secondlargest=largest;
        largest=arr[i];
    }
    else if(arr[i]>secondlargest && arr[i]<largest)
    {
        secondlargest=arr[i];
    }
}
printf("largest element=%d\n",largest);
printf("second largest element=%d\n",secondlargest);
return 0;
}