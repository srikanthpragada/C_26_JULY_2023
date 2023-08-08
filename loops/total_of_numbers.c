// Program to take prices until user gives 0
// Date : 08-AUG-2023

#include <stdio.h>

void main()
{
 int price, total = 0;

      while(1)
      {
          printf("Enter price [0 to stop] :");
          scanf("%d",&price);

          if(price == 0)
             break;

          total += price;
      }

      printf("Total = %d ", total);
}
