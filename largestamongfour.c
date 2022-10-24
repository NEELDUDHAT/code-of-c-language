#include <stdio.h>
void main()
{
    int a, b, c, d, max;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    printf("enter the value of c:");
    scanf("%d", &c);
    printf("enter the value of d:");
    scanf("%d", &d);

    max = (a > b && a > c && a > d) ? a : ((b > c && b > d) ? b : (c > d ? c : d));
    printf("largest number among a,b,c and d is %d", max);
}