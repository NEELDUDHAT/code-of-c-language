// program of sum of 2 numbers by function and learn actual and formal parameters..

#include <stdio.h>
void sum(int, int); // here, (int,int) is parameters as well as formal parameters..

void main()
{
    sum(5, 7); // here, (5,7) is arguments as well as actual parameters..
}
void sum(int a, int b)
{
    int sum = 0;
    sum = a + b;
    printf("Sum is %d..", sum);
}