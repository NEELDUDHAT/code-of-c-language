#include <stdio.h>
void main()
{
    int a;
    printf("enter number:");
    scanf("%d", &a);
    int i = 0;
    while (i < a)
    {
        printf("%d\n", i);
        i += 1;
    }
}