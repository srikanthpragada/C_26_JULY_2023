// Program to find out sum of numbers from 1 to given number
// Date : 07-AUG-2023

#include <stdio.h>

void main()
{
 int n, i, sum;

   printf("Enter number :");
   scanf("%d",&n);

   for(i = 1; i <= n; i++)
   {
      sum = sum + i;
   }

   printf("Sum = %d", sum);
}
