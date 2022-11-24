#include<stdio.h>
void main()
{
    int a;
    printf("enter number:");
    scanf("%d",&a);
    if(a==0)
    {
        printf("a is zero");
    }
    else if(a>0)
    {
        printf("a is positive");
    }
    else
    {
        printf("a is negative");
    }


}
