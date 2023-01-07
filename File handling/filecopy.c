// copy content of file to other file!!
#include <stdio.h>
void main()
{
    FILE *fp1, *fp2 = NULL;
    char c;
    char ch[100];
    fp1 = fopen("abc.txt", "r");
    if (fp1 == NULL)
    {
        printf("File doesn't have content!!");
    }
    fp2 = fopen("copy.txt", "w+");
    while ((c = fgetc(fp1)) != EOF)
    {
        fputc(c, fp2);
    }
    rewind(fp2);
    while ((c = fgetc(fp2)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp1);
    fclose(fp2);
}