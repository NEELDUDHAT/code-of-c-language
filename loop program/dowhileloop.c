#include <stdio.h>
void main()
{
    int num, index = 0;
    printf("enter number:");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index);
        index += 1;

    } while (index < num);
}