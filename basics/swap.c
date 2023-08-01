// Program to swap two variables
// Date : 01-AUG-2023

#include <stdio.h>

void main()
{
 int a,b,t;


    printf("Enter two numbers :");
    scanf("%d%d", &a, &b);

    t = a;
    a = b;
    b = t;

    printf("%d %d", a, b);

}
