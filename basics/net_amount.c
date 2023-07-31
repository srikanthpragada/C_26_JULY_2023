// Program to calculate net amount with a discount of 10%
// Date : 31-JUL-2023

#include <stdio.h>

void main()
{
 int qty, price, amount, discount, net_amount;


    printf("Enter qty and price: ");
    scanf("%d%d", &qty, &price);

    amount = qty * price;
    discount = amount * 10 / 100;
    net_amount = amount - discount;

    printf("Amount      %5d\n",amount);
    printf("- Discount  %5d\n",discount);
    printf("Net amount  %5d", net_amount);
}
