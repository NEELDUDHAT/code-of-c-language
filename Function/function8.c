// sum of 2 digit without argument and with return type

#include <stdio.h>
int sum();
void main()
{
    int s;
    s = sum();
    printf("sum=%d", s);
}
int sum()
{
    int a = 5, b = 7, sum = 0;
    sum = a + b;
    return sum;
}