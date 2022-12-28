// array of stucture
#include <stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;
};
void main()
{
    struct student s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter roll number,name and marks of %d student:\n", i + 1);
        scanf("%d %s %f", &s[i].roll_no, s[i].name, &s[i].marks);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Roll no:%d\n", s[i].roll_no);
        printf("Name:%s\n", s[i].name);
        printf("Marks:%f\n\n", s[i].marks);
    }
}