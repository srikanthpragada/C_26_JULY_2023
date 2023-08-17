
#include <stdio.h>

void evenodd(int num)
{
   if(num % 2 == 0)
     printf("Even");
   else
     printf("Odd");
}

void main()
{
    evenodd(15);
    evenodd(10);
}
