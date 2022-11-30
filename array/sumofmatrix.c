// sum of elements of 3*3 matrix

#include <stdio.h>
void main()
{
    int a[3][3], i, j, sum = 0;
    printf("Enter elements of matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }
    printf("\nsum=%d", sum);
}
