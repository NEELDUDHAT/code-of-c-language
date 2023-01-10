#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i, *ptr, *ptr1;
    printf("Enter n:");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter values:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("Entered values:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n\nEnter new n:");
    scanf("%d", &n);
    ptr1 = (int *)realloc(ptr, n * sizeof(int));
    printf("\n\naddress 1:%d \n adress 2:%d", ptr, ptr1);
    printf("\n\nEnter values:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr1 + i));
    }
    printf("Entered values:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr1 + i));
    }
    free(ptr1);
}