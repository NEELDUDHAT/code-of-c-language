#include <stdio.h>
void main()
{
    int a[100], n;
    printf("Enter range of array:");
    scanf("%d", &n);
    printf("Enter value of elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\t", a[i]);
    }
}