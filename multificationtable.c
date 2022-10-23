#include <stdio.h>
void main()
{

    int num;
    printf("enter num :\n");
    scanf("%d", &num);
    printf("\n table of %d is as follows:\n", num);

    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}
