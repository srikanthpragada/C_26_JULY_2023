// Program take a name and say hello
// Date : 16-AUG-2023

#include <stdio.h>

void main()
{
   char name[20];

     printf("Enter name :");
     //scanf("%s", name);
     gets(name);

     printf("Hello %s", name);
}
