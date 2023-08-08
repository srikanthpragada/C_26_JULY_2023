// Program to take a number and display smallest factor
// Date : 07-AUG-2023

#include <stdio.h>

void main()
{
 int n, i, found = 0;

   printf("Enter number :");
   scanf("%d",&n);

   for(i = 2; i <= n/2; i++)
   {
      if(n % i == 0)
      {
        printf("%d ", i);
        found = 1;
        break;
      }
   }

   // if found is false (0), means no factor found so display number
   if (!found)
     printf("%d", n);

}
