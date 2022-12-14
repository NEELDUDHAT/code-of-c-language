#include <stdio.h>
void main()
{
    int a = 10, b = 9, c;
    int *p, *q;
    // p = &a;
    // q = &b;

    /* here &a is assign to p because precidence of assignment operator
    is greater than coma operator
    */

    // p = &a, &b;

    /* here &b is assign to p because precidence of bracket
       is higher so first execute bracket after bracket comma oprator execute so &b is assign to p
       because in comma operator associativity is left to right as per left to right &b is in
       the last of execution of p=(&a,&b)...
    */

    p = (&a, &b);

    c = *p;
    printf("Value of a=%d\n", a);
    printf("Value of a=%d\n", *p);
    printf("Address of a=%x\n", &a);
    printf("Address of a=%x\n", p);
    printf("c=%d\n", c);
}