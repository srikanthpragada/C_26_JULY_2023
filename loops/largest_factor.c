// Program to take a number and display largest factor
// Date : 09-AUG-2023

#include <stdio.h>

void main()
{
 int n, i;

   printf("Enter number :");
   scanf("%d",&n);

   for(i = n/2; i >= 1; i --)
   {
      if(n % i == 0)
      {
        printf("%d ", i);
        break;
      }
   }
}
