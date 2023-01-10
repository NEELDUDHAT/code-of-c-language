// without dynamic memory allocation
/* here code behave like undefined behaviour he gives any values of pointer array
    sometime it give some true value but it does't give all values properly..*/

#include <stdio.h>
#include <stdlib.h>
int *display()
{
    int i, n, *ptr;
    printf("Enter values:");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", (ptr + i));
    }
    return ptr;
}
void main()
{
    int i, *ptr1;
    ptr1 = display();
    printf("Entered value:");
    for (i = 0; i < 8; i++)
    {
        printf("%d\t", *(ptr1 + i));
    }
}

// with dynamic memory allocation

// #include <stdio.h>
// #include <stdlib.h>
// int *display()
// {
//     int i, n, *ptr;
//     ptr = (int *)malloc(3 * sizeof(int));
//     printf("Enter values:");
//     for (i = 0; i < 3; i++)
//     {
//         scanf("%d", (ptr + i));
//     }
//     return ptr;
// }
// void main()
// {
//     int i, *ptr1;
//     ptr1 = display();
//     printf("Entered value:");
//     for (i = 0; i < 3; i++)
//     {
//         printf("%d ", *(ptr1 + i));
//     }
//     free(ptr1);
// }