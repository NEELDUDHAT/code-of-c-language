// transpose of 2*3 matrix

#include <stdio.h>
void main()
{
    int a[2][3], i, j;
    printf("Enter elements of matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("original matrix:\n\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\ntranspose of matrix:\n\n");
    // for (j = 0; j < 3; j++)
    // {
    //     for (i = 0; i < 2; i++)
    //     {
    //         printf("%d\t", a[i][j]);
    //     }
    //     printf("\n");
    // }

    // second method of print transpose of array
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}