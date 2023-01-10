#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a = 1, *ptr;
    while (a)
    {
        printf("dynamic memory leak!!");
        ptr = (int *)malloc(40000 * sizeof(int));
        printf("\ncontinue?? just press enter.");
        scanf("%d", &a);
        free(ptr);
    }
}