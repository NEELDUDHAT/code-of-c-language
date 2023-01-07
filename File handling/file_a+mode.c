#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp = NULL;
    char str[20];
    fp = fopen("ab.txt", "a+");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    // fputs("Neel", fp);
    fseek(fp, -2, 2);
    int n = ftell(fp);
    printf("%d", n);
    fputs("QQQQQ", fp);

    fp = fopen("ab.txt", "a+");
    fseek(fp, 6, 0);
    char ch = fgetc(fp);
    printf("\n\n%c", ch);
    // rewind(fp);
    // fgets(str, 5, fp);
    // printf("%s", str);
    fclose(fp);
}