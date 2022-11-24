#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter number a:");
    scanf("%d", &a);
    printf("enter number b:");
    scanf("%d", &b);

    c = a + b;
    printf("\n sum is %d", c);

    c = a - b;
    printf("\n diffrence is %d", c);

    c = a * b;
    printf("\n multification is %d", c);

    c = a / b;
    printf("\n devidation is %d", c);
}