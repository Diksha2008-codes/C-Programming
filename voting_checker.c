#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age");
    scanf("%d", &age);
    if(age >0)
    {
        if(age>=18)
        {
            printf("eligible for voting");
        }
 else
  {
    printf("Not eligible for voting");
  }
}
  else
  {
    printf("Invalid age");
  }
  return 0;
}   