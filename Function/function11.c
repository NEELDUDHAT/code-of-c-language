// return string from function
#include <stdio.h>
const char *display();
void main()
{
    const char *str;
    str = display();
    // str[0] = 'N';
    printf("String is:%s", str);
}
const char *display()
{
    const char *str = "neel"; // static char str="neel" ->ouput Neel
    return str;
}