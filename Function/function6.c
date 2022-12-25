// print x nad y by using call by reference in function..

#include <stdio.h>
void fun(int *, int *);
void main()
{
    int x = 5, y = 7;
    fun(&x, &y); // call by reference fun(&5,&7)..
    printf("\nInside main(calling function):\n");
    printf("\nx=%d and y=%d\n", x, y); // here,values of x=5 and y=7...
}
void fun(int *x, int *y)
{
    *x = 7;
    *y = 5; // here values of x=7 and y=5 so in function value of x and y is 7 ans 5..
    printf("Inslide fun(called function):\n");
    printf("x=%d and y=%d\n", *x, *y);
}