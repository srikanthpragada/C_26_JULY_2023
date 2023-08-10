// Program to take a number and display whether it is prime or not
// Date : 10-AUG-2023

#include <stdio.h>

void main()
{
 int n, i, prime;

   for(n = 3; n < 100; n += 2)
   {
     prime = 1;
     for(i = 2; i <= n/2; i++)
     {
        if(n % i == 0)
        {
          prime = 0;
          break;
        }
     } // inner loop

     if (prime)
        printf("%d ", n);
   }



}
