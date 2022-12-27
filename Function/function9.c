// how to pass an array through a function..

#include <stdio.h>
int avg(int[], int);
void main()
{
    int marks[5] = {10, 43, 56, 36, 75}, size, average;
    size = sizeof(marks) / sizeof(marks[0]);
    average = avg(marks, size);
    printf("\nAverage=%d", average);
    printf("\nAverage=%u", marks);
    printf("\ninside main size of array=%d", sizeof(marks));
}
int avg(int marks[], int a)
{
    int sum = 0, average;
    for (int i = 0; i < a; i++)
    {
        sum = sum + marks[i];
    }
    average = sum / a;
    printf("\nAverage=%u", marks);
    printf("\ninside functiuin size of array=%d", sizeof(marks));
    return average;
}