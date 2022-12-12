// program to compare two string by using string function strcmp()..

#include <stdio.h>
#include <string.h>
void main()
{
    /*Here string compare character by character by
     his ascci value ex:a=97 & A=65 so ans is positive 1.
    ans=0 if s1=s2
    ans=1 if s1>s2
    ans=-1 if s1<s2
    */
    char s1[50], s2[50];
    int ans;
    printf("Enter string1:");
    gets(s1);
    printf("Enter string2:");
    gets(s2);
    // ans = strcmp(s1, s2);
    // printf("%d", ans);

    // here,strncmp(first string,second string,number of compare characters)

    ans = strncmp(s1, s2, 3);
    printf("%d", ans);
}