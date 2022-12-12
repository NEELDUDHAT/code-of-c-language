// METHOD 2: program to reverse two string without using string function strrev()..

#include <stdio.h>
#include <string.h>
void main()
{
    char s1[25], temp;
    int i, j, length = 0;
    printf("Enter string:");
    gets(s1);
    length = strlen(s1);
    // for (i = 0; i < length / 2; i++)
    // {
    //     temp = s1[i];
    //     s1[i] = s1[length - 1 - i];
    //     s1[length - 1 - i] = temp;
    // }
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = s1[i];
        s1[i] = s1[j];
        s1[j] = temp;
    }
    printf("Reverse string:");
    puts(s1);
}