#include<stdio.h>
int main()
{
    int arr[8]={-3,6,12,-7,5,0,-2,9};
    int positive=0;
    int negative=0;
    int zero=0;
    for(int i=0;i<8;i++)
    {
        if(arr[i]>0)
        {
            positive++;
        }
        else if(arr[i]<0)
        {
negative++;
        }
        else if(arr[i]==0)
        {
            zero++;
        }
    }
    printf("%d\n",positive);
    printf("%d\n",negative);
    printf("%d\n",zero);
    return 0;
}