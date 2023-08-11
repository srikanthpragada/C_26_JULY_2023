// Program take an array of 10 ints, fill it and print it
// Date : 11-AUG-2023

#include <stdio.h>

void main()
{
    int a[10];
    int i;


    for(i = 0; i < 10; i ++)
    {
       a[i] = i * i;
    }

    for(i = 0; i < 10; i ++)
    {
        printf("%d ", a[i]);
    }




}
