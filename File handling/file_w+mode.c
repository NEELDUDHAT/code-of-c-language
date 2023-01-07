#include <stdio.h>
void main()
{
    FILE *fp = NULL;
    char str[20];
    fp = fopen("abcd.txt", "w+");
    if (fp == NULL)
    {
        printf("Error");
    }
    fprintf(fp, "Neel Dudhat");
    rewind(fp);
    fgets(str, 15, fp);
    printf("%s", str);
    fclose(fp);
}