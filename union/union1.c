// union
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
    printf("Enter name:");
    scanf("%s", e.name);
    printf("Enter surname:");
    scanf("%s", e.surname);
    printf("Enter age:");
    scanf("%d", &e.age);
    printf("Enter year:");
    scanf("%d", &e.year);
    printf("Enter sallary:");
    scanf("%d", &e.sallary);
    printf("Name:%s\n", e.name);
    printf("Surname:%s\n", e.surname); /*Here,in output in sallary and age are same value of sallary
                                         because sallary and age has same data type and also
                                         sallary is at the end so it give you same values of sallary */
    printf("Age:%d\n", e.age);
    printf("Year:%d\n", e.year);
    printf("Sallary:%d", e.sallary);
}
