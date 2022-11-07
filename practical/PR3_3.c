#include <stdio.h>
void main()
{
    int a, b;
    printf("\t\tID=22TDCE039\n\n");
    printf("Enter number a : ");
    scanf("%d", &a);
    printf("Enter number b : ");
    scanf("%d", &b);
    printf("\nBefor Swapping value is ");
    printf("\na : %d\nb : %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n\nAfter Swapping value is ");
    printf("\na : %d\nb : %d", a, b);
}