#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mult(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
void main()
{
    int choice, a, b, ans;
    int (*fptr[10])(int, int) = {add, sub, mult, div};
    printf("Press 0:addition\nPress 1:subtraction\nPress 2:multification\nPress 3:Dividation\n\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    printf("Enter a and b:");
    scanf("%d %d", &a, &b);
    ans = (*fptr[choice])(a, b);
    printf("Ans:%d", ans);
}