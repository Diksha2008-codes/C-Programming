#include<stdio.h>
int main()
{
    int a,b,c,s;
    float p;
    printf("Enter marks of 3 subjects");
    scanf("%d%d%d",&a,&b,&c);
    s=a+b+c;
    p=(s/300.0)*100;
    printf("Total marks: %d\npercentage:%.2f",s,p);
    if(a<0||a>100||b<0||b>100||c<0||c>100)
    {
        printf("invalid marks");
    }
    else if(a<40||b<40||c<40)
    {
        printf("Fail");
    }
    else
    {
        printf("Pass");
    }
    return 0;
}
