// callback function using function pointer

#include <stdio.h>
void sum(int, int);
void sub(int, int);
void display(void (*ptr)(int, int), void (*ptr1)(int, int))
{
    ptr(5, 2);
    ptr1(5, 7);
}
void main()
{
    display(sum, sub);
}
void sum(int a, int b)
{
    printf("%d\t", a + b);
}
void sub(int a, int b)
{
    printf("%d", a - b);
}
