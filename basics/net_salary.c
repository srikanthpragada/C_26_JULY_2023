// Program to calculate net salary
// Date : 01-AUG-2023

#include <stdio.h>

void main()
{
 int basic, hra, da, net_salary;


    printf("Enter basic salary : ");
    scanf("%d", &basic);

    hra = basic * 30 / 100;
    da = basic * 15 / 100;
    net_salary = basic + hra + da;

    printf("Basic Salary       %6d\n",basic);
    printf("HRA                %6d\n",hra);
    printf("DA                 %6d\n",da);
    printf("Net Salary         %6d", net_salary);
}

