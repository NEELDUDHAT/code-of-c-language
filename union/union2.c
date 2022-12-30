// union pointer(pointer to union)
#include <stdio.h>
union employee
{
    char name[20];
    char surname[20];
    int age;
    int year;
    int sallary;
};
void main()
{
    union employee e;
    union employee *ptr = &e;
    printf("Enter name:");
    scanf("%s", ptr->name);
    printf("Enter surname:");
    scanf("%s", ptr->surname);
    printf("Enter age:");
    scanf("%d", &ptr->age);
    printf("Enter year:");
    scanf("%d", &ptr->year);
    printf("Enter sallary:");
    scanf("%d", &ptr->sallary);

    printf("Name:%s\n", ptr->name);
    printf("Surname:%s\n", ptr->surname);
    printf("Age:%d\n", ptr->age);
    printf("Year:%d\n", ptr->year);
    printf("Sallary:%d", ptr->sallary);
    /*Here,in output in sallary and age are same value of sallary
    because sallary and age has same data type and also
    sallary is at the end so it give you same values of sallary */
}
