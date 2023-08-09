// Program to take a number and display whether it is prime or not
// Date : 09-AUG-2023

#include <stdio.h>

void main()
{
 int n, i;

   printf("Enter number :");
   scanf("%d",&n);

   for(i = 1; i <= 10; i++)
   {
      printf("%3d * %2d = %5d\n", n, i, n * i);
   }

}
