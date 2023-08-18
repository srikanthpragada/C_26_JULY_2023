// Function to return factorial for the given number

#include <stdio.h>

int factorial(int num)
{
 int fact = 1, i;

     for(i = 1; i <= num; i ++)
        fact = fact * i;

     return fact;
}


void main()
{

     printf("%d", factorial(7));
}
