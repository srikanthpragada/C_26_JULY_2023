// Program to display the biggest of 3 numbers
// Date : 02-AUG-2023

#include <stdio.h>

void main()
{
 int a = 100, b = 100, c = 100;

    if(a > b && a > c)
        printf("%d", a);
    else
        if(b > c)
           printf("%d",b);
        else
           printf("%d",c);
}
