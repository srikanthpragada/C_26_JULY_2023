// Program take a char and display whether it is uppercase
// Date : 10-AUG-2023

#include <stdio.h>

void main()
{
    char ch;


    printf("Enter char:");
    ch = getche();

    if (isupper(ch))
        printf("Upper case");
    else
        if(islower(ch))
            printf("Lower case");
        else
            printf("some other");
}
