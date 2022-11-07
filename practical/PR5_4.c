#include <stdio.h>
void main()
{
    int stock = 100, order;
    char credit;
    printf("Y or y is for yes\n N or n for no\n");
    printf("enter credit :");
    scanf("%c", &credit);
    if (credit == 'n' || credit == 'N')
    {
        printf("you can not get order because you selected no credit option");
    }
    else
    {
        if (credit == 'y' || credit == 'Y')
        {
            while (stock > 0)
            {
                printf("\nenter your order:");
                scanf("%d", &order);
                if (order <= stock)
                {
                    printf("your order %d is in stock so that you can receive your order..\n", order);
                    stock = stock - order;
                    printf("available stock is %d..", stock);
                }
                else
                {
                    printf("your order is %d but stock is 100 so that you can not receive your order..", order);
                    printf("\nBalance will be refundable, by the way sorry for the less stock..");
                }
            }
        }
        else
        {
            printf("your credit is not valid..");
        }
    }
}