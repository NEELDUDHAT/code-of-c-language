// count number of lines in a text file!!
#include <stdio.h>
void main()
{
    FILE *fp = NULL;
    char ch;
    int count = 1;
    fp = fopen("abc.txt", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            count++;
        }
    }
    printf("Number of line in text file:%d", count);
}