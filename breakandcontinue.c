#include <stdio.h>
void main()
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n enter yor age:", i);
        scanf("%d", &age);
        // if (age > 10)
        // {
        //     break;
        // }
        if (age > 10)
        {
            continue;
        }
        printf("continues statetments\n");
        printf("continues statetments\n");
        printf("continues statetments\n");
        printf("neel is a good boy\n");
    }
}