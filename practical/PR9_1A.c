// no argument no return value!!
#include <stdio.h>
void prime()
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
        printf("Number is non prime!!");
    }
    else
    {
        printf("Number is prime!!");
    }
}
void main()
{
    prime();
}