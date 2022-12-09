#include <stdio.h>
void main()
{
    /* here s1 has 5 character 4 of neel and one nul character \0. so we have to give size of
     character array is chracter of string plus 1.*/
    // size of character array=size of string + 1

    // type of string declaration

    char s1[5] = "neel";
    // char s1[]="neel";
    // char s1[5]={'n','e','e','l','\0'};
    // char s1[] = {'n', 'e', 'e', 'l', '\0'};
    printf("%s", s1); // %s is format specifier for string
}