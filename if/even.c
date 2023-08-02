// Program to display the whether a number is even or odd
// Date : 02-AUG-2023

#include <stdio.h>

void main()
{
 int n;

    printf("Enter number :");
    scanf("%d",&n);

    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}
