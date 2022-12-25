// Declaration and defination of function
#include <stdio.h>
void sum(void); // function declaration

// here main is callingfunction and character() is called function..
void main()
{
    sum(); // function calling
}
void sum() // function defination and this is function header..
{
    int a, b, sum = 0; // this is function body...
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum is %d..", sum);
}