// Program 5 names and print largest
// Date : 16-AUG-2023

#include <stdio.h>

void main()
{
   char name[20], largest[20];
   int i;

     //strcpy(largest,"");
     largest[0] = '\0';

     for(i = 1; i <= 5  ; i ++)
     {
         printf("Enter name :");
         gets(name);

         if(strcmp(name, largest) > 0)
             strcpy(largest, name);
     }

     printf("Largest name = %s", largest);
}
