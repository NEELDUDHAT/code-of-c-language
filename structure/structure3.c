// Structure pointer(pointer to structure)
#include <stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;
} s = {28, "neel", 99.68};

void main()
{

    struct student *ptr = &s;
    printf("Roll no:%d\n", ptr->roll_no); //(*ptr).roll_no
    printf("Name:%s\n", ptr->name);       //(*ptr).name
    printf("Marks:%f\n", ptr->marks);     //(*ptr).marks
}
