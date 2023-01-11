#include <stdio.h>
void main()
{
    int i, j, n, count = 1;
    printf("Enter n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%5d", count++);
        }
        printf("\n");
    }
}