// sum of indivisual row nad column in matrix
#include <stdio.h>
void main()
{
    int a[3][3], i, j, sumofrow1 = 0, sumofrow2 = 0, sumofrow3 = 0, sumofcolumn1 = 0, sumofcolumn2 = 0, sumofcolumn3 = 0;
    printf("Enter elements of matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\nmatrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        sumofcolumn1 += a[i][0];
        sumofcolumn2 += a[i][1];
        sumofcolumn3 += a[i][2];
    }
    for (j = 0; j < 3; j++)
    {
        sumofrow1 += a[0][j];
        sumofrow2 += a[1][j];
        sumofrow3 += a[2][j];
    }

    printf("\n\nsum of row1=%d\n", sumofrow1);
    printf("sum of row2=%d\n", sumofrow2);
    printf("sum of row3=%d\n", sumofrow3);
    printf("sum of column1=%d\n", sumofcolumn1);
    printf("sum of column2=%d\n", sumofcolumn2);
    printf("sum of column3=%d\n", sumofcolumn3);
}