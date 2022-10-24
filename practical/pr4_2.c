#include <stdio.h>
void main()
{
    int i, j;
    printf("multification table\n");
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}