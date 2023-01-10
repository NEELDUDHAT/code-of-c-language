#include <stdio.h>
#include <stdlib.h>
void main()
{
    char ch, *ptr;
    int i, n;
    printf("Enter total numbers of char:");
    scanf("%d", &n);
    ptr = (char *)calloc(n, sizeof(char));
    printf("Enter characters:\n");
    for (i = 0; i < n; i++)
    {
        scanf(" %c", (ptr + i)); /*here,%c take enter as a input so we have to use
                                   fflush or space before %c so it will take whole 5 character
                                   as an input!!*/
    }
    printf("Entered characters:");
    for (i = 0; i < n; i++)
    {
        printf("%c\t", *(ptr + i));
    }
    free(ptr);
}
