// Program to basic salary and calculate net salary
// Date : 05-AUG-2023

#include <stdio.h>

void main()
{
 int salary, hra, da, net_salary;

    printf("Enter salary  :");
    scanf("%d",&salary);

    if(salary > 50000)
    {
        hra = salary * 30 / 100;
        da = salary * 20 / 100;
    }
    else
    {
        hra = salary * 20 / 100;
        da = salary * 15 / 100;
    }

    net_salary = salary + hra + da;

    printf("Net Salary = %d", net_salary);
}
