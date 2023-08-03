// Program to display the biggest of 3 numbers using nested if
// Date : 3-AUG-2023

#include <stdio.h>

void main()
{
 int a = 100, b = 10, c = 150;

    if(a > b)
        if(a > c)
          printf("%d", a);
        else
          printf("%d", c);
    else
        if(b > c)
           printf("%d",b);
        else
           printf("%d",c);
}
