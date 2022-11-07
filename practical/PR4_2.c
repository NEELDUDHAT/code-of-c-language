#include <stdio.h>
void main()
{
    int i = 1, n = 1;
    printf("multification table\n");
    /*for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    */
    do
    {

        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", n * i, n * i * 2, n * i * 3, n * i * 4, n * i * 5, n * i * 6, n * i * 7);
        i++;
    } while (i <= 10);
}