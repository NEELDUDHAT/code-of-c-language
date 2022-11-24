#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);

     if(a=b=c)
    {
        printf("a,b and c are same number");
    }
    else if(a>b && a>c)
    {
        printf("a is maximum");
    }
    else if(b>c)
    {

        printf("b is maximum");
    }
    else
    {
        printf("c is maximum");
    }
}


