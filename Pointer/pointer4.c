// pointer arithmetic(pointer addition program)

#include <stdio.h>
void main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = &a[0];
    printf("value is : %d\n", *p);
    printf("address of element is:%u\n", p);
    p = p + 2; // base address=base address + (n*size of data type)..

    *p = 30; // we change a[2]=30
    printf("value is : %d\n", *p);
    printf("address of element is:%u\n", p);
}
