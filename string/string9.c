// program to compare two string without using string function strcmp()..

#include <stdio.h>
#include <string.h>
void main()
{
    char s1[25], s2[25];
    int i, flag = 0;
    printf("Enter string1:");
    gets(s1);
    printf("Enter string2:");
    gets(s2);
    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Both string are not same..");
    }
    else
    {
        printf("Both strings are same..");
    }
}