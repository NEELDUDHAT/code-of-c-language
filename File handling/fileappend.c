#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp = NULL;
    char str[50];
    fp = fopen("abc.txt", "a");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    printf("Enter string which you want to add:\n");
    gets(str);
    fputs(str, fp);
    // fprintf(fp, "\n%s", str);
    printf("Successfully appended!!");
    fclose(fp);
}