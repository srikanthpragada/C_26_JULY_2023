// Function to return first even num in the array, if found otherwise -1

#include <stdio.h>

int first_even(int a[5])
{
 int i;

     for(i = 0; i < 5; i ++)
     {
       if (a[i] % 2 == 0)
           return a[i];
     }

     return -1; // not found
}


void main()
{
  int a[] = {11,23,45,59,35};

    printf("%d ", first_even(a));

}
