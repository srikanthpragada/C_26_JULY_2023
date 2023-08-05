// Program to take day and hours worked and display wage
// Date : 05-AUG-2023

#include <stdio.h>

void main()
{
 int day, hours, wage;

    printf("Enter day [1-7]    :");
    scanf("%d",&day);
    printf("Enter hours worked :");
    scanf("%d",&hours);


    switch(day)
    {
        case 1:
        case 2:
        case 3: wage = hours * 100;
                break;
        case 4:
        case 5: wage = hours * 125;
                break;
        default:wage = hours * 150;
    }

    // Calculate bonus @ 10% if wage is > 1000
    if(wage > 1000)
        wage = wage + wage * 10 / 100;


    printf("Wage = %d", wage);

}
