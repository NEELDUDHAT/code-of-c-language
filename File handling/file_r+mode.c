#include <stdio.h>
void main()
{
    FILE *fp = NULL;
    char str[20];
    fp = fopen("abc.txt", "r+");
    if (fp == NULL)
    {
        printf("Error");
    }
    fgets(str, 15, fp);
    printf("%s", str);
    rewind(fp);
    fprintf(fp, "Vipul");
    fclose(fp);
}