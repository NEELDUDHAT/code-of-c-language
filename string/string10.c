// program to reverse two string with using string function strrev()..

#include <stdio.h>
#include <string.h>
void main()
{
    char s1[20];
    printf("Enter string:");
    gets(s1);
    strrev(s1);
    printf("Reverse string:");
    puts(s1);
}