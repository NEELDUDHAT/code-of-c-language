#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp = NULL;
    char str[20];
    char ch;
    fp = fopen("abcd.txt", "r");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    rewind(fp);
    fseek(fp, 5, 0);
    ch = fgetc(fp);
    printf("%c\n", ch);
    fseek(fp, -5, 2);
    ch = fgetc(fp);
    printf("%c", ch);
    printf("%s", str);
    //     while (!feof(fp))
    //     {
    //         /*
    //        fgets(str, 6, fp);  // (string,how many character read in one time,file pointer)
    //        printf("%s", str);
    //         */
    //     ch = fgetc(fp);
    //     printf("%c", ch);
    // }

    fclose(fp);
}