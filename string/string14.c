/*write a program to convert string upper to lower and
 lower to upper case without using string function strlwr() and strupr()..
*/

#include <stdio.h>
void main()
{
    char s1[30];
    int i;
    printf("Enter string:");
    gets(s1);
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 65 && s1[i] <= 90)
        {
            s1[i] += 32;
        }
        else if (s1[i] >= 97 && s1[i] <= 122)
        {
            s1[i] -= 32;
        }
    }
    puts(s1);
}