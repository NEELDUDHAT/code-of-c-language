#include <stdio.h>
int *returnpointer(int[]);
void main()
{
    int *p;
    int a[] = {11, 534, 76, 35, 68};
    p = returnpointer(a);
    printf("%d", *p);
}
int *returnpointer(int a[])
{
    a = a + 2;
    return a;
}