// Program to take a number and display it in reverse
// Date : 07-AUG-2023

#include <stdio.h>

void main()
{
 int n, digit;

      printf("Enter number :");
      scanf("%d", &n);


      while(n > 0)
      {
          digit = n % 10;  // take rightmost digit
          printf("%d", digit);
          n = n / 10;      // remove rightmost digit
      }
}
