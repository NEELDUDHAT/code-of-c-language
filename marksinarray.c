#include <stdio.h>
void main()
{
    int marks[5], sum = 0;
    float avg;
    printf("enter marks:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    printf("sum of marks=%d\n", sum);
    avg = (float)sum / 5;
    printf("average of marks=%f", avg);
}