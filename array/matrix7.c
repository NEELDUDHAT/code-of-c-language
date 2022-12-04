// multification two n*n matrix

#include <stdio.h>
#define N 50
void main()
{
    int a[N][N], b[N][N], c[N][N], m, n, p, q, sum = 0;
    printf("enter rows and column of first matrix:\n");
    scanf("%d%d", &m, &n);
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter rows and column of second matrix:\n");
    scanf("%d%d", &p, &q);

    printf("\nEnter elements of second matrix:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nsecond matrix:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    if (n != p)
    {
        printf("Can not multiply");
    }
    else
    {

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                sum = 0;
                for (int k = 0; k < m; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }
    }
    printf("multificaion of a and b matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
