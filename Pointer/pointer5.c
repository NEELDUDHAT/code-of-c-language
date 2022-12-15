// pointer arithmetic(pointer substraction program)

#include <stdio.h>
void main()
{
    int a[] = {2, 4, 3, -7, 0};
    int *p = a; // here a address to the base address of a[0]..
    int *q = &a[3];
    printf("q-p=%d\n", q - p);
    printf("p-q=%d\n", p - q);
    printf("value=%d\n", *q);
    q = q - 2;
    printf("value=%d\n", *q);
    p = p + 2;
    printf("q-p=%d\n", q - p);
    q = q - 2;
    printf("value=%d", *q); // here, *q give garbage value because it is not in range of array..
}