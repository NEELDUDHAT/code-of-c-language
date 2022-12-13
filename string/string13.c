/*write a program to convert string upper to lower and
 lower to upper case by using string function strlwr() and strupr()..
*/

#include <stdio.h>
#include <string.h>
void main()
{
    // convert string uppercase to lowercase...

    /*char s1[30];
    printf("Enter string of upper case:");
    gets(s1);
    strlwr(s1);
    puts(s1);*/

    // convert string lowercase to uppercase

    char s1[30];
    printf("Enter string of lower case:");
    gets(s1);
    strupr(s1);
    puts(s1);
}