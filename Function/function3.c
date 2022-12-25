// Declaration and defination of function
#include <stdio.h>
char character(void); // function declaration

// here main is callingfunction and character() is called function..
void main()
{
    char ch;
    ch = character(); // function calling
    printf("%c", ch);
}
char character() // function defination
{
    char c;
    printf("Enter character:");
    scanf("%c", &c);
    return c; // here function return variable c so output of program is same as input by user..
    // return 'c'; // here function return character c so output of program is always c...
}