// Program to display unit matrix of 5 X 5
// Date : 08-AUG-2023

#include <stdio.h>

void main()
{
 int i,j;


       for(i = 1; i <= 5; i ++)
       {
           for(j = 1; j <= 5; j ++)
           {
             if(i == j)
                 printf(" 1 ");
             else
                 printf(" 0 ");
           }
           printf("\n");
       }
}
