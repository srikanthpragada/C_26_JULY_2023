// Program to take 5 numbers or until 0 is given and display avg of nums
// Date : 07-AUG-2023

#include <stdio.h>

void main()
{
 int n, i, total = 0, count = 0;

   for(i = 1; i <= 5; i++)
   {
      printf("Enter number :");
      scanf("%d", &n);

      if(n == 0)
          break;   // terminate loop

      total += n;
      count ++;
   }

   printf("Avg = %d", total / count);

}
