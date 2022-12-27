// function pointer

#include <stdio.h>
int sum(int, int);
void main()
{
    int s = 0;
    int (*ptr)(int, int) = &sum; /* here,ampersand is not mandatory we can write only sum
                                     and it take base address of function..*/
    s = (*ptr)(5, 9);            // here,we can write (*ptr)(5,9) as a only ptr(5,9)...
    printf("sum:%d", s);
}
int sum(int a, int b)
{
    return a + b;
}