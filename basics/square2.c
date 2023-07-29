// Program to calculate square of a number taken from user
// Date : 29-JUL-2023

#include <stdio.h>

void main()
{
 int num, square;

    // input
    printf("Enter a number :");
    scanf("%d", &num);

    // process
    square = num * num;

    // output
    printf("Square of %d is %d", num, square);
}
