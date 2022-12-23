#include <stdio.h>
void main()
{
    int n, count = 0;
    printf("Enter num:");
    scanf("%d", &n);
    for (int i = 2; i <= (n / 2) + 1; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count > 0)
    {
        printf("Number is nonprime!!");
    }
    else
    {
        printf("Number is prime!!");
    }
}