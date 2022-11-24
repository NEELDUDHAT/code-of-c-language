#include<stdio.h>
void main()
{
    char a;
    printf("enter a:");
    scanf("%c",&a);
    if(a>=48 && a<=57)
    {
        printf(" a is digit");
    }
    else if((a>=97 && a<=122) || (a>=65 && a<=90) )
    {

        printf("a is alphabet");
    }
    else
    {
        printf("a is symbol");
    }

}
