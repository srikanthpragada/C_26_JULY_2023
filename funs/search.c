// Function to search and return pos, if found otherwise -1

#include <stdio.h>

int search(int a[10], int num)
{
 int i;

     for(i = 0; i < 10; i ++)
     {
       if (a[i] == num)
           return i; // terminate fun and return value
     }

     return -1; // not found
}


void main()
{
  int a[] = {1,2,3,4,5,6,7,8,9,10};

    printf("%d ", search(a, 55));

}
