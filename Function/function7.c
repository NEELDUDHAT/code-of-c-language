// sum of 2 digit without argument and without return type

#include <stdio.h>
void sum(void);
void main()
{
    sum();
}
void sum()
{
    int a = 6, b = 5, sum = 0;
    sum = a + b;
    printf("Sum is %d.", sum);
}