#include <stdio.h>
void main()
{
    int a[5], b[5], c[5], sum = 0;
    printf("enter value of first array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter value of second array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("sum of particular elements of arrays:\n");
    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
        sum += c[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", c[i]);
    }
    printf("\n\ntotal sum of a[5] and b[5]:");
    printf("\n%d", sum);
}