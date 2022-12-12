// concatenate two string without using string function..

#include <stdio.h>
#include <string.h>
void main()
{
    char s1[30], s2[10];
    int i, len1, len2;
    printf("Enter string1:");
    gets(s1);
    printf("Enter string2:");
    gets(s2);
    len1 = strlen(s1);
    len2 = strlen(s2);

    for (i = 0; i <= 6; i++)
    {
        s1[len1 + i] = s2[i];
    }
    printf("Concatenate string:");
    puts(s1);
}