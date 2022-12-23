// sum of 2 numbers by using function
#include <stdio.h>
void sum()
{
    int a, b, sum = 0;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum is %d..", sum);
}
void main()
{
    sum();
    // printf("Hello\n");
    // sum();
    // sum();
}