// Program to demo nested loop
// Date : 08-AUG-2023

#include <stdio.h>

void main()
{
 int i,j;


       for(i = 1; i <= 5; i ++)
       {
           for(j = 1; j <= 5; j ++)
           {
             printf("%d ", i);
           }

           printf("\n");
       }
}
