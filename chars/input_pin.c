// Program take a pin (4 digits) from user
// Date : 10-AUG-2023

#include <stdio.h>

void main()
{
    char ch;
    int i, count = 0;


    printf("Enter PIN :");

    for(i = 1; i <= 4; i ++)
    {
        ch = getch();
        putch('*');
        if(isdigit(ch))
            count ++;
    }

    if(count == 4)
        printf("\nValid PIN");
    else
        printf("\nInvalid PIN");

}
