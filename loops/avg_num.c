// Program to take 5 numbers and display avg of nums
// Date : 07-AUG-2023

#include <stdio.h>

void main()
{
 int n, i, total = 0;

   for(i = 1; i <= 5; i++)
   {
      printf("Enter number :");
      scanf("%d", &n);

      total += n;
   }

   printf("Avg = %d", total / 5);

}
