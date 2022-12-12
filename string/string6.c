// concatenate twow strind by using string function strcat()..

#include <stdio.h>
#include <string.h>
void main()
{
    /*
    if the size of destination string(s1) is very short
    as compare to s2 string yet s2 is concatenate to the s1
    */
    char s1[50], s2[20];
    printf("Enter First string:");
    gets(s1);
    printf("Enter second string:");
    gets(s2);
    // printf("%s", strcat(s1, s2));
    // strcat(s1, s2);
    // puts(s1);
    strncat(s1, s2, 3); // here,strncat(first string,second string,number of concatenate characters)
    puts(s1);
}