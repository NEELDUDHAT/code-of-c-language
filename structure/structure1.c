#include <stdio.h>
struct student // structure declaration...
{
    int roll_no;
    char name[20];
    float marks;
};
void main()
{
    struct student s1, s2; // declare varible name s1 and s2...
    printf("Enter roll number:");
    scanf("%d", &s1.roll_no);
    printf("Enter name:");
    scanf("%s", s1.name);
    // fflush(stdin);
    printf("Enter marks:");
    scanf("%f", &s1.marks);

    printf("\n\nEnter roll number:");
    scanf("%d", &s2.roll_no);
    printf("Enter name:");
    scanf("%s", s2.name);
    fflush(stdin);
    printf("Enter marks:");
    scanf("%f", &s2.marks);

    if (s1.marks > s2.marks)
    {
        printf("Student 1 is clever than student 2.");
    }
    else
    {
        printf("Student 2 is clever than student 1.");
    }
}
