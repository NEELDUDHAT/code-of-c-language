#include <stdio.h>
#include <conio.h>

void main()

{
    int yell;
    clrscr();
    printf(" \n\n\t\t22TDCS099\n");
    yell = 10;
    printf("\nBefore execution yellow balls : %d\n", yell);
    ++yell;
    --yell;
    yell++;
    yell--;

    printf("\nAfter execution yellow balls  : %d\n", yell);
    getch();
}
