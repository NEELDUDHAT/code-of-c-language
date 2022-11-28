#include <stdio.h>
void main()
{
    int num[10], odd = 0, even = 0;
    printf("enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
    }
    printf("\ncount of odd numbers=%d and count of even numbers=%d", odd, even);
}