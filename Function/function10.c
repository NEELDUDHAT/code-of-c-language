#include <stdio.h>
void str(char[], char[]); // void str(char*,char*)
void main()
{
    char name1[] = "Neel ";
    char name2[] = "dudhat ";
    str(name1, name2);
}
void str(char name1[], char name2[]) // void str(char*name1,char*name2)
{
    name2[0] = 'D';
    printf("%s%s", name1, name2);
}