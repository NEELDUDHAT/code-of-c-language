#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, n, i;
    printf("Enter total numbers of values:");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter values:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("the entered values: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    free(ptr);
}