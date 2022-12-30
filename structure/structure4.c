// using typedef in structure
/*
typedef meaning we can create alias of any datatype that meand we can create synonyms of
any data type by using typedef key word......
*/

#include <stdio.h>
typedef struct abc
{
    int a;
    char b;
    float c;

} z;
void main()
{
    z s = {5, 'n', 5.25};
    printf("%d %c %.2f", s.a, s.b, s.c);
}