// Problems on Pointers of increment and decrement

#include <stdio.h>
void main()
{
    int a[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;
    p = a;
    q = &a[0] + 3;
    printf("%d %d %d\n", (*p)++, (*p)++, *(++p)); //      12 11 11
    printf("%d\n", *p);                           // 13
    printf("%d\n", (*p)++);                       // 13 here a[1]=14
    printf("%d\n", (*p)++);                       // 14 here a[1]=15

    q--;
    printf("%d\n", (*(q + 2))--); // 67

    printf("%d\n", *(p + 2) - 2); // 54

    printf("%d\n", *p); // here p=&a[1] so answer is 15...
}