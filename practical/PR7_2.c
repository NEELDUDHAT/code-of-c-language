#include <stdio.h>
void main()
{
    int a[100], b[100], ans[100];
    int size1, size2;
    printf("\n\tID : 22DCE028\n");
    printf("Enter size of 1st array : \n");
    scanf("%d", &size1);
    printf("Enter size of 2nd array : \n");
    scanf("%d", &size2);
    printf("First array:\n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nSecond array:\n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size1; i++)
    {
        ans[i] = a[i];
    }

    for (int i = 0; i < size2; i++)
    {
        ans[size1 + i] = b[i];
    }
    printf("\nMerge and Sort of a and b:");
    for (int i = 0; i < size1 + size2; i++)
    {
        for (int j = i + 1; j < size1 + size2; j++)
        {
            if (ans[i] > ans[j])
            {
                int temp;
                temp = ans[i];
                ans[i] = ans[j];
                ans[j] = temp;
            }
        }
        printf("%d ", ans[i]);
    }
}