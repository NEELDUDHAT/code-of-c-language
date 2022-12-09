#include <stdio.h>
void main()
{
    // input and output by scanf and printf

    /* Here scanf take string while space is not coming
       Example:
               Input: neel dudhat
               output: neel */

    // char s1[30];
    // printf("Enter String:");
    // scanf("%s", s1);
    // printf("%s", s1);

    // input and output by gets and puts

    /* Here gets take full string while user not prace enter
       Example:
               Input: neel dudhat
               output: neel dudhat */

    char s2[30];
    printf("Enter string:");
    gets(s2);
    // puts(s2);
    printf("%s", s2); // printf and puts give same output for print string.
}