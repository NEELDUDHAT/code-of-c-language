// find length of string without using predefiened function  method1..

#include <stdio.h>
void main()
{

    char name[30];
    int length = 0, i = 0;
    printf("Enter string:");
    gets(name);
    // for (int i = 0; name[i] != '\0'; i++)
    // {
    //     length++;
    // }
    while (name[i] != '\0')
    {
        length++;
        i++;
    }

    printf("Length of string is %d", length);
}