// pragma pack(n) here n is small power of 2....

#include <stdio.h>
#pragma pack(1)
/*
if we writr pack(negative number of two) then it will work as padding....
*/
struct abc
{

    char f[200];
    int b;
    char c;
    int e;
    char d;
    char fo;
    char h;
    char g;
};
void main()
{
    struct abc s1;
    printf("%d", sizeof(s1));
}
