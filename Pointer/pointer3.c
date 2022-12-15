// double pointer(pointer to pointer)(level of pointer)

#include <stdio.h>
void main()
{
    int a = 10;    // zero level pointer
    int *p = &a;   // one level pointer
    int **q = &p;  // two level pointer
    int ***r = &q; // three level pointer
    *p = 12;
    **q = 17;
    ***r = 20;
    printf("a=%d\n", a);
    printf("a=%d\n", *p);
    printf("a=%d\n", **q);
    printf("a=%d\n", ***r);
    printf("address of q=%x %x\n", r, &q);
    printf("address of p=%x %x", q, &p);
}