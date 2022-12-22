// void pointer
// by using void pointer we access int,float and char pointer without delclare them..

#include <stdio.h>
void main()
{
    void *vp;
    int a = 12;
    float b = 12.5;
    char c = '0';
    vp = &a;
    printf("%d\n", *(int *)vp);
    vp = &b;
    printf("%f\n", *(float *)vp);
    vp = &c;
    printf("%c", *(char *)vp);
}