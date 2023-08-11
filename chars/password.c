// Program take a password and validate it
// Date : 11-AUG-2023

#include <stdio.h>

void main()
{
    char ch;
    int i, upper = 0, digit = 0;


    printf("Enter Password :");

    for(i = 1; i <= 8; i ++)
    {
        ch = getch();
        putch('*');

        if(isdigit(ch))
            digit = 1;
        else
            if(isupper(ch))
               upper = 1;
    }

    if(upper && digit)
        printf("\nValid Password");
    else
    {
       if(!upper)
           printf("\nUppercase is missing");

       if(!digit)
           printf("\nDigit is missing");
    }




}
