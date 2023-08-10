// Program take a pin (4 digits) from user
// Date : 10-AUG-2023

#include <stdio.h>

void main()
{
    char ch;
    int i, alldigits = 1;

    printf("Enter PIN :");

    for(i = 1; i <= 4; i ++)
    {
        ch = getch();
        putch('*');

        if(!isdigit(ch))
            alldigits = 0;
    }

    if(alldigits)
        printf("\nValid PIN");
    else
        printf("\nInvalid PIN");

}
