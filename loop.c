#include <stdio.h>
void main()
{
    int i;
    printf("for loop");
    for (i = 0; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    i = 0;
    printf("\n\nwhile loop\n");
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    i = 0;
    printf("\n\ndo while loop\n");
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 10);
}