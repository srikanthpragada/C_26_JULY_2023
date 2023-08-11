// Program take an array of 10 ints, read input from keyboard and print it
// Date : 11-AUG-2023

#include <stdio.h>

void main()
{
    int a[10];
    int i;


    for(i = 0; i < 10; i ++)
    {
       scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i ++)
    {
        printf("%d ", a[i]);
    }

}
