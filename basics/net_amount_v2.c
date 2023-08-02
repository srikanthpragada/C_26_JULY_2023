// Program to calculate net amount with a discount of 10%
// Date : 02-JUL-2023

#include <stdio.h>

void main()
{
 int qty, price, amount, discounted_amount, discount, tax, net_amount;


    printf("Enter qty and price: ");
    scanf("%d%d", &qty, &price);

    amount = qty * price;
    discount = amount * 10 / 100;
    discounted_amount = amount - discount;

    tax = discounted_amount * 12 / 100;
    net_amount = discounted_amount + tax;

    printf("Amount           %5d\n",amount);
    printf("- Discount       %5d\n",discount);
    printf("After discount   %5d\n",discounted_amount);
    printf("+ Tax            %5d\n",tax);
    printf("Net amount       %5d", net_amount);
}
