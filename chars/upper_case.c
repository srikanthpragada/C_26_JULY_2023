// Program take a char and display whether it is uppercase
// Date : 10-AUG-2023

#include <stdio.h>

void main()
{
 char ch;

     printf("Enter char :");
     ch = getchar();

     if(ch >= 65 && ch <= 90)
        printf("Uppercase");
     else
        printf("Non uppercase");
}
