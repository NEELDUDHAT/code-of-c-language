// increment and decrement operators in pointer

#include <stdio.h>
void main()
{
    int a[] = {3, 2, 67, 0, 56};
    int *p;
    p = a;

    // increment operator in pointer
    // printf("%d %d\n", *(p++), *p++);  // *(p++) same output
    printf("%d %d\n", *++p, *++p); // 67 2

    // printf("%d\n", *++p);
    printf("%d\n", *p); // p=67

    // Decrement operator in pointer
    printf("%d %d\n", *--p, *p--); // 3 67
    printf("%d\n", *p);            // p=3
}