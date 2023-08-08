// Program to take a number and display sum of digits
// Date : 07-AUG-2023

#include <stdio.h>

void main()
{
 int n, digit, sum = 0;

      printf("Enter number :");
      scanf("%d", &n);


      while(n > 0)
      {
          digit = n % 10;  // take rightmost digit
          sum += digit;
          n = n / 10;      // remove rightmost digit
      }

      printf("Sum = %d ", sum);
}
