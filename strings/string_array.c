// Program 5 names and store them in an array
// Date : 16-AUG-2023

#include <stdio.h>

void main()
{
   char name[5][20];
   int i;



     for(i = 0; i < 5  ; i ++)
     {
         printf("Enter name :");
         gets(name[i]);
     }

     for(i = 0; i < 5  ; i ++)
     {
         puts(strupr(name[i]));
     }

}
