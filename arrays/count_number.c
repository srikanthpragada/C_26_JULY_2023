// Count how many times a number is present in the array
// Date : 12-AUG-2023

#include <stdio.h>

void main()
{
    int a[20];
    int i, n, count = 0;


    srand(time(0)); // init seed
    for(i = 0; i < 20; i ++)
    {
       a[i] = rand() % 100;
       printf("%5d", a[i]);
    }

    printf("\nEnter number :");
    scanf("%d", &n);

    for(i = 0; i < 20; i ++)
    {
        if(a[i] == n)
        {
           count ++;
        }
    }

    printf("Count = %d", count);

}
