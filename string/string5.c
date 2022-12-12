// find length of string without using predefiened function  method2..

#include <stdio.h>
void main()
{

    char name[30];
    int length = 0, i = 0;
    printf("Enter string:");
    gets(name);
    for (i = 0; name[i] != '\0'; i++)
        ;

    printf("Length of string is %d", i);
}