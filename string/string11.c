// METHOD 1: program to reverse two string without using string function strrev()..

#include <stdio.h>
void main()
{
    char s1[20], s2[20];
    int i, j;
    printf("Enter string:");
    gets(s1);
    for (i = 0; s1[i] != '\0'; i++)
        ;
    i = i - 1;
    for (j = 0; i >= 0; j++, i--)
    {
        s2[j] = s1[i];
    }
    s2[j] = '\0';
    printf("Reverse string:");
    puts(s2);
}