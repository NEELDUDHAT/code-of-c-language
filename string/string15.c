#include <stdio.h>
void main()
{
    char str[] = "Welcome to jenny's lectures";
    char *ptr = str;
    printf("%c\n", *ptr);                   // W
    printf("%c\n", *(ptr++ + 1));           // e
    printf("%c\n", *((ptr-- + 5) - 1) + 3); // p
    printf("%c\n", *(++ptr + 10) - 32);     // J
    printf("%c%c%c", *ptr, *++ptr, *--ptr); // eeW
}