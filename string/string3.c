// find length of string by using predefined function strlen()..

#include <stdio.h>
#include <string.h>
void main()
{

    char name[100];
    int length = 0;
    printf("enter string:");
    gets(name);
    length = strlen(name);
    printf("%d", length);
}