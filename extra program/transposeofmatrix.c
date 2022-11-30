// transpose of 3*3 matrix

#include <stdio.h>
void main()
{
    int a[3][3], i, j;
    printf("Enter elements of matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("original matrix:\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\nranspose of matrix:\n\n");
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3; i++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}