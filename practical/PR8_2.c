#include <stdio.h>
#include <string.h>
void main()
{
    char name[5][15];
    char temp[15];
    int i, j;
    printf("ID:22DCE028\n\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter name of %d student:", i + 1);
        gets(name[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
        printf("Name of %d student :", i + 1);
        puts(name[i]);
    }
}