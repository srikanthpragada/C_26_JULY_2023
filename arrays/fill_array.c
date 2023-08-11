// Program take an array of 10 ints, fill it with random numbers and print it
// Date : 11-AUG-2023

#include <stdio.h>

void main()
{
    int a[10];
    int i;


    srand(time(0)); // init seed

    for(i = 0; i < 10; i ++)
    {
       a[i] = rand() % 100;
    }

    for(i = 0; i < 10; i ++)
    {
       printf("%d\n", a[i]);
    }

}
