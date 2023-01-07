#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp = NULL;
    char str[50];
    int a = 10;
    char ch = 'a';
    fp = fopen("abc.txt", "w");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    printf("Enter string:");
    gets(str);
    fprintf(fp, "%d %s %c", a, str, ch);
    fclose(fp);
}