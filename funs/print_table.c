// Function to return a value

#include <stdio.h>

int next_even(int num)
{
   return num % 2 == 0 ? num + 2 : num + 1;
}


void main()
{
  int n1 = 15, n2;

       n2 = next_even(n1);
       printf("%d", n2);

}
